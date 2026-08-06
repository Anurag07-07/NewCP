#include<bits/stdc++.h>
using namespace std;
void Print(){
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    cout<<arr[i]<<" ";
  }
}

void Print1(){
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    int x;cin>>x;
    arr[i] = x;
  }

  for (int i = 0; i < 10; i++)
  {
    cout<<arr[i]<<" ";
  }

  for (int i = 0; i < 10; i++)
  {
    cout<<&arr[i]<<" ";
  }

  cout<<endl;
  
}

void Print2(){
  int* arr = new int[10];
  for (int i = 0; i < 10; i++)
  {
    int x;cin>>x;
    arr[i] = x;
  }

  for (int i = 0; i < 10; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  for (int i = 0; i < 10; i++)
  {
    cout<<&arr[i]<<" ";
  }
  delete[] arr;
  arr = nullptr;

  for (int i = 0; i < 10; i++)
  {
    cout<<arr[i]<<" ";
  }

}

int* cloneArray(int* arr, int n){
  int* clone = new int[n];
  for (int i = 0; i < n; i++)
  {
    clone[i] = arr[i];
  }
  return clone;
}
int main(int argc, char const *argv[])
{
  // Print2();
  int n ;cin>>n;
  int* arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    int x;cin>>x;
    arr[i] = x;
  }

  int* ans = cloneArray(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout<<ans[i]<<endl;
  }
  
  delete[] ans;
  return 0;
}
