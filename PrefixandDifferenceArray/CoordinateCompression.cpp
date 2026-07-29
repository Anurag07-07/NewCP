// Given an array containing integer from 1 to 10^12
// Convert the Number to 10^6 such that a1<a2 or ai<aj 
#include<bits/stdc++.h>
using namespace std;
void CoordinateCompression(){
  vector<long long> nums{2,100000000000,1000000000000,1000,40};
  sort(nums.begin(),nums.end());

  unordered_map<int,long long> mp;
  for (int i = 0; i < nums.size(); i++)
    mp[i] = nums[i];



   for(auto &i:mp){
    cout<<i.first<<" -> "<<i.second<<endl;
   } 
  
}

//Snuke Prime
void SnukePrimeSomething(){
  int n,c;cin>>n>>c;
  unordered_map<int,vector<long long>> mp;
  while (n--)
  {
    int ai,bi,ci;cin>>ai>>bi>>ci;
    for (int i = ai; i <= bi; i++)
    {
      mp[i].push_back(ci);
    }
    
  }

  int minimum_money = 0;
  long long sum = 0;
  for(auto &i:mp){
    vector<long long> temp = i.second;
    sum = accumulate(temp.begin(),temp.end(),0);
    if (sum>c)
    {
      minimum_money+=c;
    }else{
      minimum_money+=sum;
    }
  }
  
  
  cout<<minimum_money<<endl;
  
}

const int N = 1e6+1;
long long diff[N];



void Solve(){

  long long n;cin>>n;
  long long c;
  cin>>c;
  vector<long long> start(n),end(n),cost(n);
  for (long long i = 0; i < n; i++)
  {
    cin>>start[i]>>end[i]>>cost[i];
  }

  memset(diff,0,sizeof(diff));

  for (long long i = 0; i < n; i++)
  {
    diff[start[i]]+=cost[i];
    diff[end[i]+1]-=cost[i];
  }
  
  for (long long i = 1; i < N; i++)
  {
    diff[i]+=diff[i-1];
  }

  long long ans = 0;
  for (long long i = 0; i < N; i++)
  {
    ans+=min(diff[i],c);
  }
  
}

void Solve1(){
  long long n;cin>>n;
  long long c;
  cin>>c;
  vector<long long> start(n),end(n),cost(n);
  for (long long i = 0; i < n; i++)
  {
    cin>>start[i]>>end[i]>>cost[i];
  }

  set<int> st;
  for (long long i = 0; i < n; i++)
  {

    st.insert(start[i]);
    st.insert(end[i]-1);
    
  }

  int idx = 0;
  map<int,int> mp;
  for(auto it:st){
    mp[it] = idx;
    idx++;
  }

  vector<long long> diff(idx+1,0);
  for (int i = 0; i < n; i++)
  {
    diff[mp[start[i]]]+=cost[i];
    diff[mp[end[i]+1]]-=cost[i];
  }

  for (int i = 1; i <=idx; i++)
  {
    diff[i]+=diff[i-1];
  }
  
  vector<int> a(st.begin(),st.end());
  long long ans = 0;
  for (int i = 1; i < a.size(); i++)
  {
    long long span = a[i]-a[i-1];
    ans+=min(diff[i-1],c)*span;
  }

  cout<<ans<<endl;
}

int main(int argc, char const *argv[])
{
  // CoordinateCompression();
  // SnukePrime();
  return 0;
}

