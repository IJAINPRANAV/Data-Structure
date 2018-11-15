#include "stdio.h"

void push(int arr[], int i, int n)
{
  int f,r;
  if(f==r==-1){
    f=r=0;
  }
  if(r>n-1){
    printf("overflow\n");
  }
  else{
    r=r+1;
    arr[r]=i;
  }
  for(int i=f;i<r;i++){
    printf("%d\n", arr[i]);
  }
}

void pop(int arr[], int n)
{
  if(f==r==0){
    printf("underflow\n");
  }
  else{
    f=f+1;
  }
  for(int i=f;i<r;i++){
    printf("%d\n", arr[i]);
  }
}

int main()
{
  int arr[10];
  int n,i,j;
  printf("Enter size of queue - \n");
  scanf("%d\n", &n);
  printf("Press 1 if you want to insert an element in queue and 2 to delete\n");
  scanf("%d\n", &i);
  if(i==1){
  printf("Enter the element you want to enter in queue \n");
  scanf("%d\n", &j);
  push(arr, j,n);
}
else{
printf("First Deletion - \n");
pop(arr, n);
  return 0;
}
