#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;cin>>n;
  vector<int> arr(n);
  for(auto &i:arr) cin>>i;
  vector<pair<int,int>> p;
  for (int i = 0; i < arr.size(); i++)
  p.push_back(make_pair(i+1,arr[i]));

  sort(p.begin(),p.end(),[](pair<int,int>& a,pair<int,int>& b){
    return a.second<b.second;
  });

  for(auto x:p){
    cout<<x.first<<" ";
  }
  return 0;
}


// 1  2  3  4  
// 2  3  4  1

// 1 -> 2
// 2 -> 3
// 3 -> 4
// 4 -> 1
// 1 2 3 4
// 4 1 2 3