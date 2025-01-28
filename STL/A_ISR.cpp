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
using namespace std;
using ll = long long;
ll t,k,a,b,l,r,c,q,m,n,d,x,y,z;
string s;
ll arr[300001];
ll pre[300001];


int main() {
 t=1;
  for(int qwe = 0; qwe < t; qwe++) {
    cin >> n;
    for(int i = 0; i < n; i++) {
    cin >> arr[i];
    if(i==0) pre[i]=arr[i];
    else pre[i]=pre[i-1]+arr[i];
    }
    ll mins = 0;
    ll maxs = INT_MIN;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
    mins = min(mins,pre[i]);
    maxs = max(maxs,pre[i]);
    ans = max(ans,maxs-mins);
    }
    cout << ans << endl;
  }
}