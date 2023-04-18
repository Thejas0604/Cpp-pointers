#include <iostream>

using namespace std;
int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of an integer: %d\n",sizeof(int));
    printf("Addres: %d, value: %d\n",p,*p);
    printf("Addres: %d, value: %d\n",p+1,*(p+1)); //dereferrencing will give some garbage shit.
    char *p0;  //void *p0; // p0 = p;
    p0 = (char*)p; //type casting //to avoide type casting we can use void pointer. (generic pointer)(we don not need expilicit type casting here).
    //but cannot deferrence that. bcz කියක් කරන්න ඕනද කියලා දන්නෙ නෑනෙ(doesnt know the number of bytes required to derefference) only the address can be printed.
    //arithmetic cannot be done also. Increment කරන්න ඕන size එක දන්නෙ නැති නිසා.
    printf("Size of an char: %d\n",sizeof(char));
    printf("Addres: %d, value: %d\n",p0,*p0);
    printf("Addres: %d, value: %d\n",p0+1,*(p0+1));
    //1025 = 00000000 00000000 00000100 00000001
    //This type casting allows only to check char. Then it will check only 1st byte. Its equal to 1. 

    return 0;
}