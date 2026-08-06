#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>& nums){
  for (int i = 0; i < nums.size(); i++)
  {
    cout<<nums[i]<<" ";
  }
  cout<<endl;
}

void SumofElement(vector<int>& nums){
  int sum = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    sum+=nums[i];
  }
  cout<<sum<<endl;
}

void Maximum(vector<int> nums){
  int maxi = INT_MIN;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]>maxi)
    {
      maxi = nums[i];
    }
    
  }
  cout<<maxi<<endl;
}
void Minimum(vector<int> nums){
  int minimum = INT_MAX;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]<minimum)
    {
      minimum = nums[i];
    }
    
  }
  cout<<minimum<<endl;
  
}

void CountEvenOdd(vector<int> nums){
  int odd = 0;
  int even = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]%2==0)
    {
      even++;
    }else{
      odd++;
    }
    
  }

  cout<<even<<" "<<odd<<endl;
  
}

void Reverse(vector<int> nums){
  int i = 0;
  int j = nums.size()-1;
  while (i<j)
  {
    swap(nums[i],nums[j]);
    i++;
    j--;
  }
  

  Print(nums);
}

void Clone(vector<int> nums){
  int n = nums.size();
  vector<int> clone(n,0);
  for (int i = 0; i < n; i++)
  {
    clone[i] = nums[i];
  }
  Print(clone);
}
void Linear(vector<int> nums){
  int x;cin>>x;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]==x)
    {
      cout<<"PRESENT"<<endl;
      return;
    }
     
  }
  cout<<"NOT PRESENT"<<endl;
  return;
}
void Freq(vector<int> nums){
  int x;cin>>x;
  int count = 0;
  for(int i:nums){
    if (i==x)
    {
      count++;
    }
    
  }
  cout<<count<<endl;
}
void PrintInReverseOrder(vector<int> nums){
  for (int i = nums.size() - 1; i >= 0; i--)
  {
    cout<<nums[i]<<" ";
  }
  cout<<endl;
}
int main(int argc, char const *argv[])
{
  vector<int> nums{1,2,2,3,4,5,4,5,6,4};
  Print(nums);
  SumofElement(nums);
  Maximum(nums);
  Minimum(nums);
  CountEvenOdd(nums);
  Reverse(nums);
  Clone(nums);
  // Linear(nums);
  // Freq(nums);
  PrintInReverseOrder(nums);
  return 0;
}
