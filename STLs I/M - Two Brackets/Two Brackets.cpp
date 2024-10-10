#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <math.h>
#include <list>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);





void solve()
{
  string s;
  cin>>s;

  stack<char> st1;
  stack<char> st2;
  int cnt=0;
  
  for(int i=0;i<s.size();i++){
    
      if(s[i]=='('){
        st1.push(s[i]);
      }else if(s[i]==')'){
        if(!st1.empty()&& st1.top()=='('){
          cnt++;
          st1.pop();
        }else{
          st1.push(s[i]);
        }
      }else if(s[i]=='['){
        st2.push(s[i]);
      }else if(s[i]==']'){
        if( !st2.empty()&& st2.top()=='['){
          cnt++;
          st2.pop();
        }else{
          st2.push(s[i]);
        }
      }
    
  }
  

  cout<<cnt<<endl;
}
  

  
  
  


int main()
{

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  // fast_io;
  
  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }
}