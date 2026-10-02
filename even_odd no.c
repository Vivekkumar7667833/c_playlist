#include <stdio.h>

int main() {
    int n ;
    printf("Enter the no : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("your enter no %d is even no",n);
    }
    else{
        printf("your enter no %d is odd no",n);
    }
    return 0;
}