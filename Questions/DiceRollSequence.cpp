#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    bool Adjacent(int a,int b){
      if (a==b)
      {
        return false;
      }
      
      if ((a==1 && b==6) || (a==6 && b==1))
      {
        return false;
      }else if ((a==2 && b==5) || (a==5 && b==2))
      {
        return false;
      } else if ((a==3 && b==4) || (a==4 && b==3))
      {
        return false;
      } 
      return true;
    }

    void solve() {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (auto &x : nums) cin >> x;

        // logic here
        int count = 0;
        for (int i = 0; i < nums.size()-1; i++)
        {
          if (!Adjacent(nums[i],nums[i+1]))
          {
            i++;
            count++;
          }
          
        }
        
        cout<<count<<endl;
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