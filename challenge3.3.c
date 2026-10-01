#include <stdio.h>
int main() {
    //declaring the variable name and data type//
    int row, space, ctr;
    //assigning the value of row so that the computer can answer the condition//
    row = 1;
    while (row <= 3) {
        //assigning the value of ctr after the loop so that the loop must go on.//
        
        ctr = 1;
        space = 3 - row;
        //every loop will proceed to the next block of code if its condition became false//
        while(space > 0){
            printf(" ");
            space--; //this will decrease the velue of space by one to creat a sliding sides of the astirisks//
        }
        while(ctr <= 2 * row - 1){
            printf("*");
            ctr++;
        }
        printf("\n");
        row++;
    } //this part was just the opposite of the upper part of the diamond//
    row = 2;//this will be the starting point of the new loop for the lower triangle//
    while(row > 0){
        ctr = 1;
        space = 3 - row;
        while(space > 0){
            printf(" ");
            space--;//space must alays decrease for the loop to end//
        }
        while(ctr <= 2 * row - 1){
            printf("*");
            ctr++;//remember the counter will always increase because its starting value is 1//
        }
        printf("\n");
        row--;
    }
    return 0;
}
