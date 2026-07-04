/* A student’s grade is calculated in a subject according to the following rules:
Number Obtained Grade
>=90 and <=100 O
>=80 and <90 E
>=70 and <80 A
>=60 and <70 B
>=50 and <60 C
>=40 and <50 D
<40 and >=0 F(FAILED)
Others No. INVALID
Write a C Program which accept a student’s marks as an input and then determine the grade of the
students in that subject. Do this program using ‘if-else-if’ statement and ‘switch-case’ statement.*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("No. INVALID\n");
    } else {
        switch (marks / 10) {
            case 10: // For exactly 100
            case 9:  // For 90 to 99
                printf("Grade: O\n");
                break;
                
            case 8:  // For 80 to 89
                printf("Grade: E\n");
                break;
                
            case 7:  // For 70 to 79
                printf("Grade: A\n");
                break;
                
            case 6:  // For 60 to 69
                printf("Grade: B\n");
                break;
                
            case 5:  // For 50 to 59
                printf("Grade: C\n");
                break;
                
            case 4:  // For 40 to 49
                printf("Grade: D\n");
                break;
                
            default: // For 0 to 39
                printf("Grade: F\n");
                break;
        }
    }
    return 0;
}