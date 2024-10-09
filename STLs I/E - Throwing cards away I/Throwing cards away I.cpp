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
  
  int m, n;
    while (1)
    {
        vector<int> cards;
        cin >> n;
        if (!n)
            break;
        for (int i = 1; i <= n; i++)
            cards.push_back(i);

        cout << "Discarded cards:";
        while (cards.size() >= 2)
        {
            int a = cards.front();
            cards.erase(cards.begin());
            cout << " " << a;
            if (cards.size() != 1)
                cout << ",";
            int b = cards.front();
            cards.push_back(b);
            cards.erase(cards.begin());
        }
        cout << "\nRemaining card: ";
        cout << cards.front() << endl;
    }
  }
  

  
  
  


int main()
{

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif

  
  int t = 1;
  // cin >> t;

  while (t--)
  {
    solve();
  }
}