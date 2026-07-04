/* .Write a C program to check whether a number is Strong number or not.*/
#include <stdio.h>

int factorial(int r) {
    int fact = 1;
    
    while (r > 1) {
        fact = fact * r;
        r--; 
    }
    return fact;
}

int check(int n) {
    int temp, rem, result = 0;
    temp = n;
    while (temp != 0) {
        rem = temp % 10;                
        result = result + factorial(rem); 
        temp = temp / 10;               
    }
    if (result == n) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main() {
    int n = 145; 

    printf("Testing number: %d\n", n);
    if (check(n)) {
        printf("Yes it is a strong number\n");
    } 
    else {
        printf("No it is not a strong number\n");
    }
    return 0; 
}