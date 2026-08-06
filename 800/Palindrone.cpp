// rem = n%12 = x
// n..........newnumber
// 1..................11

// n = 58 = 48
// 58-22 = 36 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    void solve() {
        long long n;
        cin >> n;
        if (n==10)
        {
          cout<<-1<<endl;
        }else{
          long long rem = n%12;
          long long a=0;
          long long b=0;
          if (rem<=9)
          {
            a = rem;
          }else if (rem==10)
          {
            a = 22;
          }else{
            a = 11;
          }
          b = n-a;
          cout<<a<<" "<<b<<endl;
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