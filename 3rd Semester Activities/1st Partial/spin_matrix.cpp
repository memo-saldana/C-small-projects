#include <iostream>
using namespace std;

int main(){
	int n, matrix[4][4], newMatrix[4][4];
	cin>>n;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{			
			cin>>matrix[i][j];
		}
	}

	n= n%4;
	if(n<0){
		n+=4;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{	
			for (int k = 0; k < 4; ++k)
			{
				
				newMatrix[j][k] = matrix[3-k][j];
			}
		}
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				matrix[j][k]=newMatrix[j][k];
			}
		}		
	}
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(n!=0){
				cout<<newMatrix[i][j];
			}
			else 
			{
				cout<<matrix[i][j];
			}
			if(j<3){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}