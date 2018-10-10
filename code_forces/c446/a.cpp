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
	
	ll n , aux , maior=0 , antmaior=0, qtdVol = 0;
	vector<ll> a , b , espaco; 
	cin >> n;
	
	if(n == 2){
		cout << "YES" << endl;
		return 0;
	}

	for(int i = 0 ; i < n ; i++){
		cin >> aux;
		a.pb(aux);
		qtdVol += a[i];
	}

	for(int i = 0 ; i < n ; i++){
		cin >> aux;
		b.pb(aux);
		if(aux >= b[maior]){
			antmaior = maior;
			maior = i;
		}
	}
	//sort(espaco.begin() , espaco.end());
	for(int i = 0 ; i < n ; i++){
		if(b[maior] + b[antmaior] >= qtdVol){
			cout << "YES" <<endl;
			return 0;
		}
	}
	cout << "NO" <<endl;
	return 0;
}

