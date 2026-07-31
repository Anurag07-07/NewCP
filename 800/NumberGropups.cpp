#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int c;cin>>c;
  long n = c;
  long long k =  (n*(n+1))/2;
  long long kthgsum = k*k;

  long long kminus1 = (n*(n-1))/2;
  long long kminusgroup = kminus1*kminus1;

  cout<<kthgsum-kminusgroup<<endl;
  return 0;
}
