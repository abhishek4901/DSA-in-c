#include<stdio.h>
int main (){
    int mat[4][4]={{320,400,600,123},{700,328,780,380},{527,520,645,389},{100,110 ,120,240}};
    int i=0,j=0 ,Qsum=0,Bsum=0,sum=0; // variable to store sum of each row
    for(i=0;i<4;i++){
        Qsum=0; // reset Qsum for each row
        Bsum=0; // reset Bsum for each row
        for(j=0;j<4;j++){
            Qsum+=mat[i][j]; // calculate sum of each row
            Bsum+=mat[j][i]; // calculate sum of each row
            sum+=mat[i][j]; // calculate sum of each row

        
            }
        printf("Sum of row %d : %d\n",i,Qsum); // print sum of each row
        printf("Sum of column %d : %d\n",i,Bsum); // print sum of each column
        }
    printf("Sum of all elements in the matrix : %d\n",sum); // print sum of all elements in the matrix
    return 0;
}


