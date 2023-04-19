#include <iostream>

void incerement(int* a){ //int a - this a is an another a. Only the value of the input parameter is copied into this. //int* a - now this takes a pointer to int as the parameter
    *a = (*a) + 1;
    printf("Address of variable a in increment = %d\n",a);
}


int main(){
    int a; //local variable
    a = 10;
    incerement(&a);
    printf("a = %d\n",a);
    printf("Address of variable a in main = %d\n",&a);
    return 0;
}

