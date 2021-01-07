////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Dcols.c
// This File:        cache2Dcols.c
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
        for(int c=0; c<col; c++){
                for(int r=0; r<row; r++){
			arr2D[r][c] = r + c;
        	}
	}
        return 0;
}
