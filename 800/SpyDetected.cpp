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
        for (int i = 0; i < n; i++)
        {
          if (i==0)
          {
            if (a[i]!=a[i+1] && a[i+1]==a[i+2])
            {
              cout<<i+1<<endl;
              return;
            }else if(a[i]!=a[i+1] && a[i+1]!=a[i+2]){
              cout<<i+2<<endl;
              return;
            }
          }else{
            if (i>0 && a[i]!=a[i-1])
            {
              cout<<i+1<<endl;
              return;
            }
          }
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