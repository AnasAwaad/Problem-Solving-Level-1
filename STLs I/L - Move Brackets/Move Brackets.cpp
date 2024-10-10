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
  int n;
  cin>>n;
  string s;
  cin>>s;

  stack<char> st;
  for(int i=0;i<n;i++){
    if(st.empty()){
      st.push(s[i]);
    }else{
      if(s[i]=='('){
        st.push(s[i]);
      }else{
        if(st.top()=='('){
          st.pop();
        }else{
          st.push(s[i]);
        }
      }
    }
  }

  cout<<st.size()/2<<endl;
}
  

  
  
  


int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // fast_io;
  
  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }
}