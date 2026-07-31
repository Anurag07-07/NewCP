#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int k,r;cin>>k>>r;
  int count = 1;
  for (int i = 1; i <= 10; i++)
  {
    if (((i*k)%10)==0 || ((i*k)%10)==r)
    {
      break;
    }
    count++;
  }

  cout<<count<<endl;
  
  return 0;
}


/*
Buy Shovel
k burles
117
234
351
468
585
702
819
936
1053
*/