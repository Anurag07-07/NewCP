#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n,m;cin>>n>>m;
  bool flag = true;
  for (int i = 1; i <=n; i++)
  {
    if (i%2==0 && flag)
    {
      for (int j = 1; j <= m-1; j++)
      {
        cout<<'.';
      }
      cout<<'#';
      flag = false;
    }else if (i%2==0 && !flag)
    {
      cout<<'#';
      for (int j = 2; j <= m; j++)
      {
        cout<<'.';
      }
      flag = true;
    }else{
      for (int j = 1; j <= m; j++)
      {
        cout<<'#';
      }
    }
    cout<<endl;
  }
  
  return 0;
}
