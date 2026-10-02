#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    // gets(str); 
    printf("Your input is : %s",str);
    //puts(str);
    return 0;
 }