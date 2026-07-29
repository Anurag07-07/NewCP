#include<bits/stdc++.h>
using namespace std;
void Closest(){
  int n,m;cin>>n>>m;
  // int start = n-m;
  // int end = n+m;
  // int ans = INT_MAX;
  // int value = -1;
  // bool neg = false;
  // for (int i = start; i <=end ; i++)
  // {
  //   if (i%m==0)
  //   {
  //     if (abs(n-i)<ans)
  //     {
  //       ans = abs(n-i);
  //       value = abs(i);
  //     }else if (abs(n-i)==ans)
  //     {
  //       if (i<0)
  //       {
  //         neg = true;
  //       }
        
  //       value = max(value,abs(i));
  //     }
  //   }
    
  // }
  // if(neg){
  //   cout<<ans<<" "<<-1*value<<endl;
  //   return;
  // }

  // cout<<ans<<" "<<value<<endl;
}


//Optimal way 

void OptimalClosest(){
  int n;cin>>n;
  int m;cin>>m;
  int q = n/m;
  int n1 = q*m;
  int n2 = n*m > 0 ? m*(q+1) : m*(q-1);
  
  if (abs(n-n1)<abs(n-n2))
  {
    cout<<n1<<endl;
    return;
  }
  cout<<n2<<endl;
}
//Find the closest value smaller than n

int main(int argc, char const *argv[])
{
  Closest(); 
  return 0;
}
