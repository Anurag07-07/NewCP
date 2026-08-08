#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>& nums){
  for(int x:nums){
    cout<<x<<" ";
  }

  cout<<endl;
}
void PrintAlternating(vector<int>& nums){
    for (int i = 0; i < nums.size(); i+=2)
    {
      cout<<nums[i]<<endl;
    }
}

void PrintEvenIndices(vector<int>& nums){
    for (int i = 0; i < nums.size(); i+=2)
    {
      if(i%2==0)
      cout<<nums[i]<<" ";
    }
    cout<<endl;
  }
  
  void PrintOddIndices(vector<int>& nums){
    for (int i = 0; i < nums.size(); i+=2)
    {
      if(i%2!=0)
      cout<<nums[i]<<" ";
    }
    cout<<endl;
  }

  void PrintOccurance(vector<int>& nums){
    int x;cin>>x;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
      if(nums[i]==x){
        ans.push_back(i);
        break;
      }
    }

    for (int i = nums.size()-1; i >=0 ; i--)
    {
      if(nums[i]==x){
        ans.push_back(i);
        break;
      }
    }

    for(int x:ans){
      cout<<x<<" ";
    }
    cout<<endl;
  }



  void Multiply(vector<int> nums){
    for(int &x:nums){
      x*=3;
    }

    Print(nums);
  }

  void ReplaceWithZero(vector<int> nums){
    for(int &x:nums){
      x*=3;
    }

    Print(nums);
  }

  void Negative(vector<int>& nums){
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i]<0)
      {
        nums[i] = 0;
      }
      
    }

    Print(nums);
    
  }

  void SortedorNot(vector<int>& nums){
    for (int i = 0; i < nums.size()-1; i++)
    {
      if (nums[i+1]<nums[i])
      {
        cout<<"UNSORTED"<<endl;
        return;
      }
      
    }
    
    cout<<"SORTED"<<endl;
  }

int main(int argc, char const *argv[])
{
  vector<int> nums{-1-2,-3,1,2,3,4,5,6};
  // PrintAlternating(nums);
  // PrintEvenIndices(nums);  
  // PrintOddIndices(nums);  
  // Multiply(nums);
  Negative(nums);
  SortedorNot(nums);
  return 0;
}
