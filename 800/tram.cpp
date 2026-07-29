#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;cin>>n;
  int tram = 0;
  int cap = 0;
  while (n--)
  {
    int a,b;cin>>a>>b;
    tram = tram-a;
    tram = tram+b;
    cap = max(tram,cap);
  }

  cout<<cap<<endl;
  
  return 0;
}
