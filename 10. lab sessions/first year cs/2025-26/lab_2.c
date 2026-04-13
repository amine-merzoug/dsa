/*
    Sort the elements of an array arr_1 of n non-zero integers in descending order
    into a new array arr_2 of the same dimension n such that  1 <= N <= ARR_CAPACITY.
    First Name: ...
    Last Name: ...
    1st Year LMD - 2025-26 - Mar 10, 2026
*/

#include <stdio.h>

#define ARR_CAPACITY 20

// 1. Read and check the array size: 1 <= arr_size <= ARR_CAPACITY
int read_arr_size(){
    int arr_size;

    do {
        printf("Enter array size (1 <= arr_size <= %d): ", ARR_CAPACITY);
        scanf("%d", &arr_size);
    } while (arr_size < 1 || arr_size > ARR_CAPACITY);
    
    return arr_size;
}

// 2. Read the strictly positive elements in given array
// Here, we suppose that the entered element are strictly positive
void input_arr(int arr[], int arr_size){
    printf("\n");
    for (int i = 0; i < arr_size; i++){
        printf("Enter item #%d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// 3. Display the elements of the given array
void display_arr(int a[], int arr_size){
    printf("\nYour array: ");
    for (int i = 0; i < arr_size; i++){
        printf("%i | ", a[i]);
    }
    printf("\n");
}

// In the next lab, we will write the following:
// 4. Find the maximum of TAB1
// 5. Place this maximum in TAB2
// 6. Replace the maximum by -1 in TAB1
// 7. Repeat the 3 steps until table TAB1 is entirely composed of -1.
// 8. Display the table TAB2

int main(){
    int arr[ARR_CAPACITY];
    int arr_size = read_arr_size();

    input_arr(arr, arr_size);
    display_arr(arr, arr_size);
}