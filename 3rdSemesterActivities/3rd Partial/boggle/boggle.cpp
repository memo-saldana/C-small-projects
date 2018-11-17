#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

bool wordDFS(char board[][4], int i, int j, vector<vector<bool>> &found, int length, string word, string curr){
	if(length == 0){
		return curr == word;
	}
	found[i][j]=true;
	bool rec=false;
	for(int row=i-1; row<=i+1 && row<4; ++row){
		for(int col=j-1; col<=j+1 && col<4; ++col){
			if(row>-1 && col>-1 && !found[row][col]){
				rec = rec || wordDFS(board, row,col,found,length-1,word,curr+board[row][col]);
			}
		}
	}
	found[i][j] = false;
	return rec;
}

int main(){
	char board[4][4];
	vector<string> words;
	vector<vector<bool>> found(4, vector<bool>(4,false));
	string word,curr;
	bool complete;
	int games,w,score,l;
	cin>>games;

	for(int n=0; n<games; ++n){
		score = 0;

		for(int i = 0; i < 4; ++i){
			for (int j = 0; j < 4; ++j)
			{
				cin>>board[i][j];
			}
		}
		cin>>w;
		words.clear();
		for (int i = 0; i < w; ++i)
		{
			cin>>word;
			words.push_back(word);
		}

		for (int k = 0; k < words.size(); ++k)
		{
			word = words[k];
			l=word.length();
			complete = false;
			for(int i=0; i<4 && !complete; ++i){
				for(int j =0; j<4 && !complete; ++j){
					curr="";
					curr += board[i][j];
					complete=wordDFS(board, i,j, found,l-1, word, curr);
				}
			}
			if(complete){
				if(word.length()>=8){
					score+=11;
				} else if (word.length()==7){
					score+=5;
				} else if (word.length()==6){
					score+=3;
				} else if (word.length()==5){
					score+=2;
				} else if (word.length()<=4){
					score+=1;
				}

			}
		}
		cout<<"Game "<<n+1<<": "<<score<<endl;
	}

	return 0;
}
