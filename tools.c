// TODO - Implement the functions in this file

/* Assignment M4PA
File tools.c
Student: [Angeline Dorvil] [U95528605]
Date: [11/10/2023]
Features: [Creating 2 functions to sort matrix and check if matrix was sorted accurately]
Bugs: [N/A]
 */

#include <stdlib.h>
#include "tools.h"

/*
Checks if a given matrix is sorted in ascending order row-wise. 
@param data The matrix to be checked.
@return 1 if the matrix is sorted, 0 otherwise.
*/
int isMatrixSorted( int data[NB_ROWS][NB_COLS] ){
	for (size_t i=0; i<NB_ROWS; i++){
    		for (size_t j=0; j<NB_COLS-1; j++){
    			if (data[i][j] > data[i][j+1]){
				return 0; //matrix is NOT sorted
			}
  		}		
	}
	return 1; //matrix is sorted
}


/*
Sorts each row of a matrix in ascending order using the bubble sort algorithm. 
****It took sometime for me to figure out how to adapt the bubble sort method, should have finish reading the instructions first for the alternative method....******

@param data The matrix to be sorted.
*/
void matrixSort( int data[NB_ROWS][NB_COLS]){
    for (size_t i=0; i<NB_ROWS; i++){
    	for (size_t j=0; j<NB_COLS-1; j++){
    		for (size_t k=0; k<NB_COLS-j-1; k++){
    			if (data[i][k] > data[i][k+1]){
    				int hold = data[i][k]; // Swap elements if they are in the wrong order
    				data[i][k] = data[i][k+1];
    				data[i][k+1] = hold;
    			}	
 		}   
    	}
    }
    return; 
}
