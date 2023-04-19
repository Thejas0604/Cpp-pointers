#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the array: "); 
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int)); 
    for(int i = 0;i<n;i++){
        A[i] = i;
    }
    free(A);
    A = NULL; //to avoid misbehaving
    for(int i = 0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}