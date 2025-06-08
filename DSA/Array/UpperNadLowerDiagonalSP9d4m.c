#include<stdio.h>

int main() {
    int i, j, n,temp, m, Udcount=0,Ldcount=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);
    if(n==m){
    int mat[50][50];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n ;i++){
        for(j=0;j<m;j++){
            if(i>j && mat[i][j]!=0){
                Ldcount++;
        }
        else
           if (i<j && mat[i][j]!=0){
                Udcount++;
            }
        }
    }

   if(Ldcount==0){
        printf("Matrix is Upper Diagonal sparse matrix\n");
    } else { 
        printf("Matrix is not Upper Diagonal sparse matrix \n"); }
  if(Udcount==0){
        printf("Matrix is Lower Diagonal sparse matrix\n");
    } else { 
        printf("Matrix is not Lower Diagonal sparse matrix \n");
    }
    }
    else{
        printf("Matrix is not square");
    }
    return 0;
}
