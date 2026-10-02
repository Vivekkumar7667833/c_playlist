#include <stdio.h>

int main (){
    int n;
    printf("Enter the no :  ");
    scanf("%d",&n);
    if(n<0){//if n is negative 
        n = n*(-1);
    }
    printf("the absoulte value is : %d",n);
    return 0;
}