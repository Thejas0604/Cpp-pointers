#include <stdio.h>
#include <stdlib.h>

int main(){
    //int *p ;

     void* q = malloc(sizeof(int));
     int* p = (int*)q;
     printf("%d\n",p);
    *p = 10;
     printf("%d\n",*p);
     free(p);
     p = (int*)malloc(1);
     printf("%d\n",p);
     *p = 1000000000;  //This can result in undefined behavior, since the program is writing to memory beyond the allocated block, which can overwrite other important data in memory or cause a segmentation fault.
     printf("%d\n",*p);
     return 0;
    
}