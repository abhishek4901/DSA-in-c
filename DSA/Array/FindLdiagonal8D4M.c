#include<stdio.h>

int main() {
    int i, j, n,p, m, count=0;

    // Input the number of rows and columns
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
            if(i==j && mat[i][j]==0){
                
                count++;
            } 
    }}
    if(n==count){
        printf("The matrix  left diagonal element is zero\n"); }
    else{
        printf("The matrix  left diagonal  element is not zero\n"); 
    }}
    else{
        printf("The matrix must have number of row equal to number of column\n"); 
    }
    return 0;
}