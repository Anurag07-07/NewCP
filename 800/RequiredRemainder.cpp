#include<bits/stdc++.h>
using namespace std;
void Call(){
  long long  x,y,n;
  cin>>x>>y>>n;

  long long rem = n%x;
  long long newvalue = n-rem;
  if (newvalue+y<=n)
  {
    cout<<newvalue+y<<endl;
  }else if(newvalue+y>n){
    newvalue-=x;
    cout<<newvalue+y<<endl;
  }
  
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



/*

12345%7 = 4

12339
12345

*/