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
	int n , aux , cont;
	vector<int> l;
	cin >> n;
	int m[n+10];
	memset(m , 0 , sizeof m);
	cont = n;
	for(int i = 0 ; i < n ; i++){
		cin >> aux;
		l.pb(aux);
	}
	for(int i = n-1 ; i >= 0 ; i--){
		if(i == 0) break;
		if(l[i] == 0) continue;
		for(int j = i-1 ; j >= 0 ; j--){
			if(!(j < i && j >= i - l[i])){
				break;
			} 
			if(m[j] != 1){ 
				m[j] = 1;
				cont--;
			}	
		}
	}
	cout << cont << endl;
	return 0;
}

