#include<bits/stdc++.h>
using namespace std;
void Call(){
  int n;cin>>n;
  int k;cin>>k;
  int l;cin>>l;
  int c;cin>>c;
  int d;cin>>d;
  int p;cin>>p;
  int nl;cin>>nl;
  int np;cin>>np;


  int a = (k*l)/nl;
  int b = (c*d);
  int x = p/np;

  int ans = min({a,b,x});
  cout<<ans/n<<endl;
}

int main(int argc, char const *argv[])
{
  Call();
  return 0;
}

// n k l c  d  p  nl np
// 3 4 5 10 8 100 3 1

// 20/3 = 6
// 80/1 = 80
// 100/1 = 100

/*

18/2 = 9
35/1 = 35
8/1= 8
8/2 = 4

20/3 = 6
15


*/