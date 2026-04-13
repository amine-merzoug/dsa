#include <stdio.h> // library for scanf() and printf() functions

// You can run this code using https://pythontutor.com

// prints "Hello" to the screen
void print_hello(){
    printf("Hello!\n");
}

// adds two integers and returns the result
int sum(int a, int b){
    return a + b;
}

// finds and returns the max of two integers 
int max(int x, int y){
    if (x > y){ 
        return x; 
    } else { 
        return y; 
    }
}

int main(){
    print_hello();
    int a = 5, b = 6;
    printf("a = %d, b = %d \n", a, b);
    printf("%d + %d = %d\n", a, b, sum(a, b));
    printf("Max of %d and %d is %d\n", a, b, max(a, b));
}