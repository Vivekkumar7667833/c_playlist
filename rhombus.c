#include <stdio.h>
// WAP to print a rhombus.
//    ****
//   ****
//  ****
// ****
int main(){
    int n ;
    printf("Enter the no of rows : ");
    scanf("%d",&n); 
    for(int i = 1; i <= n; i++) {    // for space we have to create a new loop. 
        for(int j = 1; j <= n - i  ; j++){
            printf(" ");           
        }
        for(int k = 1; k <= n; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }