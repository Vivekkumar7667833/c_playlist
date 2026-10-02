#include <stdio.h>

int main(){
    int n ,m;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    printf("Enter the no of coloumn : ");
    scanf("%d",&m);
    int A[n][m], B[n][m], sum[n][m];
    printf("\n Enter elements of matrix A : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n Enter element of matrix B : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m;  j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n Resultant Matrix (A+B) : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}