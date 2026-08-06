#include<bits/stdc++.h>
using namespace std;
void PrintAddress(vector<int>& nums){
  for (int i = 0; i < nums.size(); i++)
  {
    cout<<&nums[i]<<" ";
  }
  cout<<endl;

  cout<<&nums[0]<<endl;
  cout<<&nums<<endl;
}

void Experiment(vector<int>& nums){
  int* ptr;
  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(nums)<<endl;
}

int main(int argc, char const *argv[])
{
  vector<int> nums{1,2,3,4,5};
  PrintAddress(nums);
  Experiment(nums);
  return 0;
}
