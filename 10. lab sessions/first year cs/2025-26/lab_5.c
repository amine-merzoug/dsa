/* 
   Problem 1 
   ---------
   You are given an array A of n integers.
   Write a function to reverse the array in place.
   Input:  A = [1, 2, 3, 4, 5]
   Output: A = [5, 4, 3, 2, 1]
   --------------------------------------------------
   Problem 2
   ---------
   Given a nxm matrix, displays for any pair of two consecutive rows (odd and even rows),  
   1. the sum of the elements of the odd row divided by 
   2. the value of the smallest element of the even row 

   --------------------------------------------------
   Problem 3
   ---------
   Rotate an n x n matrix by 90° clockwise without using extra space.
   Input
   1 2 3
   4 5 6
   7 8 9

   Output
   7 4 1
   8 5 2
   9 6 3
*/

#include <stdio.h>

#define ARR_CAPACITY 20

#define MAX_ROWS 10
#define MAX_COLS 15

// Read and check the array size: 1 <= arr_size <= ARR_CAPACITY
int read_arr_size(){
    int arr_size;

    do {
        printf("Enter the array size (1 <= arr_size <= %d): ", ARR_CAPACITY);
        scanf("%d", &arr_size);
    } while (arr_size < 1 || arr_size > ARR_CAPACITY);
    
    return arr_size;
}

// Read the elements of the given array 
void read_arr(int arr[], int arr_size){
    for (int i = 0; i < arr_size; i++){
        printf("Enter item[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

// Display the elements of the given array 
void display_arr(int a[], int arr_size){
    for (int i = 0; i < arr_size; i++){
        printf("%i | ", a[i]);
    }
    printf("\n");
}

// Reverse the given array in place
void reverse_arr(int a[], int arr_size){
    for (int start = 0; start < arr_size / 2; start++){
        int temp = a[start];
        a[start] = a[arr_size - 1 - start];
        a[arr_size - 1 - start] = temp;
     }
}

// Read the number of rows in the matrix (1 <= rows <= MAX_ROWS)
int read_num_rows(){
    int num_rows;
    do{
        printf("Enter number of rows in the matrix (1 <= rows <= %d): ", MAX_ROWS);
        scanf("%d", &num_rows); 
    } while (num_rows < 1 || num_rows > MAX_ROWS);
    return num_rows;
}

// Read the number of columns in the matrix (1 <= columns <= MAX_COLS)
int read_num_columns(){
    int num_columns;
    do{
        printf("Enter number of columns in the matrix (1 <= columns <= %d): ", MAX_COLS);
        scanf("%d", &num_columns);
    } while (num_columns < 1 || num_columns > MAX_COLS);
    return num_columns;
}

// Fill the given matrix
void fill_matrix(int a[][MAX_COLS], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Enter item[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Display the given matrix
void display_matrix(int a[][MAX_COLS], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Displays for any pair of two consecutive rows (odd and even rows),  
// 1. the sum of the elements of the odd row divided by 
// 2. the value of the smallest element of the even row 
void process_pair_rows(int m[][MAX_COLS], int rows, int cols){
    for (int i = 1; i < rows; i += 2){
        
        int sum = 0;
        for (int j = 0; j < cols; j++){
            sum += m[i][j];
        }

        int min = m[i - 1][0];
        for (int j = 1; j < cols; j++){
            if (m[i - 1][j] < min){ 
                min = m[i - 1][j];
            }
        }

        if (min != 0){
            printf("Rows: %d, %d -> Result (sum of row %d/ min of %d) = %f\n", i - 1, i, i, i - 1, (float)sum / min);
        }
        else {
            printf("Rows: %d, %d -> Result (sum of row %d/ min of %d) | (min of %d == 0): Division by Zero Error\n", i - 1, i, i, i - 1, i -1);
        }
        
    }
    
}

int main(){
    // Problem 1
    int arr[ARR_CAPACITY];
    
    int arr_size = read_arr_size();  
    read_arr(arr, arr_size);
    display_arr(arr, arr_size);

    reverse_arr(arr, arr_size);
    display_arr(arr, arr_size);

    // Problem 2

    int m[MAX_ROWS][MAX_COLS];

    int rows = read_num_rows();
    int cols = read_num_columns();

    fill_matrix(m, rows, cols);
    display_matrix(m, rows, cols);
    process_pair_rows(m, rows, cols);

    // Problem 3
    // To be done by students
}