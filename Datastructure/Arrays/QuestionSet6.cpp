#include<bits/stdc++.h>
using namespace std;
void Print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void deleteFront(int arr[], int &n){
  for (int i = 1; i < n; i++)
  {
    arr[i-1] = arr[i];
  }
  n--;
  Print(arr,n);
}

void deleteIndex(int arr[], int &n,int index){
  for (int i = index+1; i < n; i++)
  {
    arr[i-1] = arr[i];
  }
  n--;
  Print(arr,n);
}

void deleteByValue(int arr[], int &n,int value){
  int index = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==value)
    {
      index = i;
      break;
    }
  }
  
  n--;
  deleteIndex(arr,n,index);
}


void deleteAllOccurrences(int arr[], int &n, int value){
  int i = 0;
  for (int j = 0; j < n; j++)
  {
    if (arr[j]!=value)
    {
      arr[i] = arr[j];
      i++;
    }
  }

  for (int k = 0; k < i; k++)
  {
    cout<<arr[k]<<" ";
  }

  cout<<endl;
}


int main(int argc, char const *argv[])
{
  int arr[]  = {1,2,3,4,4,4,5};
  int n = 7;
  // deleteFront(arr,n);
  // deleteIndex(arr,n,2);
  deleteAllOccurrences(arr,n,4);
  return 0;
}
