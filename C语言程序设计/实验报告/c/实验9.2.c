#include <stdio.h>
#include <math.h>

int chessboard[8][8] = {0};
int snum = 0;

int isDanger(int row,int col){
	int i,j;
	for( i = 0 ; i < 8 ; i++ ){//row
		if(chessboard[row][i] == 1)
			return 0;
	}
	for( i = 0 ; i < 8 ; i++ ){//column
		if(chessboard[i][col] == 1)
			return 0;
	}
	for( i = 0 ; i < 8 ; i++ ){
		for( j = 0 ; j < 8 ; j++ ){
			if( chessboard[i][j] == 1 && abs(i-row) == abs(j-col) )
				return 0;
		}
	}
	return 1;
}

void printResult(){
	int i,j;
	printf("====第%d个方案====\n",++snum);
	for( i = 0 ; i < 8 ; i++ ){
		for( j = 0 ; j < 8 ; j++ ){
			if( chessboard[i][j] == 1 )
				printf("chessboard[%d][%d]\n",i,j);
		}
	}
}

void eightqueen(int row){
	int col;
	if(row > 7){
		printResult();
		return;
	}
	for(col = 0 ; col < 8 ; col++){
		if(isDanger(row,col)){
			chessboard[row][col] = 1;
			eightqueen(row+1);
			chessboard[row][col] = 0;
		}
	}
} 
int main(){
	eightqueen(0);
	return 0;
}

