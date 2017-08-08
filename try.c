#include<stdio.h>
#include<stdlib.h>
void printRepeating(int arr[], int size)
{
  int i, j;
  printf(" Repeating elements are ");
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
}     
 
int main()
{
  int arr[] = {1, 2, 3, 3, 4, 3, 5};
  int arr_size = sizeof(arr)/sizeof(arr[0]); //returns 4*7=28bytes and arr[0]=4 bytes 
  int a=sizeof(arr);
  int b=sizeof(arr[0]);
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",arr_size );
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}