#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of column : ");
    scanf("%d",&m);
    // *****************......upto n no of stars
    for(int i = 1 ; i <= n ; i++){// outer loop -> no of lines
        for( int i = 1 ; i <= m ; i++){// innner loop -> no of stars in each line
            printf("*");
        }
        printf("\n");   // har line ke baad ek enter marne ke liye hai 
    }
    return 0;
}