#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
  public:
  void solve() {
    vector<int> nums(3);
    for(auto &i:nums)cin>>i;
    sort(nums.begin(),nums.end());
      if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]){
        cout<<0<<endl;
      }else{
        int round = 0;
        while (true)
        {
          
          if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]){
            break;
          }
          round++;
          sort(nums.begin(),nums.end());
          nums[2]--;
          nums[0]++;
          
        }
        cout<<round<<endl;
      }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    Solution s;
    while (t--) {
        s.solve();
    }

    return 0;
}