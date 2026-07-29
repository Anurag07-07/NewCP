#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  long long n;cin>>n;
  long long ans = 0;
  if (n%2==0)
  {
    cout<<n/2<<endl;
  }else{

    long long value = (n-1)/2;
    cout<<value-n<<endl;
  }
   
  return 0;
}