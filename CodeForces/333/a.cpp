#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define sec second
#define fori(i, a, b) for(int i = int(a); i < int(b); i++)
#define cc(x)	cout << #x << " = " << x << endl
#define ok		cout << "ok" << endl

typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
 
int main(){
    ios_base::sync_with_stdio(false);
	ll n , bx , m , by , aux , basex = 1 , basey = 1 , resx = 0 , resy = 0;
	vector<ll> x , y;
	cin >> n >> bx;
	for(int i = 0 ; i < n ; i++){
		cin >> aux;
		x.pb(aux);
	}
	cin >> m >> by;
	for(int i = 0 ; i < m ; i++){
		cin >> aux;
		y.pb(aux);
	}
	for(int i = n - 1 ; i >= 0  ; i--){
		resx += x[i] * basex;
		basex *= bx;
	}
	for(int i = m - 1 ; i >= 0 ; i--){
		resy += y[i] * basey;
		basey *= by;
	}
	//cout << resx << " " << resy << endl;
	
	if(resx == resy) cout << "=" << endl;
	else if(resx > resy) cout << ">" << endl;
	else cout << "<" << endl;

    return 0;
}

