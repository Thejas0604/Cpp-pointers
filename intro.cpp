#include <iostream>

using namespace std;

int main(){
    int a = 10 ;
    int *p ;
    p = &a; // &a = address of a 

    cout<<*p<<endl;

    *p = 12; // dereferencing ( value in the memory location which is pointed by the pointer is set to 12  )

      
    cout<<*p<<endl;

    int b = 50;

    *p = b ; //this does not change the address in the pointer

    cout<<*p;

     p = &b; // this will

     cout<<*p;

    return 0;
}