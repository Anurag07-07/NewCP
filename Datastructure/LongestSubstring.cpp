#include<bits/stdc++.h>
using namespace std;

void Substring(){
  string s;cin>>s;
  int i =  0;
  vector<int> freq(256,0);

  int maxlen = 0;
  int start = 0;
  for (int j = 0; j < s.length(); j++)
  {
    while (freq[s[j]]!=0)
    {
      freq[s[i]]--;
      i++;
    }
    
    freq[s[j]]++;
    if (j-i+1>=maxlen)
    {
      maxlen = j-i+1;
      start = i;
    }
  }

  


  string ans = s.substr(start,maxlen);
  cout<<ans<<endl;
  cout<<maxlen<<endl;
}

void TwoSum(){
  int n;cin>>n;
  vector<int> nums(n);
  for(auto &i:nums) cin>>i;
  int i = 0;
  int j = n-1;
  int count = 0;
  int target;cin>>target;
  while (i<j)
  {
    int sum = nums[i]+nums[j];
    if (sum>=target)
    {
      count+=j-i;
      j--;
    }else{
      i++;
    }
  }
  cout<<count<<endl;
}

int main(int argc, char const *argv[])
{
  Substring();
  return 0;
}