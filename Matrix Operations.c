/* matrix_ops_modular.c */ 
#include <stdio.h> 
 
void read_mat(int r,int c,int a[r][c]){ 
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]); 
} 
void print_mat(int r,int c,int a[r][c]){ 
    for(int i=0;i<r;i++){ 
        for(int j=0;j<c;j++) printf("%d ", a[i][j]); 
        printf("\n"); 
    } 
} 
 
int main(){ 
    int r,c; 
    if(scanf("%d %d",&r,&c)!=2) return 0; 
    static int A[20][20], B[20][20]; 
    read_mat(r,c,A); 
    read_mat(r,c,B); 
    printf(\"A + B:\\n\"); 
    for(int i=0;i<r;i++){ 
        for(int j=0;j<c;j++) printf(\"%d \", A[i][j] + B[i][j]); 
        printf(\"\\n\"); 
    } 
    printf(\"A - B:\\n\"); 
    for(int i=0;i<r;i++){ 
        for(int j=0;j<c;j++) printf(\"%d \", A[i][j] - B[i][j]); 
        printf(\"\\n\"); 
    } 
    printf(\"Transpose of A:\\n\"); 
    for(int i=0;i<c;i++){ 
        for(int j=0;j<r;j++) printf(\"%d \", A[j][i]); 
        printf(\"\\n\"); 
    } 
    return 0; 
} 
