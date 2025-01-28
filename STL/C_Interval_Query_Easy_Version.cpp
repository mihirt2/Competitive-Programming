#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <set>
#include <climits>
#include<iomanip>
#include <queue>
using namespace std;
using ll = long long;
ll t,k,a,b,l,r,c,q,m,n,d,x,y,z;
ll arr[1000001];
ll pre[1000001];


int main() {
t=1;
  for(int qwe = 0; qwe < t; qwe++) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    multiset<int> s;
    cin >> l >> r;
    l--;
    r--;
    for(int i = l; i <= r; i++) {
      s.insert(arr[i]);
    }
    cout << *s.rbegin() << endl;
    ll prevl = l;
    ll prevr = r;
    for(int i = 1; i < k; i++) {
    cin >> l >> r;
    l--;
    r--;
    for(int j = prevl; j < l; j++) {
    auto it = s.find(arr[j]);
    s.erase(it);
    }
    for(int j = prevr+1; j <= r; j++) {
    s.insert(arr[j]);
    }
    cout << *s.rbegin() << endl;
    prevl = l;
    prevr = r;
    }
  }
}