/*
C/C++ Classic Problems
Hanoi Tower in recursion call
Basic Concepts:

Giving three pillars named A, B,and C.
There will be 3 to 64 disk in pillar A
And the disks have different sizes, arranged form small to big.
Now, you have to move all the disks form A to C, B is for assistant.
The Rule is you can move only one disk at a time, and bigger disk cannot place upon a smaller one.
*/
#include<stdio.h>
#include<stdlib.h>

int hanoi_tower(int, char, char, char, long long int*);
int main()
{
    int disks = 0;
    long long int time = 0; //time is for counting movements. It needs to be passed by reference, or it won't accumulate.
    printf("please enter disk(s) numbers:\n");
    scanf("%d",&disks);

    if(disks >= 1)
    {
        hanoi_tower(disks, 'A', 'B', 'C', &time);
    }
    else
    {
        printf("Please enter a valid number!!\n");
    }
    printf("Total used movements: %d\n",time);

    return 0;
}

int hanoi_tower(int d, char A, char B, char C, long long int *t)
//five arguments, first is disk quantities, second to fourth is pillar identity,
//and the last is for movements count.
{
    if(d == 1)
    {
        printf("move disk form %c to %c\n",A,C);
        *t += 1;
    }
    else
    {
        hanoi_tower(d-1, A, C, B, t);
        hanoi_tower(1, A, B, C, t);
        hanoi_tower(d-1, B, A, C, t);
    }
}
