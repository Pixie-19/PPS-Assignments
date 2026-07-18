// Define a union with the following three members: roll no, name and total marks of student. 
// Write a c program to read and display the details of a student.

#include <stdio.h>

// 1. Define the union blueprint
union StudentData {
    int roll_no;
    char name[50];      // This is the largest member (50 bytes), 
    float total_marks;  // so the entire union will be exactly 50 bytes in memory.
};

int main() {
    // Create a union variable
    union StudentData student;

    printf("--- Working with Student Union Data ---\n\n");

    // 2. Read and immediately display Roll Number
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);
    // Inside memory, those 50 bytes now hold an integer.
    printf(">> Stored Roll Number: %d\n\n", student.roll_no);

    // 3. Read and immediately display Name 
    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);
    // CRITICAL: Writing to 'name' just wiped out the Roll Number!
    printf(">> Stored Name: %s\n\n", student.name);

    // 4. Read and immediately display Total Marks
    printf("Enter Total Marks: ");
    scanf("%f", &student.total_marks);
    // CRITICAL: Writing to 'total_marks' just wiped out the Name!
    printf(">> Stored Total Marks: %.2f\n\n", student.total_marks);

    // 5. Proof of the shared memory space:
    // Let's see what happens if we try to read the Name again now...
    printf("--- The Union Shared Memory Demonstration ---\n");
    printf("Trying to print Name now: %s (Corrupted/Garbage data!)\n", student.name);

    return 0;
}