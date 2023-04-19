#include <iostream>
using namespace std;

int main(){
    int x = 5; // data type - int
    int*p ; //also takes 4 bytes // data type - pointer to int (int*)
    p  = &x ; 
    int **q ; //pointer to pointer //data type - int pointer to int pointer (int**)
    q = &p; //Now this stores address of p 
    //pointer to pointer to pointer is possible also.
    int*** r;
    r = &q; 
    printf("%d\n",*p); //output = 5
    printf("%d\n",&x); //output = memory location of x(value of p)
    printf("%d\n",*q); //output = value of p
    printf("%d\n",*(*q)); // Since *q = p, *(*q) will give the output as 5. This will dereffrence 2 times. { **q = *(*q) }
    printf("%d\n",*(*r)); //this will print the value of p(&x)
    printf("%d\n",*(*(*r))); //output = 5 
    ***r = *p + 4;
    printf("%d\n",x);
    return 0;
}