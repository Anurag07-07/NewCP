#include<bits/stdc++.h>
using namespace std;
int Frog(int n){
  if (n<=2)
  {
    return n;
  }

  if (n==3)
  {
    return 4;
  }
  
  
  return Frog(n-1)+Frog(n-2);
}

int FrogJumpTopDown(int n,vector<int>& dp){
  if (n<=2)
  {
    return n;
  }

  if (n==3)
  {
    return 4;
  }


  if (dp[n]!=-1)
  {
    return dp[n];
  }
  
  return dp[n] = FrogJumpTopDown(n-1,dp)+FrogJumpTopDown(n-2,dp);
}

int ClimbingStairsBottomUp(int n,vector<int>& dp){
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i = 4; i <= n; i++)
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
  dp[3] = 4;
  for (int i = 3; i <=n; i++)
  {
    dp[0] = dp[1];
    dp[1] = dp[2];
    dp[2] = dp[3];
    dp[3] = dp[1]+dp[0]+dp[2];
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
