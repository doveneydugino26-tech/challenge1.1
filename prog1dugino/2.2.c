#include <stdio.h>

int main() {

    int ctr;
   int row=0;
    
    while(row<3){
        ctr=1;
        while(ctr<=8){
            printf("*");
        ctr++;
    }
    printf("\n");
    row++;
}
    return 0;
}