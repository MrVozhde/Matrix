#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int row ;
	int column ;
	
	
	
	cout << "Enter number of rows" << endl;
	cin >> row ;	
	cout << "Enter number of columns" << endl;	
	cin >> column;
	
	int matris1[row][column];
	int matris2[row][column];
	int sum[row][column];	

	cout << "Enter the first matris :" << endl;
	for ( int i = 0 ; i<row ; i++){
		for ( int j = 0 ; j<column ; j++){
			cin >> matris1[i][j];
		}
	}
	
	
	cout << "Enter the second matris :" << endl;	
	for ( int i = 0 ; i<row ; i++){
		for ( int j = 0 ; j<column ; j++){
			cin >> matris2[i][j];
		}
	}
	
	
	
	for(int i = 0 ; i<row ; i++){
		for ( int j=0 ; j<column ; j++)
		sum[i][j]= matris1[i][j] + matris2[i][j];
	}
	
	
	cout << "The Final matris is :" << endl;
		for ( int i = 0 ; i<row ; i++){
			for ( int j = 0 ; j<column ; j++){
				cout << sum[i][j]<< " " ;
			}
			cout << endl;	
		}

		return 0;
}
		
