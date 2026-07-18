// Write a program to store and print the roll no., name, age and marks of a student using structures.

#include <stdio.h>

// 1. Define the structure blueprint
struct Student {
    int roll_no;
    char name[50];
    int age;
    float marks;
};

int main() {
    // 2. Create a structure variable named 's'
    struct Student s;

    printf("--- Enter Student Details ---\n");

    // 3. Get input from the user using the dot (.) operator
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Name: ");
    // The space before %[^\n] tells C to clear any leftover Enter key hits
    scanf(" %[^\n]", s.name); 

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // 4. Print the stored details back out
    printf("\n--- Displaying Student Information ---\n");
    printf("Roll Number : %d\n", s.roll_no);
    printf("Name        : %s\n", s.name);
    printf("Age         : %d\n", s.age);
    printf("Marks       : %.2f\n", s.marks); // %.2f prints marks to 2 decimal places

    return 0;
}