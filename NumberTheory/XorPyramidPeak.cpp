#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

const int N = 2e5;
int power[N];

class Solution {
public:
    void solve() {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &x : a) cin >> x;

        // logic here
        power[2] = 1;
        for (int i = 3; i < N; i++)
        {
          power[i] = (i/2)+power[i/2];
        }

        long long ans = 0;
        for (int i = 0; i < n-1; i++)
        {
          long long c1 = power[n-1];
          long long c2 = power[i];
          long long c3 = power[n-1-i];

          if (c1-c2-c3==0)
          {
            ans = ans^ a[i];
          }
          
        }

        cout<<ans<<endl;
        
        
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