#include <stdio.h>
// WAP to print
// A B C D
// A B C D 
// A B C D 
// A B C D 
int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= n; j++){
            int d = a + 64; // d = 65
            char ch = (char)d; // ch = (char)65 -> ch = 'A'
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}