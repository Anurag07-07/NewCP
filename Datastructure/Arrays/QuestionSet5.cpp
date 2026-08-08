#include<bits/stdc++.h>
using namespace std;
void Print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void InsertBegin(int arr[],int n){
  int x;cin>>x;
  n++;
  for (int i = n-2; i >=0 ; i--)
  {
    arr[i+1] = arr[i];
  }
  arr[0] = x;
  Print(arr,n);
}

void InsertAnyIndex(int arr[],int n){
  int x;cin>>x;
  int index;cin>>index;
  n++;
  for (int i = n-2; i >=index ; i--)
  {
    arr[i+1] = arr[i];
  }
  arr[index] = x;
  Print(arr,n);
}

void InsertEnd(int arr[],int n){
  int x;cin>>x;
  arr[n] = x;
  n++;
  Print(arr,n);
}

void InsertinSortedArray(int arr[],int n){
  int x;cin>>x;
  n++;
  int i = n-2;
  while (arr[i]>x)
  {
    arr[i+1] = arr[i];
    i--;
  }
  arr[i+1] = x;
  Print(arr,n);
}

void IfElementNotExist(int arr[],int n){
  int x;cin>>x;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==x)
    {
      flag = true;
      break;
    }
    
  }

  if (!flag)
  {
    n++;
    int i = n-2;
    while (arr[i]>x)
    {
      arr[i+1] = arr[i];
      i--;
    }
    arr[i+1] = x;  
  }
  
  Print(arr,n);
    
}


void InsertAfterEveryOccurance(int arr[],int n){
  int occ = 0;
  int target;cin>>target;
  int x;cin>>x;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==target)
    {
      occ++;
    }
    
  }

  int clone[n+occ];
  int i = 0;
  int j = 0;
  while (i<n)
  {
    if (arr[i]==target)
    {
      clone[j] = arr[i];
      i++;j++;
      clone[j] = x;
      j++;
    }else{
      clone[j] = arr[i];
      j++;
      i++;
    }
  }
  Print(clone,n+occ);
}

void InsertBeforeEveryOccurance(int arr[],int n){
  int occ = 0;
  int target;cin>>target;
  int x;cin>>x;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==target)
    {
      occ++;
    }
    
  }

  int clone[n+occ];
  int i = 0;
  int j = 0;
  while (i<n)
  {
    if (arr[i]==target)
    {
      clone[j] = x;
      j++;
      clone[j] = arr[i];
      i++;
      j++;
    }else{
      clone[j] = arr[i];
      j++;
      i++;
    }
  }
  Print(clone,n+occ);
}

int* DynamicArray(int arr[],int n){
  int x;cin>>x;
  int index;cin>>index;
  int* ans = new int[n+1];
  for (int i = 0; i < n; i++)
  {
    ans[i] = arr[i];
  }

  for (int i = n-2; i >=index ; i--)
  {
    ans[i+1] = ans[i];
  }
  
  ans[index] = x;

  for (int i = 0; i < n+1; i++)
  {
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

void Vec(){
  vector<int> ans;
  ans.push_back(45);
  ans.push_back(45);
  ans.push_back(45);
  ans.push_back(45);
  ans.push_back(45);
  ans.insert(ans.begin(),50);

  ans.insert(ans.begin()+3,70);

  for(int x:ans){
    cout<<x<<" ";
  }
}


int main(int argc, char const *argv[])
{
  // int arr[10] = {1,2,4,5,6};
  int arr[10] = {1,2,3,2,4};
  int n = 5;
  // InsertBegin(arr,n);
  // InsertAnyIndex(arr,n);
  // InsertEnd(arr,n);
  // InsertinSortedArray(arr,n);
  // IfElementNotExist(arr,n);
  // InsertAfterEveryOccurance(arr,n);
  // InsertBeforeEveryOccurance(arr,n);
  // DynamicArray(arr,n);
  Vec();
  return 0;
}
