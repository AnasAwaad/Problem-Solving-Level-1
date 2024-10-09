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



void solve()
{
  int n;
  cin>>n;
  deque<int> dq;

  int flag=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(!flag)
      dq.push_back(x);
    else
      dq.push_front(x);
    flag=!flag;
  }

  
    while(!dq.empty()){
      if(flag){
        cout<<dq.back()<<" ";
        dq.pop_back();
      }else{
        cout<<dq.front()<<" ";
        dq.pop_front();
      }
    }
  
  


  


  
}
  

  
  
  


int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  
  int t = 1;
  // cin >> t;

  while (t--)
  {
    solve();
  }
}