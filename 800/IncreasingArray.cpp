#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    void solve() {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (auto &x : nums) cin >> x;

        // logic here
        /*

        3 2 5 1 7
        3 3 5 5 7

        move = 5
        count = 1998
        1000 1 1 1
        1000 1000 1000 1000
        */

        long long count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
          if (nums[i]<=nums[i-1])
          {
            count+=abs(nums[i-1]-nums[i]);
            nums[i] = nums[i-1];
          }
          
        }
        

        cout<<count<<endl;
    }
};



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    Solution s;
        s.solve();

    return 0;
}