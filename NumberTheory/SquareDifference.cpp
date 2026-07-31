#include<bits/stdc++.h>
using namespace std;
void Call(){
  long long a,b;cin>>a>>b;
  
  long long ans = (a+b);
  if (a-b!=1)
  {
    cout<<"NO"<<endl;
    return;
  }
    
  for (long long i = 2; i*i<=ans; i++)
  {
    if (ans%i==0)
    {
      cout<<"NO"<<endl;
      return;
    }
    
  }

  cout<<"YES"<<endl;
  
}
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    Call();
  }
  
  return 0;
}
