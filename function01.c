#include <stdio.h>
void greet(){
    printf("good morning\n");
    printf("how are you?\n");
    printf("nice to meet you\n");
    return ;
}
int main(){
    for(int i = 1; i <= 5;i++){
        greet();
    }
    return 0;
}