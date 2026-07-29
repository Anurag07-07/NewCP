#include<bits/stdc++.h>
using namespace std;
void Call(){
  long long n;cin>>n;
  long long count = 0;
  if (n<=2)
  {
    cout<<0<<endl;
    return;
  }
  
  if (n%2!=0)
  {
    cout<<(n-1)/2<<endl;
  }else{
    cout<<((n/2)-1)<<endl;
  }
  
}


// 1 2 3 4 5 6 7 8 9 10

int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    Call();
  }
  
  return 0;
}


// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16