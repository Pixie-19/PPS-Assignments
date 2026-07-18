/*Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using
a structure named Marks having elements roll no., name, chem_marks, maths_marks and
phy_marks and then display the percentage of each student */

#include <stdio.h>

// 1. Define the structure blueprint exactly as requested
struct Marks {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() {
    // Array of structures to store 5 students
    struct Marks students[5]; 
    float total_marks, percentage;

    printf("--- Enter Academic Details for 5 Students ---\n");

    // 2. Loop to input details for all 5 students
    for (int i = 0; i < 5; i++) {
        // Automatically assign roll numbers starting from 1
        students[i].roll_no = i + 1;

        printf("\nStudent %d (Roll No: %d):\n", i + 1, students[i].roll_no);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chem_marks);

        printf("Enter Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].maths_marks);

        printf("Enter Physics Marks (out of 100): ");
        scanf("%f", &students[i].phy_marks);
    }

    // 3. Display the Report Card Grid with Percentages
    printf("\n=========================================================\n");
    printf("                     STUDENT REPORT CARD                 \n");
    printf("=========================================================\n");
    printf("%-5s | %-20s | %-5s | %-5s | %-5s | %-10s\n", 
           "Roll", "Name", "Chem", "Math", "Phy", "Percentage");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        // Sum up the marks for the 3 subjects
        total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        
        // Calculate percentage: (Obtained Marks / Total Marks) * 100
        percentage = (total_marks / 300.0) * 100.0;

        // Print formatted table row
        printf("%-5d | %-20s | %-5.1f | %-5.1f | %-5.1f | %-10.2f%%\n",
               students[i].roll_no,
               students[i].name,
               students[i].chem_marks,
               students[i].maths_marks,
               students[i].phy_marks,
               percentage);
    }
    printf("=========================================================\n");

    return 0;
}