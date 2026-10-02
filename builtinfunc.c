#include <stdio.h>
#include <string.h>
// int main(){
//     char* str = "vivek";
//     int x = strlen(str);
//     printf("%d",x);
//     return 0;
// }
int main(){
    char s1[13] = "Vivek Rajput";
    char s2[13];
    strcpy(s2,s1);
    s2[0] = 'M';
    printf("%s",s2);
    return 0;
}