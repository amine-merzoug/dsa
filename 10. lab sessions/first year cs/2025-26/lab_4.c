#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 15

/*
  Example
  1 2 3 
  4 6 2
  8 9 4 
  - Matrix diagonal: 1 6 4
  - Matrix secondary diagonal: 3 6 8 
*/

// Read the desired number of rows in the matrix (1 <= rows <= MAX_ROWS)
int read_num_rows(){
    int num_rows;
    do{
        printf("Enter the number of rows in the matrix (1 <= rows <=%d): ", MAX_ROWS);
        scanf("%d", &num_rows);
    } while (num_rows < 1 || num_rows > MAX_ROWS);
    return num_rows;
}

// Read the desired number of columns in the matrix (1 <= columns <= MAX_COLS)
int read_num_columns(){
    int num_columns;
    do{
        printf("Enter the number of columns in the matrix (1 <= columns <=%d): ", MAX_COLS);
        scanf("%d", &num_columns);
    } while (num_columns < 1 || num_columns > MAX_COLS);
    return num_columns;
}

// Read the elements of the matrix
void fill_matrix(int a[][MAX_COLS], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Enter item[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

// Display the elements of the matrix
void display_matrix(int a[][MAX_COLS], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Print the matrix diagonal (version 1)
// Time Complexity: O(N^2) - Big O Notation
// Note: the matrix must be square
void display_matrix_diagonal(int m[][MAX_COLS], int rows, int cols){
    printf("Matrix diagonal: ");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (i == j){
                printf("%d ", m[i][j]);
            }
        }
    } 
}

// Print the matrix diagonal (version 2)
// Time Complexity: O(N) 
// Note: the matrix must be square
void display_matrix_diagonal_v2(int m[][MAX_COLS], int rows, int cols){
    printf("Matrix diagonal: ");
    for (int i = 0; i < rows; i++){
        printf("%d | ", m[i][i]);
    } 
    printf("\n");
}

// Print the matrix secondary diagonal
// Time Complexity: O(N)  
void display_matrix_secondary_diagonal(int m[][MAX_COLS], int rows, int cols){
    printf("Matrix secondary diagonal: ");
    //int j = cols - 1;
    for (int i = 0; i < rows; i++){
        //printf("%d | ", m[i][j]);
        printf("%d | ", m[i][cols - 1 - i]);
        //j--;
    } 
    printf("\n");
}

int main(){
    int m[MAX_ROWS][MAX_COLS];
    //int m[MAX_ROWS][MAX_COLS]= {{1, 0, 3}, 
    //                            {2, 7, 8}};

    int rows = read_num_rows();
    int cols = read_num_columns();

    fill_matrix(m, rows, cols);
    display_matrix(m, rows, cols);

    display_matrix_diagonal_v2(m, rows, cols);
    display_matrix_secondary_diagonal(m, rows, cols);
}