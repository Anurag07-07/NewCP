#include<bits/stdc++.h>
using namespace std;
/*
Minimum cost to reach till n-2 + minimum cost of n-2
+
Minimum cost to reach till n-1 + minimum cost of n-1


Base Case 
Minimum cost to reach 0 or 1st stair is 0
*/

int minCost(vector<int>& nums,int n){
  if (n==0 && n==1)
  {
    return 0;
  }
  return min(nums[n-1]+minCost(nums,n-1),nums[n-2]+minCost(nums,n-2));
}

int minCost(vector<int>& nums,int n,vector<int>& dp){
  if (n==0 && n==1)
  {
    return 0;
  }
  if (dp[n]!=-1)
  {
    return dp[n];
  }
  
  return dp[n] =  min(nums[n-1]+minCost(nums,n-1),nums[n-2]+minCost(nums,n-2));
}

int main(int argc, char const *argv[])
{

  return 0;
}

