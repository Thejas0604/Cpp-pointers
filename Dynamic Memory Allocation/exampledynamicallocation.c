#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the array: "); 
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int)); //dynamically allocated array 
    // int A[n] ; (this will give us a compilation error since array size cannot be a variable. We need to know the array size during runtime.)
    for(int i = 0;i<n;i++){
        A[i] = i;
    }
    for(int i = 0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}

//malloc - Does not initialize the bytes with any values. Garbage values will be added.
//calloc - Initializes all bytes with the value zero(0).
//realloc - use to change the size of the memory block. ලොකු නන් ෆුල් අලුත් එකක් හදාගන්නවා කලින් values ටික දාගෙන. තියෙන block eka extend කරන්න පුලුවන් නන් අවුලක් නෑ හැබැයි.