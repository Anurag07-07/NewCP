#include<bits/stdc++.h>
using namespace std;

void ContiguousArray(){
  int n;cin>>n;
  vector<int> nums(n);
  for(auto &i:nums)cin>>i;
  unordered_map<int,int> mp;
  mp[0] = -1;
  int sum = 0;
  int maxlength = 0;
  for(int i = 0;i<n;i++){
    sum += nums[i] == 0 ? -1 : 1;
    if (mp.count(sum))
    {
      maxlength = max(maxlength,i-mp[sum]);
    }

    mp.insert({i,sum});
  }
  cout<<maxlength<<endl;
}

void PrefixMultiplication(){
  int n;cin>>n;
  vector<int> v(n+1);
  for(int i = 1;i<=n;i++) cin>>v[i];
  vector<int> pre1(n+1,0),pre2(n+1,0);

  for (int i = 1; i <= n ; i++)
  {
    pre1[i] = pre1[i-1]+(i*(v[i]));
    pre2[i] = pre1[i-1]+((v[i]));
  }

  int q;
  cin>>q;
  while (q--)
  {
    int l,r;cin>>l>>r;
    cout<<(pre1[r]-pre1[l-1])-(l-1)*(pre2[r]-pre2[l-1])<<" ";
  }
}


void DifferenceArray(){
  int n;cin>>n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }

  int q;cin>>q;
  vector<int> diff(n+1,0);

  while (q--)
  {
    int l,r,x;
    cin>>l>>r>>x;
    diff[l]+=x;
    if(r!=n-1)
    diff[r+1]+=-x;
  }

  for (int i = 1; i <=n ; i++)
    diff[i] += diff[i-1];
  
  for (int i = 0; i < n; i++)
    v[i]+=diff[i];

  cout<<endl;
}

//Grag and Array

int main(int argc, char const *argv[])
{
  // PrefixMultiplication();  // TC O(N+Q)
  ContiguousArray();
  return 0;
}
