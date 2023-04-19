#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5; //goes into stack
    int *p; //goes into the stack too (pointer variable and its value is stored in stack)

    p = (int*)malloc(sizeof(int)); //now p is pointing into a memory location in heap.
    *p = 10;
    printf("%d\n",p);
    free(p);
    p = (int*)malloc(20*sizeof(int)); //a bulk of 20 integers.can be used to store an array
    for(int i = 0;i<20;i++){
        p[i] = i;
    }
    printf("%d\n",p);
    free(p);
    return 0;
}