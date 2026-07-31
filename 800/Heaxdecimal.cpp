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

        if (n==0)
        {
          cout<<0<<" "<<0<<" "<<0<<endl;
          return;
        }
        

        vector<int> fibo;
        fibo.push_back(0);
        fibo.push_back(1);

        for (int i = 1; i < n; i++)
        {
          if (fibo[fibo.size()-1]+fibo[fibo.size()-2]>=n)
            {
              break;
            }
            fibo.push_back(fibo[fibo.size()-1]+fibo[fibo.size()-2]);
        }


        
        vector<int> ans;
        int j = fibo.size()-1;
        while (j>=0)
        {
          if (n==0)
          {
            break;
          }
          
          if (fibo[j]>=0)
          {
            ans.push_back(fibo[j]);
          }
          n-=fibo[j];
          j--;
        }
        int val = 3-ans.size(); 
        while ((val)--)
        {
          ans.push_back(0);
        }

        for (int i = 0; i < ans.size(); i++)
          cout<<ans[i]<<" ";

    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    Solution s;
        s.solve();

    return 0;
}


/*

13-8 = 5

            j
0 1 1 2 3 5 8 

*/