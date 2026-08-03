#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    void solve() {
      string s;cin>>s;
      stack<char> st;
      for(char x:s){
        if (x=='B')
        {
          if (st.empty())
          {
            st.push(x);
          }else{
            st.pop();
          }
        }else{
          st.push(x);
        }
      }
      
      cout<<st.size()<<endl;
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