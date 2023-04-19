#include <stdio.h>
#include <stdlib.h>

//same program implemented in c++.

int main(){
    int a = 5; //goes into stack
    int *p; //goes into the stack too (pointer variable and its value is stored in stack)

    p = new int;
    *p = 10;
    printf("%d\n",p);
    delete p;
    p = new int[20];
    for(int i = 0;i<20;i++){
        p[i] = i;
    }
    printf("%d",p);
    delete p;
}