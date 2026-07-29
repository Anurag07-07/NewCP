#include<bits/stdc++.h>
using namespace std;
void Func1(){
  int k;cin>>k;
  vector<pair<int,int>> nums(k);
  for (int i = 0; i < k; i++)
  {
    int n,m;cin>>n>>m;
    nums[i] = make_pair(n,m);
  }
  
  int count = 0;
  for (int i = 0; i < k; i++)
  {
    for (int j = i+1; j < k; j++)
    {
      int homejersey1 = nums[i].first;
      int awayjersey1 = nums[j].second;
      if (homejersey1==awayjersey1)
      {
        count++;
      }

      int homejersey2 = nums[j].first;
      int awayjersey2 = nums[i].second;
      if (homejersey2==awayjersey2)
      {
        count++;
      }
    }
    
  }

  cout<<count<<endl;
  
}
int main(int argc, char const *argv[])
{
    Func1();
  return 0;
}
