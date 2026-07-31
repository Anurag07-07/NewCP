#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
int spf[N];
void solve(){
  
  int x,y;cin>>x>>y;
  string s1 = to_string(x);
  string s2 = to_string(y);

  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  set<int> dx,dy;

  do
  {
    if (s1[0]=='0')
    {
     continue; 
    }
    int num = stoi(s1);
    while (num>1)
    {
      dx.insert(spf[num]);
      num/=spf[num];
    }
    
    
  } while (next_permutation(s1.begin(),s1.end()));
  
  do
  {
    if (s2[0]=='0')
    {
     continue; 
    }
    int num = stoi(s2);
    while (num>1)
    {
      dy.insert(spf[num]);
      num/=spf[num];
    }
    
    
  } while (next_permutation(s2.begin(),s2.end()));


  int ans = 1;
  for(auto it:dx){
    if (dy.find(it)!=dy.end())
    {
      ans = it;
    }
    
  }

   cout<<ans<<endl;
}

int main(int argc, char const *argv[])
{

  for (int i = 1; i <N; i++)
  {
    spf[i]=i;
  }

  for (int i = 2; i*i < N; i++)
  {
    if (spf[i]==i)
    {
      for (int j = i*i; j < N; j+=i)
      {
        if (spf[j]==j)
        {
          spf[j] = i;
        }
        
      }
      
    }
    
  }
  
  
  return 0;
}
