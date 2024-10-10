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

deque<int> q;
int flag=1;


void solve()
{
  string s;
  cin>>s;
  if(s=="toFront"){
    int x;
    cin>>x;
    if(flag)
      q.push_front(x);
    else
      q.push_back(x);
  }else if(s=="back"){
    if(q.empty()){
      cout<<"No job for Ada?"<<endl;
    }else{
      if(flag){
        cout<<q.back()<<endl;
        q.pop_back();
      }else{
        cout<<q.front()<<endl;
        q.pop_front();
      }
    }
  }else if(s=="front"){
    if(q.empty()){
      cout<<"No job for Ada?"<<endl;
    }else{
      if(flag){
        cout<<q.front()<<endl;
        q.pop_front();
      }else{
        cout<<q.back()<<endl;
        q.pop_back();
      }
    }
  }else if(s=="push_back"){
    int x;
    cin>>x;
    if(flag)
      q.push_back(x);
    else
      q.push_front(x);
  }else{
    flag=!flag;
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