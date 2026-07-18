// Write a program to store and print the roll no., name, age, address and marks of 15 students using structures.

#include <stdio.h>

#define TOTAL_STUDENTS 15

// 1. Define the structure blueprint
struct Student {
    int roll_no;
    char name[50];
    int age;
    char address[100];
    float marks;
};

int main() {
    // Declare an array of structures for 15 students
    struct Student students[TOTAL_STUDENTS];

    // 2. Data Input Loop
    printf("--- Enter Details for %d Students ---\n", TOTAL_STUDENTS);
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        // Automatically assign roll number starting from 1
        students[i].roll_no = i + 1;

        printf("\nStudent %d (Roll No: %d):\n", i + 1, students[i].roll_no);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); // " %[^\n]" reads strings with spaces safely

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter Address: ");
        scanf(" %[^\n]", students[i].address);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // 3. Data Output Display
    printf("\n========================================================================\n");
    printf("%-5s | %-20s | %-4s | %-25s | %-5s\n", "Roll", "Name", "Age", "Address", "Marks");
    printf("========================================================================\n");

    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        // %-20s pads the text to format it cleanly into a readable table row
        printf("%-5d | %-20s | %-4d | %-25s | %-5.2f\n", 
               students[i].roll_no, 
               students[i].name, 
               students[i].age, 
               students[i].address, 
               students[i].marks);
    }
    printf("========================================================================\n");

    return 0;
}