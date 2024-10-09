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
  int n,m;
  cin>>n>>m;
  vector<pair<int,int>> v;
  int arr[55]={0};
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(!arr[x]){
      v.push_back(make_pair(x,i+1));
      arr[x]=i+1;
    }
  }

  while(m--){
    int q;
    cin>>q;
    int cnt=0;
    for(int i=0;i<v.size();i++){
      if(v[i].first==q){
        cout<<v[i].second<<" ";
        cnt=i;
        break;
      }
    }

    v[cnt].second=1;
    for(int i=cnt;i>0;i--){
      v[i-1].second++;
      
      swap(v[i].first,v[i-1].first);
      swap(v[i].second,v[i-1].second);
      
    }

  }
  // 4 1 2 3 1 3 1



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