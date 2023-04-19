#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the array: "); 
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int)); 
    for(int i = 0;i<n;i++){
        A[i] = i+1;
    }
    int *B = (int*)realloc(A,2*n*sizeof(int)); //will do the copying if extending is impossible // normally we use the previous pointer like int*A = blah blah likewise
    //if the first parameter is set to NUll like below
    //int *B = (int*)realloc(NULL,2*n*sizeof(int)); is equivalant to malloc
    //int *B = (int*)realloc(A,0); = is equivalant to free
    printf("Prev block address = %d, New block address = %d\n",A,B);
    for(int i = 0;i<2*n;i++){
        printf("%d ",B[i]);
    }
    return 0;
}