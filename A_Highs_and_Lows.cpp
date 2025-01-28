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
 cin >> t;
  for(int qwe = 0; qwe < t; qwe++) {
    cin >> n;
    for(int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << arr[n-1] + arr[n-2]-arr[1]-arr[0] << endl;
  }
}
