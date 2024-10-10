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
  int n,m;
  cin>>n>>m;
  deque<pair<int,int>> dq;
  vector<int> nums;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    dq.push_back({i,x});
    nums.push_back(x);
  }

  sort(nums.begin(),nums.end());
  int cnt=0;
  while(true){
    
    if(nums.back() > dq.front().second){
      dq.push_back(dq.front());
      dq.pop_front();
    }else{
      if(dq.front().first==m){
        cnt++;
        cout<<cnt<<endl;
        return;
      }else {
        nums.pop_back();
        dq.pop_front();
        cnt++;
      }
    }
    

  }



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