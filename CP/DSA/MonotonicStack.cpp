#include<bits/stdc++.h>
using namespace std;

/*
Next Greater Element 
Jab Tak chote hai dalte jao index ke saath 
and jaise hi top se bda element mile top ke index par store karo 
ki next greater kon hoga and pop kardo top ko jab tak chote aa rahe hai


Next Greater Element IV
Stack1
Store the Index of Element that has not got its first greater towards right
Stack 2
Index of the those element that has its greater element towards right and are looking for SNGR

4 2 1 3 6 4 2
-1-1-1-1-1-1-1

Store 4 2 1 
3 is the Next Greater for 1 and 2
We have to store 1 2 into  new temp stack and after that store it into 
stack2 beacuse when we pop up from s1 we want that element order must maintain
*/
vector<int> SecondGreaterElement(vector<int>& nums){
  int n = nums.size();
  vector<int> sngr(n,-1);
  stack<int> s1,s2;
  for (int i = 0; i < n; i++)
  {
    while (!s2.empty()&&nums[i]>nums[s2.top()])
    {
      sngr[s2.top()] = nums[i];
      s2.pop();
    }

    stack<int> temp;
    while (!s1.empty()&&nums[i]>nums[s1.top()])
    {
      temp.push(s1.top());
      s1.pop();
    }

    while (!temp.empty())
    {
      s2.push(temp.top());
      temp.pop();
    }

    s1.push(i);
    
  }
  return sngr;  
}

//Maximum Histogram
//Maximal Rectangle
//Merge K Sorted Array

int main(int argc, char const *argv[])
{

  vector<int> nums{2,4,0,9,6};
  SecondGreaterElement(nums);
  return 0;
}

