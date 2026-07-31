#include<bits/stdc++.h>
using namespace std;
long long helperRecursion(long long a,long long b,int mod){
  if (b==0)
  {
    return 1;
  }
  long long temp = helperRecursion(a,b/2,mod);
  temp*=temp;
  temp%=mod;
  if (b&1)
  {
    temp*=a;
    temp%=mod;
  }
  return temp;
}

long long helperBit(long long a,long long b,int mod){
  long long res = 1;
  while (b>0)
  {
    if (b&1)
    {
      res*=a;
    }
    a*=a;
    b>>=1;
  }
  return res;
}

void Binary(){
  long long a,b;
  cin>>a>>b;
}
int main(int argc, char const *argv[])
{
  
  return 0;
}
