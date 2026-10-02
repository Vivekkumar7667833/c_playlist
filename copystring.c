#include <stdio.h>
#include <string.h>
int main(){
    char s1[] = "physics wallah";
    // char* s2 = s1;   // s2 is shallow copy.
    // s1[0] = 'm';
    // printf("%s",s2);
    // deep copy ->
    char s2[] = "physics wallah";
    s2[0] = 'm';
    printf("%p\n",&s2);
    printf("%p",&s1);
    return 0;
}