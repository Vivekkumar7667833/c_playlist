#include <stdio.h>
// WAP to print
// 1
// A B  
// 1 2 3  
// A B C D
// 1 2 3 4 5 
int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int a = 1;
        if(i%2==0){
            for(int j = 1; j <= i; j++){
            int d = a + 64; // d = 65
            char ch = (char)d; // ch = (char)65 -> ch = 'A'
            printf("%c ",ch);
            a++;
            }
        }
        else{
            for(int j = 1; j<= i;j++){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}