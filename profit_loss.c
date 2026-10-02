#include <stdio.h>

int main (){
    int sp,cp;
    printf("Enter the cp : ");
    scanf("%d",&cp);
    printf("Enter the sp : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    else{
        printf("No profit , No loss");
    }
    return 0;
}