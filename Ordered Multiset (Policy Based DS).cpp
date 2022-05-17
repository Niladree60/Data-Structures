#include <bits/stdc++.h>
#define mod 1000000007 
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
const double pi = acos(-1.0);
/*template <class T> using Ordered_Set = tree<T, null_type, less<T>,
    rb_tree_tag, tree_order_statistics_node_update>;*/
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;
void solve()
{
    ll n,q;
    cin >> n >> q;
    map<ll,ll> r,c;
    ordered_multiset  p;
    p.insert(5);
    p.insert(5);
    p.insert(5);
    p.insert(2);
    p.insert(2);
    p.insert(6);
    p.insert(4);
    cout << p.size() << ' ';
    cout << *p.find_by_order(4) << ' ';
    cout << p.order_of_key(6) << ' ';

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt" , "w" , stdout);
    #endif
    solve(); 
    /*int t;
    cin >> t;
    while(t--)
    {
          
    }*/
    return 0;
}
     
