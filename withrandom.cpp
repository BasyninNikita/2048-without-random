#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int m;
void poyavch(int matr[4][4]) {
	int i = rand() % 4, j = rand() % 4, k = rand() % 10;
	if ((matr[i][j] == 0) && (k == 1)) matr[i][j] = 4;
	else if (matr[i][j] == 0) matr[i][j] = 2;
	else poyavch(matr);
}
void vverh(int matr[4][4])
{
    for (int j=0; j<4; j++) {
					for (int i=0; i<3; i++)
					if (matr[i] [j] == 0) {
						for (int k=i+1; k<=3; k++){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
											}
						}
					}
				}
				
				for (int j=0; j<4; j++) {
					for (int i=0; i<3; i++)
					if (matr[i][j] == matr[i+1] [j]) {
						matr[i][j] += matr[i+1][j];
						matr[i+1][j]=0;
						m+=matr[i][j];
					}
				}
				
				for (int j=0; j<4; j++) {
					for (int i=0; i<3; i++)
					if (matr[i] [j] == 0) {
						for (int k=i+1; k<=3; k++){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
				
							}
						}
					}
				}
}
void vniz(int matr[4][4])
{
    for (int j=0; j<4; j++) {
					for (int i=3; i>0; i--)     
					if (matr[i] [j] == 0) {
						for (int k=i-1; k>=0; k--){
							if (matr[k][j] != 0){
								matr[i][j] = matr[k][j];
								matr[k][j]=0;
				
							}
						}
					}	
				}
				for (int j=0; j<4; j++) {
					
					for (int i=3; i>0; i--){
						if (matr[i][j] == matr[i-1] [j]) {
							matr[i][j] += matr[i-1][j];
							matr[i-1][j]=0;
							m+=matr[i][j];
						}
					}
				}
				for (int j=0; j<4; j++) {
					for (int i=3; i>0; i--)     
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
}
void vpravo(int matr[4][4])
{
     for (int i=0; i<4; i++) {
					for (int j=3; j>0; j--)
					if (matr[i] [j] == 0) {
						for (int k=j-1; k>=0; k--){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								break;
							}
						}
					}
				}
				
				for (int i=0; i<4; i++) {
					for (int j=3; j>0;j-- )
					if (matr[i][j] == matr[i] [j-1]) {
						matr[i][j] += matr[i][j-1];
						matr[i][j-1]=0;
						m+=matr[i][j];
					}
				}
				
				for (int i=0; i<4; i++) {
					for (int j=3; j>0; j--)
					if (matr[i] [j] == 0) {
						for (int k=j-1; k>=0; k--){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								
							}
						}
					}
				}
}
void vlevo(int matr[4][4])
{
     for (int i=0; i<4; i++) {
					for (int j=0; j<3; j++)
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
				
				for (int i=0; i<4; i++) {
					for (int j=0; j<3; j++)
					if (matr[i][j] == matr[i] [j+1]) {
						matr[i][j] += matr[i][j+1];
						matr[i][j+1]=0;
						m+=matr[i][j];
					}
			   	}
                for (int i=0; i<4; i++) {
					for (int j=0; j<3; j++)
					if (matr[i] [j] == 0) {
						for (int k=j+1; k<=3; k++){
							if (matr[i][k] != 0){
								matr[i][j] = matr[i][k];
								matr[i][k]=0;
								
							}
						}
					}
				}
}
void vyvod(int matr[4][4])
{
    for (int  i=0; i<4;i++) {
					for (int j=0;j<4;j++) {
						if (matr[i][j] == 0){
						cout << "* ";
					}
					else {
						cout << matr[i][j] << ' ';
					}
					}
					cout << endl;
				}
}
int sravn(int matr1[4][4], int matr[4][4]) {
	int a=1;
	for (int i=0;i<4;i++) {
		for (int j=0;j<4;j++)
			if (matr1[i][j] != matr[i][j]) return a * 0;
			else a *= 1;
	}
	return a;
}         
int prover(int matr[4][4])
{
	int a = 0;
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++)
			if (matr[i][j] == matr[i + 1][j] || matr[i][j] == matr[i][j + 1] || matr[i][j] == 0) {
				a = 1;
				break;
			}
		if (a == 1) break;
	}

	if (a != 1) { cout << "Game over. Score : " << m << endl; return -1; }
	return 0;
}
void novmatr(int matr1[4][4],int matr[4][4])
{
    for(int i=1;i<4;i++)
    {
        for(int j=0;j<4;j++)
            matr1[i][j]=matr[i][j];
    }
}
int main()
{
 int matr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
 int matr1[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
 char op;
 srand(time(NULL));
 poyavch(matr);poyavch(matr);
 novmatr(matr1,matr);
 vyvod(matr);
 while(cin>>op)
 {
     prover(matr);
     if(op=='j')
     {
         vniz(matr);
         if(!sravn(matr1,matr)){poyavch(matr);};
         vyvod(matr);
         cout << "Score: " << m << endl;
         novmatr(matr1,matr);
     }
     if(op=='k')
     {
         vverh(matr);
         if(!sravn(matr1,matr)){poyavch(matr);};
         vyvod(matr);
         cout << "Score: " << m << endl;
         novmatr(matr1,matr);
     }
     if(op=='l')
     {
         vpravo(matr);
         if(!sravn(matr1,matr)){poyavch(matr);};
         vyvod(matr);
         cout << "Score: " << m << endl; 
         novmatr(matr1,matr);
     }
     if(op=='h')
     {
         vlevo(matr);
         if(!sravn(matr1,matr)){poyavch(matr);};
         vyvod(matr);
         cout << "Score: " << m << endl;
         novmatr(matr1,matr);
     }
    }
}
