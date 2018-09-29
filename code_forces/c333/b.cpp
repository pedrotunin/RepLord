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
	ll n , aux , maiorseq = 0 , maior , menor , sequencia = 0;
	vector<ll> seq;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> aux;
		seq.pb(aux);
	}
	for(int i = 0 ; i < n ; i++){	
		for(int j = i ; j < n ; j++){
			if(j == i){
				maior = seq[i];
				menor = seq[i];
				sequencia += 1;
			}
			else{
				if(seq[j] > maior) maior = seq[j];
				if(seq[j] < menor) menor = seq[j];
				if(maior - menor <= 1){
					sequencia += 1;
					if(sequencia > maiorseq) maiorseq = sequencia;
					continue;
				}
				else break;
			}
		}
		sequencia = 0;
	}
	cout << maiorseq << endl;
    return 0;
}
