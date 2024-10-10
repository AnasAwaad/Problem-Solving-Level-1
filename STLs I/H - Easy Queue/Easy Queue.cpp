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
  
  queue<int> q;

  int n,num;
  scanf("%d",&n);

  while(n--){
    scanf("%d",&num);
    if(num==1){
      int x;
      scanf("%d",&x);
      q.push(x);
    }else if(num==2){
      if(!q.empty())
        q.pop();
    }else if(num==3){
      if(q.empty())
        printf("Empty!\n");
      else
        printf("%d\n",q.front());
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
  // cin >> t;

  while (t--)
  {
    solve();
  }
}