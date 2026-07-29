#include<bits/stdc++.h>
using namespace std;
void Check(){
  long long b;cin>>b;
  while (b>1)
  {
    if (b%2==1)
    {
      cout<<"YES"<<endl;
      return;
    }
    b/=2;
  }
  cout<<"NO"<<endl;
}
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    Check();
  }
  
  return 0;
}
