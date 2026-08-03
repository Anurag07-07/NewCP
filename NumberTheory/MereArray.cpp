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
        //Find the Minimum
          int mini = *min_element(a.begin(),a.end());

          multiset<int> st;
          for (int i = 0; i < n; i++)
          {
            if (a[i]%mini==0)
            {
              st.insert(a[i]);
            }
            
          }

          for (int i = 0; i < n; i++)
          {
            if (a[i]%mini==0)
            {
              int temp = *st.begin();
              a[i] = temp;
              st.erase(st.find(temp));
            }
            
          }

          for (int i = 0; i < n-1; i++)
          {
            if (a[i]>a[i+1])
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