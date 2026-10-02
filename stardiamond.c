#include <stdio.h>
// WAP to print
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    * 
int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    for(int i  = 1; i <= n; i++){
        printf("*");
    }
    return 0;
}