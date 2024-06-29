#include <stdio.h>
int main()
{
    // int a = 23 ;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);
    // return 0;
    int arr[]= {1,2,3,4,5,6};
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The address at first position of the array is %d\n",arr);
    printf("The address at first position of the array is %d\n",&arr[0]);
    printf("The address at third position of the array is %d\n",&arr[2]);
    printf("The address at third position of the array is %d\n",arr + 2);
    
}
