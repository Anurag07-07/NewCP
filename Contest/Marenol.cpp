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

        string s1;cin>>s1;
        string s2;cin>>s2;

        //Find the 100 When it is made
        if (n==1)
        {
          cout<<"YES"<<endl;
          return;
        }

        if (n==2)
        {
          cout<<"NO"<<endl;
          return;
        }else{
            
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