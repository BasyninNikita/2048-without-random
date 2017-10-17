#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{	
	int matr[4][4], i, j, m=0;
	char op;
	
	for ( i = 0; i < 4; i++) {
		for ( j = 0; j < 4; j++) {
			cin >> matr[i][j];
		}
		cin.get(op);
	}
	
	cout <<endl << "Press Enter" <<endl;
	cin.get(op);
	
	for ( i = 0; i < 4; i++) {
		for ( j = 0; j < 4; j++) {
			if (matr[i][j] == 0){
				cout << "* ";
			}
			else {
				cout << matr[i][j] << ' ';
			}
		}
		cout << endl;
	}	
	cin >> op;
	while(op == 'j' || op == 'k' || op == 'h' || op == 'l') {
		cout << endl;
        if(op=='j')
        {
            for (j=0; j<4; j++) {
					for (i=3; i>0; i--)     
					if (matr[i] [j] == 0) {
						for (int k=i-1; k>=0; k--){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
				
							}
						}
					}	
				}
				for (j=0; j<4; j++) {
					
					for (i=3; i>0; i--){
						if (matr[i][j] == matr[i-1] [j]) {
							matr[i][j] += matr[i-1][j];
							matr[i-1][j]=0;
							m+=matr[i][j];
						}
					}
				}
				for (j=0; j<4; j++) {
					for (i=3; i>0; i--)     
					if (matr[i] [j] == 0) {
						for (int k=i-1; k>=0; k--){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
								break;
							}
						}
					}
				}				
				for ( i = 0; i < 4; i++) {
					for ( j = 0; j < 4; j++) {
						if (matr[i][j] == 0){
						cout << "* ";
					}
					else {
						cout << matr[i][j] << ' ';
					}
					}
					cout << endl;
				}
				cout << "Score: " << m << endl;
				cin >> op;
				
        }
        else if(op=='k'){
        for (j=0; j<4; j++) {
					for (i=0; i<3; i++)
					if (matr[i] [j] == 0) {
						for (int k=i+1; k<=3; k++){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
											}
						}
					}
				}
				
				for (j=0; j<4; j++) {
					for (i=0; i<3; i++)
					if (matr[i][j] == matr[i+1] [j]) {
						matr[i][j] += matr[i+1][j];
						matr[i+1][j]=0;
						m+=matr[i][j];
					}
				}
				
				for (j=0; j<4; j++) {
					for (i=0; i<3; i++)
					if (matr[i] [j] == 0) {
						for (int k=i+1; k<=3; k++){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
				
							}
						}
					}
				}
				for ( i = 0; i < 4; i++) {
					for ( j = 0; j < 4; j++) {
						if (matr[i][j] == 0){
						cout << "* ";
					}
					else {
						cout << matr[i][j] << ' ';
					}
					}
					cout << endl;
				}
				cout << "Score: " << m << endl;
				cin >> op;			
				
			}
			else if (op=='l'){
            for (i=0; i<4; i++) {
					for (j=3; j>0; j--)
					if (matr[i] [j] == 0) {
						for (int k=j-1; k>=0; k--){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								
							}
						}
					}
				}
				
				for (i=0; i<4; i++) {
					for (j=3; j>0;j-- )
					if (matr[i][j] == matr[i] [j-1]) {
						matr[i][j] += matr[i][j-1];
						matr[i][j-1]=0;
						m+=matr[i][j];
					}
				}
				
				for (i=0; i<4; i++) {
					for (j=3; j>0; j--)
					if (matr[i] [j] == 0) {
						for (int k=j-1; k>=0; k--){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								
							}
						}
					}
				}
				for ( i = 0; i < 4; i++) {
					for ( j = 0; j < 4; j++) {
						if (matr[i][j] == 0){
						cout << "* ";
					}
					else {
						cout << matr[i][j] << ' ';
					}
					}
					cout << endl;
				}
				cout << "Score: " << m << endl;
				cin >> op;			
				
			}
			else if (op=='h'){
            for (i=0; i<4; i++) {
					for (j=0; j<3; j++)
					if (matr[i] [j] == 0) {
						for (int k=j+1; k<=3; k++){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								break;
							}
						}
					}
				}
				
				for (i=0; i<4; i++) {
					for (j=0; j<3; j++)
					if (matr[i][j] == matr[i] [j+1]) {
						matr[i][j] += matr[i][j+1];
						matr[i][j+1]=0;
						m+=matr[i][j];
					}
			   	}
                for (i=0; i<4; i++) {
					for (j=0; j<3; j++)
					if (matr[i] [j] == 0) {
						for (int k=j+1; k<=3; k++){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								
							}
						}
					}
				}
				for ( i = 0; i < 4; i++) {
					for ( j = 0; j < 4; j++) {
						if (matr[i][j] == 0){
						cout << "* ";
					}
					else {
						cout << matr[i][j] << ' ';
					}
					}
					cout << endl;
				}
				cout << "Score: " << m << endl;
				cin >> op;			
			}
	}
	
}
