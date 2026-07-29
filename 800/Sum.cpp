#include<bits/stdc++.h>
using namespace std;
void isP(){
  int a,b,c;cin>>a>>b>>c;    
  if (a+b==c)
  {
    cout<<"YES"<<endl;
    return;
  }
  if (c+b==a)
  {
    cout<<"YES"<<endl;
    return;
  }
  if (c+a==b)
  {
    cout<<"YES"<<endl;
    return;
  }

  cout<<"NO"<<endl;
  
}
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    isP();
  }
  return 0;
}