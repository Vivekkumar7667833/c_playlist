#include <stdio.h>
// WAP to print star in plus sign
//   *
//   *
// *****
//   *
//   *
int main(){
    int n ;
    printf("Enter the odd no of rows : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int a = n/2 + 1;
            if(j == a || i ==  a) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}