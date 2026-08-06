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
        string s;cin>>s;
        
        if (n==0)
        {
          cout<<0<<endl;
          return;
        }

        if (n==3)
        {
          cout<<2<<endl;
        }else{
          string ans;
          ans.push_back(s[0]);
          int j = 1;
          while (j<n-1)
          {
            if (s[j]!=ans.back())
            {
              ans.push_back(s[j]);
            }
            j++;
          }
          if (s[n-1]!=ans.back())
          {
            ans.push_back(s[n-1]);
          }
                    
          cout<<ans.length()<<endl;
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