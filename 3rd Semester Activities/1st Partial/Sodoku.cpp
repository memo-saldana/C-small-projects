#include <iostream>
using namespace std;

int main() {

	bool numberFound,rowsCorrect,columnsCorrect,matrixCorrect;
	rowsCorrect = true;
	columnsCorrect = true;
	matrixCorrect = true;
	int sudoku[9][9];

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin>>sudoku[i][j];
		}
	}

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			numberFound = false;
			for (int m = 0; m < 9 && !numberFound; ++m)
			{
				if(sudoku[i][m] == j){
					numberFound = true;
				}
			}
			if(!numberFound){
				rowsCorrect = false;
			}
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			numberFound = false;
			for (int m = 0; m < 9 && !numberFound; ++m)
			{
				if( sudoku[m][i] == j){
					numberFound = true;
				}
			}
			if(!numberFound){
				columnsCorrect = false;
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int n = 1; n < 10; ++n)
			{
				numberFound = false;
				for (int k = 0; k < 3 && !numberFound; ++k)
				{
					for (int l = 0; l < 3 && !numberFound; ++l)
					{
						if(sudoku[k+i*3][l+j*3] == n){
							numberFound = true;
						}
					}
				}
				if(!numberFound){
					matrixCorrect = false;
				}
			}
		}
	}
	if(rowsCorrect && columnsCorrect && matrixCorrect){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}

	return 0;
}