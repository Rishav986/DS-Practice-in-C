#include <stdio.h>
#define MAX 5
void insert (int*, int pos, int num);
void del(int*, int pos);
void reverse(int*);
void display(int*);
void search(int*, int num);

int main() {
  int arr[5];
  insert(arr,1,11);
  insert(arr,2,12);
  insert(arr,3,13);
  insert(arr,4,14);
  insert(arr,5,15);

  printf("Elements of Array: \n");
  display(arr);

  del(arr,5);
  display(arr);
 
  insert(arr,5,20);
  display(arr);
  reverse(arr);
  display(arr);

  search(arr,4);
  search(arr,14);
 
  return 0;
  
}

void insert(int*arr,int pos,int num){
  int i;
  for(i=pos-1;i<MAX;i++){
    arr[i]=num;
    
  }
  
}

void reverse(int*arr){
  int i;
  int temp;
  for(i=0;i<MAX/2;i++){
    temp=arr[i];
    arr[i]=arr[MAX-1-i];
    arr[MAX-1-i]=temp;
  }

}

void del(int*arr,int pos){
  int i;
  for(i=pos;i<MAX;i++)
    arr[i-1]=arr[i];
  arr[i-1]=0;
}


void display(int*arr){
  int i;
  for(i=0;i<MAX;i++)
  printf("%d\t", arr[i]);
  printf("\n");
}

void search(int*arr,int num){
  int i;
  for(i=0;i<MAX;i++){
    if(arr[i]==num){
      printf("%d \n",i);
      return;
    }
     
    
  }
  
  printf("Element Not in Array \n");
  
}
