#include<bits/stdc++.h>
using namespace std;
// int linearSearch(vector<int>& nums, int target){
//   for (int i = 0; i < nums.size(); i++)
//   {
//     if (nums[i]==target)
//     {
//       cout<<"PRESENT"<<endl;
//       return;
//     }
    
//   }
//   cout<<"NOT PRESENT"<<endl;
//   return;
// }

// bool exists(vector<int>& nums, int target){
//   for (int i = 0; i < nums.size(); i++)
//   {
//     if (nums[i]==target)
//     {
//       cout<<"PRESENT"<<endl;
//       return;
//     }
    
//   }
//   cout<<"NOT PRESENT"<<endl;
//   return;
// }

// int firstOccurrence(vector<int>& nums, int target){
//   for (int i = 0; i < nums.size(); i++)
//   {
//     if (nums[i]==target)
//     {
//       cout<<i<<endl;
//       return;
//     }
    
//   }
//   cout<<-1<<endl;
//   return;
// }

// int lastOccurrence(vector<int>& nums, int target){
//   for (int i = nums.size()-1; i >= 0; i--)
//   {
//     if (nums[i]==target)
//     {
//       cout<<i<<endl;
//       return;
//     }
    
//   }
//   cout<<-1<<endl;
//   return;
// }

// int countOccurrence(vector<int>& nums, int target){
//   int count = 0;
//   for (int i = nums.size()-1; i >= 0; i--)
//   {
//     if (nums[i]==target)
//     {
//       count++;
//     }
    
//   }
//   cout<<count<<endl;
//   return;
// }

// void replaceAll(vector<int>& nums, int oldVal, int newVal){
//   for(int &x:nums){
//     if (x==oldVal)
//     {
//       x= newVal;
//     }
//   }
// }


void FindSmallestPostiiveNumber(vector<int> & nums){
  int small = -1;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]>0 && nums[i]<small)
    {
      small = nums[i];
    }
    
  }

  cout<<small<<endl;
  
}

void FindLargestNegativeNumber(vector<int> & nums){
  int largest = INT_MIN;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i]<0 && nums[i]>largest) 
    {
      largest = nums[i];
    }
    
  }

  cout<<largest<<endl;
  
}

void CheckWeatherUnique(vector<int>& nums){
  bool flag = false;
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = 0; j < nums.size(); j++)
    {
      if (i!=j&&nums[j]==nums[i])
      {
        cout<<"NOT UNIQUE"<<endl;
        return;
      }
      
    }
    
  }

  cout<<"UNIQUE"<<endl;
  
}

int main(int argc, char const *argv[])
{
  vector<int> nums{-8,-3,-1,5,7};
  // FindSmallestPostiiveNumber(nums);
  // FindLargestNegativeNumber(nums);
  CheckWeatherUnique(nums);
  return 0;
}





// Mostly in the Video 
// I focus on study 
// So if you want to study with me 
// You Can Join 
// This is recoreded session of My Night Study 