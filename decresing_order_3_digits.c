#include <stdio.h>
//arrange into decresing order
int main (){
    int n1 , n2, n3;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    printf("Enter 3rd number: ");
    scanf("%d",&n3);
    if(n1>n2&&n1>n3){
        if(n2>n3){
        printf("%d,%d,%d ",n1,n2,n3);
        }
        else{
            printf("%d,%d,%d",n1,n3,n2);
        }
    }
    else if(n2>n1&&n2>n3){
        if(n1>n3){
        printf("%d,%d,%d",n2,n1,n3);
        }
        else{
            printf("%d,%d,%d",n2,n3,n1);
        }
    }
    else{
        if(n1>n2){
        printf("%d,%d,%d",n3,n1,n2);
    }
    else{
        printf("%d,%d,%d",n3,n2,n1);
    }
    }
    return 0;
}