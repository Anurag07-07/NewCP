#include<bits/stdc++.h>
using namespace std
;
bool Call(int n){
  set<int> factors;
  for (int i = 2; i*i <= n; i+=1)
  {
    if (n%i==0)
    {
      while (n%i==0 && n>0)
      {
        factors.insert(i);
        n = n/i;
      }
    }
  }


  if (n>2)
  {
    factors.insert(n);
  }

  if (factors.size()==2)
  {
    return true;
  }
  
  return false;
}

int main(int argc, char const *argv[])
{
  int n;cin>>n;
  int count = 0;
  for (int i = 2; i <=n ; i++)
  {
    if (Call(i))
    {
      count++;
    }
    
  }

  cout<<count<<endl;
  
  return 0;
}
