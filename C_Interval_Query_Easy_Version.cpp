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
ll arr[300001];
ll pre[300001];


int main() {
t=1;
  for(int qwe = 0; qwe < t; qwe++) {
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
    for(int j = prevl+1; j <= l; j++) {
    s.insert(arr[j]);
    }
    for(int j = prevr+1; j <= r; j++) {
    auto it = s.find(arr[j]);
    s.erase(it);
    }
    cout << *s.rbegin() << endl;
    prevl = l;
    prevr = r;
    }
  }
}
