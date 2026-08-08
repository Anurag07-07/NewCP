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


        long long ans = n+1;
        for (int i = 2; i*i <=ans; i++)
        {
          if (ans%i==0)
          {
            cout<<"NO"<<endl;
            return;
          }
          
        }
        cout<<"YES"<<endl;
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