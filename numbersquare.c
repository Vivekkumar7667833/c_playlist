#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    printf("Enter the no. of column : ");
    scanf("%d",&m);
    for(int i = 1; i <= n ; i++){ // no of lines / rows -> i
        for(int j = 1; j <= m ; j++){// no of coloumns -> j
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}