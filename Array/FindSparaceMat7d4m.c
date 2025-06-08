#include<stdio.h>
#define M 50
#define N 50

int main() {
    int i, j, n,p, m, count=0;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);

    // Declare the matrix with fixed maximum size
    int mat[50][50];

    // Input the elements of the matrix
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
            if(mat[i][j]==0){
                
                count++;
            }}
        }
            p=(count*100)/(n*m); 
            printf("The percentage of ZERO numbers is: %d%%\n", p); 
        if(p>66){
            printf("This is sparse matrix \n"); }
        else{
            printf("This is not sparse matrix \n"); }
    return 0;
}