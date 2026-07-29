#include<bits/stdc++.h>
using namespace std;
void Consecutive(){
  int n;cin>>n;
  for (int i = 1; i <= n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += j;
      if (sum==n)
      {
        cout<<"True"<<endl;
        return;
      }
      if (sum>n)
      {
        break;
      }
    }
  }

  cout<<"False"<<endl;  

}
int main(int argc, char const *argv[])
{
  Consecutive();
  return 0;
}
