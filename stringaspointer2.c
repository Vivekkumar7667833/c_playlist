#include <stdio.h>
#include <string.h>
// in normal initialisation , only change indivisual but not word.
// but in pointer you can add word but not change indivisual entity.
int main(){
    char str[] = "physics wallah";
    // ptr = "college wallah";
    // printf("%s",ptr);
    char* p = str;
    *p = 'c';
    printf("%s",str);
    return 0;
}