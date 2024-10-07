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
  vector<int> odd;
  vector<int> even;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    if(x&1)
      odd.push_back(x);
    else
      even.push_back(x);
  }

  for(int i=1;i<even.size();i++){
    if(even[i]<even[i-1])
    {
      cout<<"No"<<endl;
      return;
    }
  }

   for(int i=1;i<odd.size();i++){
    if(odd[i]<odd[i-1])
    {
      cout<<"No"<<endl;
      return;
    }
  }

  cout<<"Yes"<<endl;
 


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