#include <iostream>
#include <cstdio>
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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    int depth = 0;
    for(ll t = n; t > 0; t /= 2)  depth++;

    ll temp = 1;
    int turn = 0;
    if(depth % 2 == 0) {
        while(temp <= n) {
            temp = turn++ % 2 == 0 ? temp * 2: temp * 2 + 1;
        }
    } else {
        while(temp <= n) {
            temp = turn++ % 2 == 0 ? temp * 2 + 1: temp * 2;
        }
    }

    cout << (turn % 2 == 0 ? "Takahashi" : "Aoki") << endl;

    return 0;
}
