#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int count = 0;
  int n,m;cin>>n>>m;
  for (int a = 0; a <=1000 ; a++)
  {
    for (int b = 0; b <=1000; b++)
    {
      if ((a*a)+b==n && a+(b*b)==m )
      {
        count++;
      }
      
    }
  }
  
  cout<<count<<endl;
  return 0;
}
