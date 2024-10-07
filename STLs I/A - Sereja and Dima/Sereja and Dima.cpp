#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <math.h>
using namespace std;
#define ll long long



void solve()
{
  int n;
  cin>>n;
  deque<int> dq;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    dq.push_back(x);
  }
  int sum1=0,sum2=0,flag=0;
  while(!dq.empty()){
    int val=0;
    if(dq.back() > dq.front()){
      val=dq.back();
      dq.pop_back();
    }else{
      val=dq.front();
      dq.pop_front();
    }
    if(flag==0){
      sum1+=val;
    }else{
      sum2+=val;
    }
    flag=!flag;
    
  }

  cout<<sum1<<" "<<sum2;
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