#include<bits/stdc++.h>
using namespace std;
void Call(){
  string s;cin>>s;
  for (int i = 0; i < s.length(); i++)
  {
    s[i] = toupper(s[i]);
  }

  string s1 = "YES";

  int i = 0;
  int j = 0;
  while (i<3 && j<3)
  {
    if (s1[i]!=s[j])
    {
      cout<<"NO"<<endl;
      return;
    }
    i++;
    j++;
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
