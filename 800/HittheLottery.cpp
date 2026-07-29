#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  vector<int> arr{1,5,10,20,100};
  int n;cin>>n;
  int count = 0;
  for (int i = arr.size()-1; i >=0 ; i--)
  {
    count += n/arr[i];
    n = n%arr[i];
    if (n==0)
    {
      break;
    }
    
  }
  cout<<count<<endl;
  return 0;
}
