////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Drows.c
// This File:        cache2Drows.c
// Other Files:      (name of all other files if any)
// Semester:         CS 354 SPRING 2019
//           
// Author:           Fiona Lee
// Email:            mlee353@wisc.edu
// CS Login:         flee
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define row 3000
#define col 500
int arr2D[row][col];

int main(int argc, char*argv[]){
        for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
			arr2D[i][j] = i + j;
        	}
	}
        return 0;
} 
