#include<bits/stdc++.h>
using namespace std;
void Call(){
  int n;cin>>n;
  vector<int> nums;
  for (int i = 0; i < n; i++)
  {
    int a;cin>>a;
    nums.push_back(a);
  }
  

  int maxi = *max_element(nums.begin(),nums.end());

  int count = 0;
  for (int i = 0; i < nums.size(); i++)
    count+=abs(nums[i]-maxi);

    cout<<count<<endl;
}
int main(int argc, char const *argv[])
{
  Call();
  return 0;
}
