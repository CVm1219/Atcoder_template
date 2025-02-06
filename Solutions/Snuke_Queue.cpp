#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <iomanip>
#include <functional>

using namespace std;
using l = long long;
using ul = unsigned long long;

const int inf =  2147483647;         // 2e9     1 << 30
const l INF = 9223372036854775807;  // 9e18    1LL << 60

#define r(i, n) for (l i = 0; i < n; ++i)
#define r1(i, n) for (l i = 1; i < n; ++i)
#define r0(i) for (l i = -1; i < 2; ++i)
#define pll pair<l, l>


int main() {
    l Q;cin>>Q;

    vector<l> q(1);


    l head=0;

    r(_, Q) {

        l n;cin>>n;

        if (n==1) {
            l m;cin>>m;

            q.push_back(m+q[q.size()-1]);
        } else if (n==2) {
            head++;
        } else {
            l k;cin>>k;

            cout<<q[k+head-1]-q[head]<<endl;
        }
    }
}