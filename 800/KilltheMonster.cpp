#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    void solve() {
      long long hc,dc;cin>>hc>>dc;
      long long hm,dm;cin>>hm>>dm;
      long long k,w,a;cin>>k>>w>>a;
      for (int i = 0; i <= k; i++)
      {
        long long coin = i;
        long long leftcoin = k-i;

        long long character_attack = (dc+(coin*w));
        long long character_health = (hm+(leftcoin*a));
        
        long long monster_attack = character_health/dm;
        long long character_a = hm/character_attack;


        if (monster_attack>character_a)
        {
          cout<<"YES"<<endl;
          return;
        }
        
      }

      cout<<"NO"<<endl;
      
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

Character
hc dc
Monster
hm dm

We have k coins

attack increases by w 
health increases by a 

*/
