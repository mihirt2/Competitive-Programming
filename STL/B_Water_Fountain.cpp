#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <set>
#include <climits>
#include<iomanip>
using namespace std;
using ll = long long;
ll t,k,a,b,l,r,c,q,m,n,d,x,y,z;
string s;
ll arr[1000001];
ll pre[1000001];


int main() {
 ios::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 t=1;
  for(int qwe = 0; qwe < t; qwe++) {
    cin >> n;
    priority_queue<pair<ll,ll>> pq;
    for(int i = 0; i < n; i++) {
    cin >> arr[i];
    pre[i]=-1;
    }
    pq.push({-arr[0],0});
    for(int i = 1; i < n; i++) {
    while(abs(pq.top().first) < arr[i]&&pq.size() > 0) {
        pre[pq.top().second] = i+1;
        pq.pop();
    }
    pq.push({-arr[i],i});
    }
    for(int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
  }
}