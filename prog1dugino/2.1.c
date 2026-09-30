#include <stdio.h>

int main() {

    int ctr;
   int row=0;
    
    while(row<4){
        ctr=1;
        while(ctr<=4){
            printf("*");
        ctr++;
    }
    printf("\n");
    row++;
}
    return 0;
}