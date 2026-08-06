#include<bits/stdc++.h>
using namespace std;
int Fibo(int n,vector<int>& dp){
  if (n<=1)
  {
    return n;
  }
  //Return the stored data
  if (dp[n]!=-1)
  {
    return dp[n];
  }
  return dp[n] = Fibo(n-1,dp)+Fibo(n-2,dp);
}


int BottomUp(vector<int>& dp,int n){
  //Bottom Up Approach
  if (n<=1)
  {
    return n;
  }
   
  //Fill Base Case
  dp[0] = 0;
  dp[1] = 1;
  //Use For Loop to Calculate Other
  for (int i = 2; i <=n; i++)
  {
    dp[i] = dp[i-1]+dp[i-2];
  }
  return dp[n];
}

//Space Optimization 
int SpaceOptimization(vector<int>& dp,int n){
  if (n<=1)
  {
    return n;
  }

  if(n==2) return 1;

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  
  for (int i = 3; i <=n; i++)
  {
    dp[0] = dp[1];
    dp[1] = dp[2];
    dp[2] = dp[0]+dp[1];
  }
  return dp[n];
}


int main(int argc, char const *argv[])
{
  //Top Down Approach
  int n;cin>>n;
  vector<int> dp(n+1,-1);
  cout<<Fibo(n,dp);


  BottomUp(dp,n);
  
  return 0;
}
