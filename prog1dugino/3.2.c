#include <stdio.h>

int main() {

    int ctr;
   int row=0;
    
    while(row<5){
        ctr=4;
        while(ctr>=row){
            printf("*");
        ctr--;
    }
    printf("\n");
    row++;
}
    return 0;
}