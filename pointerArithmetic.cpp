#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    printf("%d\n",p);
    printf("%d\n",*p);
    cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl;
    printf("%d\n",p+1); //points to next integer 
    printf("%d\n",*(p+1)); //???

    return 0;
}