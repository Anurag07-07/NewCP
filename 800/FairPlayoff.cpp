#include<bits/stdc++.h>
using namespace std;
void Call(){
  vector<int> nums(4);
  for(auto &i:nums) cin>>i;
  int maxi = 0;
  int s_maxi = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]>maxi)
    {
      s_maxi = maxi;
      maxi = nums[i];
    }else if (nums[i]<maxi && nums[i]>s_maxi)
    {
      s_maxi = nums[i];
    }
  }



  int winner1 = 0;
  int winner2 = 0;
  
  if (nums[0]>nums[1])
  {
    winner1 = nums[0];
  }else{
    winner1 = nums[1];
  }


  if (nums[2]>nums[3])
  {
    winner2 = nums[2];
  }else{
    winner2 = nums[3];
  }
  
  if ((winner1==maxi && winner2==s_maxi) ||(winner1==s_maxi && winner2==maxi) )
  {
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
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
