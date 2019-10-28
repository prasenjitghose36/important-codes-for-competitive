// res=(a^b)mod m
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long m =1e9+7;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
main()
{
	ll b,e;
	cin>>b>>e;
	cout<<binpow(b,e,m);
}

