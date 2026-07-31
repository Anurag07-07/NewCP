#include<bits/stdc++.h>
using namespace std;
void Call(){
  string s;cin>>s;  
  for (int i = 0; i < s.length(); i++)
  {
    if (s[0]=='4')
    {
      cout<<"NO"<<endl;
      return;
    }

    if (s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
    {
      cout<<"NO"<<endl;
      return;
    }else if(!(s[i]=='1'|| s[i]=='4')){
      cout<<"NO"<<endl;
      return;
    }

  }

  cout<<"YES"<<endl;
}
int main(int argc, char const *argv[])
{
  Call();
  return 0;
}
