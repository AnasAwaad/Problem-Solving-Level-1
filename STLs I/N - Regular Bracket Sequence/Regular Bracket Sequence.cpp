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
  
  if( s[0]!=')' && s[s.size()-1]!='(' && s.size()%2==0){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
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