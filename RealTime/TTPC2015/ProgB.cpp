#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define INF 1<<30
#define MP make_pair
#define mp make_pair
#define pb push_back
#define PB push_back
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout.precision(16);

  int N, B, C;
  cin >> N >> B >> C;

  if(B == 0 or C == 0) {
      cout << "0" << endl;
      return 0;
  }

  int A[N];
  REP(i, N) cin >> A[i];

  int res = 0;
  int idx = N-1;
  while(C >= 0 && idx >= 0) {
      if(C - B < 0) {
          res += C * A[idx];
          break;
      }
      res += B * A[idx];
      C -= B;
      idx--;
  }

  cout << res << endl;
  return 0;
}
