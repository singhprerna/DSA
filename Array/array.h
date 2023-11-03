#ifndef _ARRAY_H_
#define _ARRAY_H_

#include<stdio.h>

#define PRINT_ARRAY(array, size)\
    for (int i = 0; i < size; i++) {\
        printf("%d ", array[i]);\
    }\
    printf("\n");

int search(int* nums, int numsSize, int target);
//int numIslands(char** grid, int gridSize, int* gridColSize);
//void markVisited (char** grid, int m, int n, int row, int col);

#endif
