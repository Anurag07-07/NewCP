#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int k,r;cin>>k>>r;
  for (int i = 1; i <= 10; i++)
  {
    int totalcost = i*k;
    if (totalcost%10==0 || totalcost%10==r)
    {
      cout<<i<<endl;
      break;;
    }
    
  }
  
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