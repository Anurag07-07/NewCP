#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {

      if (n==1) return 1;      

      while (n%2==0) n = n/2;
      while (n%3==0) n = n/3;
      while (n%5==0) n = n/5;

      if (n) return false;
      
      return true;
    }
};

int main(int argc, char const *argv[])
{
  return 0;
}
