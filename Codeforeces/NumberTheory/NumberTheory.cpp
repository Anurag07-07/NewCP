#include<bits/stdc++.h>
using namespace std;
void Factor(){
  int n;cin>>n;
  vector<int> fact;
  for (int i = 0; i*i <=n; i++)
  {
    if (n%i==0)
    {
      fact.push_back(i);
      if (i!=n/i)
        fact.push_back(n/i);
    }
  }
}

void TrailDivision(){
  int n;cin>>n;
  vector<int> primefactor;
  for (int i = 0; i*i <=n; i++)
  {
    if (n%i==0)
    {
      while (n%i==0)
      {
        n/=i;
        primefactor.push_back(i);
      }
      
    }
  }
  if (n>1)
  {
    primefactor.push_back(n);
  }
}

const int N=1e7;
bool prime[N];

void SieveofEratothenes(){
  int n;cin>>n;
  for (int i = 0; i < n; i++)
  prime[i] = 1;

  prime[0] = prime[1] = 0;
  for (int i = 2; i*i <=N ; i++)
  {
    if (prime[i]==1)
    {
      for (int j = i*i; j < N; j+=i)
      {
        prime[j]=0;
      }
      
    }
  }
}

const int N=1e7;
bool spf[N];
void SmallestPrimeFactor(){
  int n;cin>>n;
  for (int i = 0; i < n; i++)
    spf[i] = i;

  prime[0] = prime[1] = 0;
  for (int i = 2; i*i <=N ; i++)
  {
    if (spf[i]==i)
    {
      for (int j = i*i; j < N; j+=i)
      {
        if (spf[j]==j)
        {
          spf[j]=i;
        }
      }
    }
  }
}


int main(int argc, char const *argv[])
{
  return 0;
}
