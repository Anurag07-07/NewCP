#include<bits/stdc++.h>
using namespace std;

/*

Brute Force 

Use Three Loop and Find all the Pair 
Take XOR of Them and store it inside the set 
Return the Set Size


Optimal 

We Know that a^b = 0 if a = b
what we also know is  a^b^c = (a^b)^c
First find the Xor of pairs  and store it somewhere 

But the Main Question is what is the size of array 
where we will store the ans 

basically it is given in the question that nums[i]<=1500

so XOR will perform on bit level 
If I have two element suppose 1500 and 1500 and now we take a xor
of both of the what is the value we get 0

Now what is the maximum value we can generate using xor of two numbers
it is total depend what how many bits we can take 

we know that 1500 has bits arround 2^11

What is the Maximum Number we can generate using 11 bits by Taking Xor
So maximum Number that can generate by taking xor of two numbers who has 11 bits 
is 2048 when
one number has all ones and one has all zeroes 
because 1^0 = 1 and 0^0 = 0 and 1^1 = 0


we create an array where index can be treated as  xor of two number
and we will override if xor comes multiple number of times
because it is given in the question that we need unique xor


After that i am only left with single element from a triplet
so what i will do is traverse over the element and take 
xor with each of the result from twox array because it will store 
all the Unique xor


And After find Xor we know taht we get same xor multiple number of times 
So For that we can create Another Array where we will Store Ans of Xor Triplet

*/

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        vector<int> twox(2048,0);
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            twox[nums[i]^nums[j]] = 1;
          }
          
        }
        vector<int> ans(2048,0);
        for (int i = 0; i < nums.size(); i++)
        {
          for(int j = 0;j<twox.size();j++){
            if(twox[j]==1)
              ans[nums[i]^j] = 1;
          }
        }


        int count = 0;
        for (int i = 0; i < ans.size(); i++)
        {
          if(ans[i]==1) count++;
        }
        

        return count;
    }
};


// 6 6
// 6 7
// 110
// 111
// 1
// 6 8
// 1000
// 0110
// 1110
// 13
// 6 9
// 1001
// 0110
// 1111
// 15



// 6 7 8 9 

// a^b^c = (a^b)^c

int main(int argc, char const *argv[])
{
  Solution s;
  vector<int> nums{6,7,8,9};
  s.uniqueXorTriplets(nums);
  return 0;
}


// 1500 = 2^11 = 

// 10 = 1100
// 11 = 1101