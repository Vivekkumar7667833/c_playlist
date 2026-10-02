#include <stdio.h>
// WAP to print
//    1
//   121
//  12321
// 1234321 
int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    for(int i = 1; i<= n; i++){
        int a = i-1;
        for(int nsp = 1; nsp <= n-i;nsp++){//spaces ke liye loop
            printf(" ");
        }
        for(int j = 1; j <= i; j++){// num traingle
            printf("%d",j);
        }
        for(int k = 1; k<= i-1; k++){//extra cheez ke liye 
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}