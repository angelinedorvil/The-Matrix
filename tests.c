/*
Student: [Angeline Dorvil] 
Date: [11/10/2023]
Features: [Creating test functions to check whether they need to be sorted]
Bugs: [N/A]
 */
#include <stdlib.h>
#include "tools.h"
#include "testlib.h"

void test_is_sorted_1(){
    // Example test function
    int matrix[NB_ROWS][NB_COLS] = {{1 , 2 , 3 , 4 ,  5} ,
                                    {6 , 7 , 8 , 9 , 10} ,
                                    {11, 12, 13, 14, 15} };
    TEST("Already sorted matrix", isMatrixSorted(matrix) == 1);
}

void test_sort_1(){
    // Example test function
    int matrix[NB_ROWS][NB_COLS] = {{1 , 2 , 5 , 4 ,  3} ,
                                    {6 , 7 , 8 , 9 , 10} ,
                                    {11, 12, 13, 14, 15} };
    matrixSort(matrix);
    TEST("test_sort_1",isMatrixSorted(matrix));
}

void test_sorting_matrix(){ //testing a matrix that is sorted if initital sorting test fails then re-tested after sorting
    int varMatrix[NB_ROWS][NB_COLS] = {{1 , 2 , 3 , 4 ,  5} ,
                                       {9 , 0 , 6 , 9 , 10} ,
                                       {11, 2, 1, 1, 0} };
                                    
    TEST("Not sorted sorting_matrix", isMatrixSorted(varMatrix) == 1);
    
    if (isMatrixSorted(varMatrix) != 1){
    	matrixSort(varMatrix);
    }
    TEST("test_sorting_matrix",isMatrixSorted(varMatrix));
}

void test_sorting_sorted_matrix(){ //testing re-sorting a matrix that is already sorted to make sure sorting function is working properly
    int matrixs[NB_ROWS][NB_COLS] = {{1 , 2 , 3 , 4 ,  5} ,
                                     {6 , 7 , 8 , 9 , 10} ,
                                     {11, 12, 13, 14, 15} };	
    matrixSort(matrixs);
    TEST("test_sorting_sorted_matrix",isMatrixSorted(matrixs));                                 
}

void test_descending_matrix(){ //testing a descending matrix, After initital sorting test fails, matrix should be sorted then re-tested
    int descendingMatrix[NB_ROWS][NB_COLS] = {{5, 4, 3, 2, 1},
                                              {10, 9, 8, 7, 6},
                                              {15, 14, 13, 12, 11}};
                                    
    TEST("Not sorted descending matrix", isMatrixSorted(descendingMatrix) == 1);
    
    if (isMatrixSorted(descendingMatrix) != 1){
    	matrixSort(descendingMatrix);
    }
    TEST("test_descending_matrix",isMatrixSorted(descendingMatrix));
}

void single_defined_element_matrix(){ // Check if isMatrixSorted correctly identifies a single defined element matrix as unsorted since all other elements will be automatically set to 0.
    int singleDefElementMatrix[NB_ROWS][NB_COLS] = {{42}};
    TEST("single defined element matrix", isMatrixSorted(singleDefElementMatrix) == 1);
}

void runAllTests(){
    // This is how you would use the above test functions
    test_is_sorted_1();
    test_sort_1();
    test_sorting_matrix();
    test_sorting_sorted_matrix();
    test_descending_matrix();   
    single_defined_element_matrix();
}
