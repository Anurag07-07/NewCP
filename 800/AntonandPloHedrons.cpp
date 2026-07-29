#include<bits/stdc++.h>
using namespace std;
int Count(string s){
  if (s=="Tetrahedron")
  {
    return 4;
  }
  else if (s=="Cube")
  {
    return 6;
  }
  else if (s=="Octahedron")
  {
    return 8;
  }
  else if (s=="Dodecahedron")
  {
    return 12;
  }
  else if (s=="Icosahedron")
  {
    return 20;
  }
  
  
}
int main(int argc, char const *argv[])
{
  int n;cin>>n;
  int count = 0;
  while (n--)
  {
    string s;cin>>s;
    count+=Count(s);
  }
  cout<<count<<endl;
  return 0;
}
