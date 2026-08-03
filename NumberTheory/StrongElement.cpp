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
        vector<int> pgcd(n),sgcd(n);

        if (n==1)
        {
          cout<<1<<endl;
          return;
        }
        

        pgcd[0] = a[0],sgcd[n-1] = a[n-1];

        for (int i = 1; i < n; i++)
          pgcd[i] = __gcd(pgcd[i-1],a[i]);
        
          for (int i = n-2; i >= 0 ; i--)
          sgcd[i] = __gcd(sgcd[i+1],a[i]);

        int ans = 0;
        
        for (int i = 1; i < n-1; i++)
        {
          if (__gcd(pgcd[i-1],sgcd[i+1])!=1)
          {
            ans++;
          }
          
        }

        if (sgcd[1]!=1)
        {
          ans++;
        }
        
        if (pgcd[n-2]!=1)
        {
          ans++;
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