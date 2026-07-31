#include<bits/stdc++.h>
using namespace std;

struct custom_comp{
  bool operator()(pair<int,int>&a,pair<int,int>& b){
    //On the basis of first value -> min  priority queue
    //On the basis of second value -> max  priority queue
    if (a.first==b.first)
    {
      return a.second<b.second;
    }
    return a.first>b.first;
  }
};

int FindKthLargest(vector<int>& nums,int k){
  priority_queue<int,vector<int>,greater<int>> pq;

  //Top wala chota hua to usko nikal do and nya daal do
  //Store k Element
  for (int i = 0; i < k; i++)
  {
    pq.push(nums[i]);
  }

  for (int i = k; i < nums.size(); i++)
  {
    int elem = nums[i];
    if (pq.top()<elem)
    {
      pq.pop();
      pq.push(elem);
    }

  }

  int ans = pq.top();
  cout<<ans<<endl;
}

/*

I want to check if substring is valid or not => using stack
Maintain a stack push opening Bracket
If Closing bracket pop the Open Bracket 
For A Closing if there is no opening string is not valid


For This Question
//Maintain two stack
one store opening bracket
other one store the last index that is yet to be called
top most value of second stack is storing the index of last bracket that is not matched to 
any other bracket 

for every substring find the largest index which is not matched
to find the length j-idx+1 

*/

int LongestValidparentheses(string s){
  int maxi = INT_MIN;
  int n = s.size();
  stack<int> idx;
  stack<int> st;

  idx.push(-1);
  int i = 0;
  int ans = 0;
  while (i<n)
  {
    if (s[i]=='(')
    {
      st.push('(');
      idx.push(i);
    }else{
      //Closing Bracket
      if (!st.empty())
      {
        st.pop();
        idx.pop();
        ans = max(ans,i-st.top());
      }else{
        idx.push(i);
      }
          
    }
    i++;
  }
  return ans;
}

int main(int argc, char const *argv[])
{
  
  // priority_queue<pair<int,int>,pair<int,int>,custom_comp> pq;
  vector<int> nums{3,2,1,5,6,4,3,9,2};
  int k = 4;
  FindKthLargest(nums,k);
  return 0;
}
