#include <stdio.h>

int main(){
    int l , b;
    printf("Enter the length : ");
    scanf("%d", &l);
    printf("Enter the breadth : ");
    scanf("%d", &b);
    int area = l*b;
    int perimeter = 2*(l+b);
    if(area > perimeter){
        printf("area is greater than perimeter");
    }else if(area == perimeter){
        printf("area is equal than perimeter");
    }else{
        printf("area is less than perimeter");
    }
    return 0;
}