#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    void solve() {
        int n,k;
        cin >> n>>k;

        vector<int> nums(n);
        for (auto &x : nums) cin >> x;

        sort(nums.begin(),nums.end());
        
        int mid = (nums.size()-1)/2;
        int elem = nums[mid];

    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution s;
        s.solve();

    return 0;
}


/* 

4 1 2 4 3 4 4
0 1 2 3 4 5 6
1 2 3 5 5 5 5



1 2 1 1 1 
1 1 2 2 3









*/

