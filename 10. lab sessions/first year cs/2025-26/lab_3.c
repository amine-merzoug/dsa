    /*
    Sort the elements of an array arr_1 of n non-zero integers in descending order
    into a new array arr_2 of the same dimension n such that  1 <= N <= ARR_CAPACITY.
    First Name: ...
    Last Name: ...
    1st Year LMD - 2025-26 - Mar ??, 2026
    */

#include <stdio.h>

// #include <limits.h>
// printf("Max int + 1 = %d ", INT_MAX+ 1);
// printf("Min int = %d ", INT_MIN);

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
    for (int i = 0; i < arr_size; i++){
        printf("%i | ", a[i]);
    }
    printf("\n");
}

// 4. Find the maximum in the given array
// Returns the max value
int find_max(int arr[], int arr_size){
    int max = arr[0];
    for (int i = 1; i < arr_size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

// 4. Find the maximum in the given array
// Returns the max position/index
int find_max_index(int arr[], int arr_size){
    int max = arr[0];
    int max_index = 0; 
    for (int i = 1; i < arr_size; i++){
        if (arr[i] > max){
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

// Followed procedure:
// a. Find the maximum in the given arr_1
// b. Place this maximum in arr_2
// c. Replace the maximum by -1 in arr_1
// Repeat the 3 steps (a, b, and c) until arr_1 is entirely processed. 
void sort_arr(int arr_1[], int arr_2[], int arr_size){
    // Note that "count" variable can be replaced by i
    int count = 0;
    for (int i = 0; i < arr_size; i++){     
        // Step 1: Find max in arr_1
        int max_index = find_max_index(arr_1, arr_size);

        // Step 2: Place this max in arr_2
        arr_2[count] = arr_1[max_index];
        count++;

        // Step 3: Replace max in arr_1 by -1 
        arr_1[max_index] = -1;
    }
}

int main(){
    int arr_1[ARR_CAPACITY];

    int arr_size = read_arr_size();  
    input_arr(arr_1, arr_size); 
    printf("Arr 1: ");
    display_arr(arr_1, arr_size);

    //printf("Max_index = %d\n", find_max_index(arr, arr_size));

    int arr_2[ARR_CAPACITY];
    sort_arr(arr_1, arr_2, arr_size);
    printf("Arr 1: ");
    display_arr(arr_1, arr_size);
    printf("Arr 2: ");
    display_arr(arr_2, arr_size);
}