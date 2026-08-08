#include<bits/stdc++.h>
using namespace std;
int ClimbingStairs(int n){
  if (n<=1)
  {
    return n;
  }
  return ClimbingStairs(n-1)+ClimbingStairs(n-2);
}

int ClimbingStairsTopDown(int n,vector<int>& dp){
  if (n<=1)
  {
    return n;
  }

  if (dp[n]!=-1)
  {
    return dp[n];
  }
  
  return dp[n] = ClimbingStairsTopDown(n-1,dp)+ClimbingStairsTopDown(n-2,dp);
}

int ClimbingStairsBottomUp(int n,vector<int>& dp){
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++)
  {
    dp[i] = dp[i-1]+dp[i-2];
  }
  
  long long ans = dp[n];
  cout<<ans<<endl;
}

void ClimbingStairsSpaceOptimization(int n,vector<int>& dp){
  if (n<=2)
  {
    cout<<n<<endl;
    return;
  }
  
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <=n; i++)
  {
    dp[0] = dp[1];
    dp[1] = dp[2];
    dp[2] = dp[1]+dp[0];
  }
  
  long long ans = dp[n];
  cout<<ans<<endl;
}

int main(int argc, char const *argv[])
{
  int n;cin>>n;
  vector<int> dp(n+1,-1);
  ClimbingStairsSpaceOptimization(n,dp);
  return 0;
}
