#include<bits/stdc++.h>
using namespace std;

void Optimal(){
  int n;cin>>n;
  if (n&n-1==0)
  {
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  return;
}

int main(int argc, char const *argv[])
{
  int n;cin>>n;
  for (int i = 1; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j <n ; j++)
    {
      sum+=j;
      if (sum==n)
      {
        cout<<"YES"<<endl;
        return 0;
      }
      if (sum>n)
      {
        break;
      }
    }
    
  }
  cout<<"NO"<<endl;  
  return 0;
}
