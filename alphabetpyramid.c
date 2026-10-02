#include <stdio.h>
// WAP to print a alphabet pyramidal.
//    a
//   abc
//  abcde
// abcdefg
int main(){
    int n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        int a = 65;
        for(int k = 1 ; k <= n - i; k++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            char ch = (char)a;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}