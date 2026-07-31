#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    bool isPrime(int n){
      for (int i = 2; i*i <= n; i++)
      {
        if (n%i==0)
        {
          return false;
        }
        
      }
      return true;
    }

    void solve() {
        int n;
        cin >> n;

        for (int b = 0; b < INT_MAX; b++)
        {
          if (!isPrime(b) && !isPrime(n+b))
          {
            {
              cout<<n+b<<" "<<b<<endl;
              return;
          }
          
        }
    }
  }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution s;
        s.solve();

    return 0;
}