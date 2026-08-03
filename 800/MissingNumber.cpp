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

        vector<int> a(n);
        for (auto &x : a) cin >> x;

        // logic here
        int x = 0;
        for (int i = 1; i <= n; i++)
          x^=i;

        int ans = 0;
        for (int i = 0; i < a.size(); i++)
          ans^=a[i];
        
        int res = ans^x;
        cout<<res<<endl;  
        
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution s;
        s.solve();

    return 0;
}