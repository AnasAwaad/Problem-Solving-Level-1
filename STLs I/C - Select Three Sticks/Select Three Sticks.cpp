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
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());

  vector<int> res;
  for(int i=1;i<n;i++){
    res.push_back(v[i]-v[i-1]);
  }
  int mn=INT_MAX;
  for(int i=1;i<res.size();i++){
    mn=min(mn,res[i]+res[i-1]);
  }
  cout<<mn<<endl;
 


}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  
  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }
}