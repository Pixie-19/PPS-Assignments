// C program to solve the Tower of Hanoi problem using recursion
#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\nThe sequence of moves involved in the Tower of Hanoi:\n");
    // A = Source Rod, C = Destination Rod, B = Auxiliary (Helper) Rod
    towerOfHanoi(n, 'A', 'C', 'B'); 

    return 0;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base Case: Only 1 disk to move
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }

    // Step 1: Move top n-1 disks from Source to Auxiliary rod using Destination rod
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Step 2: Move the remaining largest disk from Source to Destination rod
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    // Step 3: Move the n-1 disks from Auxiliary to Destination rod using Source rod
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}