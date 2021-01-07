////////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c
// This File:        cache1D.c
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

#define size 100000
int arr[size];

int main(int argc, char*argv[]){
	for(int i=0; i<size; i++){
		arr[i] = i;
	}
	return 0;	
}
