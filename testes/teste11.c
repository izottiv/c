#include <stdio.h>
int main()
{ int arr[] = {101, 102, 103, 104, 105};
 int *ptr = arr;
 printf("arr[0]: %d\n", arr[0]);
 printf("*ptr: %d\n", *ptr);
 printf("ptr[0], ptr[1]: %d, %d\n", ptr[0], ptr[1]);
 printf("Endereco arr: %p Endereco ptr: %p\n", arr, ptr);
   
    return 0;
}
