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

        int k;cin>>k;
        string s;cin>>s;

        if (k==0)
        {
          cout<<"YES"<<endl;
          return;
        }
        
        int i = 0;
        int j = n-1;
        for (int i = 0; i < k; i++)
        {
          if (s[i]!=s[n-i-1])
          {
            cout<<"NO"<<endl;
            return;
          }
          
        }
                
        if (2*k>=n)
        {
          cout<<"NO"<<endl;
          return;
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


/*


 ij
qwqwq


*/ 