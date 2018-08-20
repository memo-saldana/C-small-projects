#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


struct Team {
	string name;
	int problems[10];
	int pSolved;
	int duration;

	// Compare operator overload to sort the teams after they finish submitting problems
	bool operator <(Team b) {
		if(pSolved > b.pSolved || (pSolved == b.pSolved && duration < b.duration)){
			return true;
		}
		else {
			return false;
		}
	}
};

// Seeing the current status of the teams, mostly for debugging.
void showCurrentStatus(Team teams[20], int nTeams, int nProblems){
	for (int i = 0; i < nTeams; ++i)
	{
		cout<<teams[i].name<<" ";
		for (int j = 0; j < nProblems; ++j)
		{
			cout<<teams[i].problems[j]<<" ";
		}
		cout<< "-> "<<teams[i].pSolved<<" solved in "<<teams[i].duration<<" minutes."<<endl;
	}
}

int main(){
	int nTeams, nProblems, nSubmits, time;
	string name;
	char problem, checked;

	// Number of teams and number of problems
	cin>>nTeams>>nProblems;

	Team teams[20];

	// Enter names of teams
	for (int i = 0; i < nTeams; ++i)
	{
		cin>>teams[i].name;
		teams[i].pSolved = 0;
		teams[i].duration = 0;
		for (int j = 0; j < 10; ++j)
		{
			teams[i].problems[j] = 0;
		}
	}
	// showCurrentStatus(teams, nTeams, nProblems);
	
	// Enter each submission, while entering they are being evaluated.
	cin>>nSubmits;
	for (int i = 0; i < nSubmits; ++i)
	{
		cin>>name>>problem>>time>>checked;

		// Searches for team by name (Secuencial search)
		for (int j = 0; j < nTeams; ++j)
		{
			if (teams[j].name == name)
			{
				// When found, checks if problem is accepted ("A") or wrong ("W")
				if(checked == 'A'){

					// If accepted, one is sumed to problems solved, and the time taken is sumed to the total 
					// duration, along with a 20 min penalty for each wrong submission.
					teams[j].pSolved++;
					teams[j].duration+= (teams[j].problems[int(problem-'A')] * 20) + time;
				
				} else if(checked == 'W'){
				
					// If wrong, just keep track of how many times it was wrong.
					teams[j].problems[int(problem - 'A')]++;
				
				}
			}
		}
		// showCurrentStatus(teams, nTeams, nProblems);

	}
	sort(teams, teams + nTeams);

	for (int i = 0; i < nTeams; ++i)
	{
		cout<<i+1<<" - "<<teams[i].name<<" "<<teams[i].pSolved<<" ";
		if(teams[i].duration>0){
			cout<<teams[i].duration<<endl;
		}
		else{
			cout<<"-"<<endl;
		}
	}


	return 0;
}
