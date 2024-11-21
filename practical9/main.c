#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    // define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // n function which gets the number of lines
    int n = getlines(filename);

    // Open the file 
    f = fopen(filename, "r");

    int i;

    // Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
    int **magicSquare = (int**)malloc(n*sizeof(int*));
    for (i = 0; i<n; i++) {
        magicSquare[i] = (int*)malloc(n*sizeof(int));
    }

    // Inputting integer data into the matrix;
    int j = 0;
    for (i = 0; i< n; i++) {
        for (j = 0; j< n; j++) {
            fscanf(f, "%d", &magicSquare[i][j]);
        }
    }

    // Check if input is a magic square using isMagicSquare()
    int checkMagic = isMagicSquare(magicSquare, n);
    if (checkMagic == 0) {
        printf("This is not a magic square\n");
    }
    else {
        printf("This is a magic square\n");
    }

    // Freeing each row separately before freeing the array of pointers
    for (int i = 0; i < n; i++) {
        free(magicSquare[i]);
    }
    free(magicSquare);

    // Close the file
    fclose(f);
    return 0;
}

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}