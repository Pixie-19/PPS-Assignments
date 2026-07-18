// Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2

#include <stdio.h>

// 1. Define the structure blueprint
struct Student {
    int roll_no;
    char name[50];
    int age;
};

int main() {
    // Declare an array of structures to hold exactly 5 students
    struct Student students[5]; 

    printf("--- Enter Details for 5 Students ---\n");

    // 2. Loop to input details for all 5 students
    for (int i = 0; i < 5; i++) {
        // Automatically assign roll number starting from 1
        students[i].roll_no = i + 1; 
        
        printf("\nStudent %d (Roll No: %d):\n", i + 1, students[i].roll_no);
        
        printf("Enter Name: ");
        // " %[^\n]" allows reading names with spaces safely
        scanf(" %[^\n]", students[i].name); 

        printf("Enter Age: ");
        scanf("%d", &students[i].age);
    }

    // 3. Print the details of the student with Roll No. 2
    // Since roll numbers start at 1, Roll No. 2 lives at array index 1 (i = 1)
    printf("\n====================================\n");
    printf("  DETAILS OF STUDENT WITH ROLL NO. 2\n");
    printf("====================================\n");
    printf("Roll Number : %d\n", students[1].roll_no);
    printf("Name        : %s\n", students[1].name);
    printf("Age         : %d\n", students[1].age);

    return 0;
}

