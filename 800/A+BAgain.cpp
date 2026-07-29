#include<bits/stdc++.h>
using namespace std;
void Call(){
  int l,a,b;cin>>l>>a>>b;
  vector<int> nums(l);
  for(int i = 0;i<l;i++){
    nums[i] = i;
  }

  

  int maxi = INT_MIN;
  int n = nums.size();
  int i = a;
  while (true)
  {
    if (maxi==nums[i%n])
    {
      break;
    }
    maxi = max(maxi,nums[i%n]);
    i+=b;
  }

  cout<<maxi<<endl;

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

