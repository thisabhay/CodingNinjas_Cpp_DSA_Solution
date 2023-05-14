// Sudoku Solver
#include <iostream>
using namespace std;
bool checkValidity(int **board,int value,int i,int j){
    for(int a=0;a<9;a++){
        
        if(board[a][j]==value){
            return false;
        }
    }
    for(int a=0;a<9;a++){
        
        if(board[i][a]==value){
            return false;
        }
    }
    int minI=0;
    int maxI=0;
    int minJ=0;
    int maxJ=0;
    if(i==0 || i==1 || i==2){
        minI=0;
        maxI=2;
    }
    if(i==3 || i==4 || i==5){
        minI=3;
        maxI=5;
    }
    if(i==6 || i==7 || i==8){
        minI=6;
        maxI=8;
    }
    if(j==0 || j==1 || j==2){
        minJ=0;
        maxJ=2;
    }
    if(j==3 || j==4 || j==5){
        minJ=3;
        maxJ=5;
    }
    if(j==6 || j==7 || j==8){
        minJ=6;
        maxJ=8;
    }
    for(int a=minI;a<=maxI;a++){
        for(int b=minJ;b<=maxJ;b++){
            if(board[a][b]==value){
                return false;
            }
        }
    }
    return true;
}
bool solveSoduko(int **board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]==0){
                for(int k=1;k<=9;k++){
                    // bool isFilled=false;
                    if(checkValidity(board,k,i,j)){
                        board[i][j]=k;
                        if(solveSoduko(board)){
                            return true;
                        };
                        
                    };
                    
                }
                board[i][j]=0;
                return false;
            }
        }
    }
    return true;
}
int main() {
	// your code goes here
	int **board=new int*[9];
	for(int i=0;i<9;i++){
	    board[i]=new int[9];
	    for(int j=0;j<9;j++){
	        cin>>board[i][j];
	    }
	}
	// cout<<"Printing Output"<<endl;
	if(solveSoduko(board)){
	    cout<<"true"<<endl;
	}
    else{
        cout<<"false"<<endl;
    }
    for(int i=0;i<9;i++){
        delete board[i];
    }
    delete board;
	return 0;
	
}