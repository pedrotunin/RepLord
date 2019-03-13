#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define sec second
#define endl '\n'

typedef long long ll;
const double PI = acos(-1.0);

int main(){
	ios_base::sync_with_stdio(false);
	
	int h1, a1, c1, h2, a2, cont = 0;
	vector<bool> v; // 1 = atacar; 0 = curar
	cin >> h1 >> a1 >> c1 >> h2 >> a2;

	do{
		if(a1 >= h2){
			
			v.push_back(1);
			h2 -= a1;
			if(h2 <= 0){
			
				cont++;
				break;
			}

		}
		else if(h1 <= a2){
			
			v.push_back(0);
			h1 += c1;
		}
		else if(h1 - a2 > 0){
			
			v.push_back(1);
			h2 -= a1;
			if(h2 <= 0){
	
				cont++;
				break;
			}
		}

		h1 -= a2;
		cont++;

	}while(h2 > 0);

	cout << cont << endl;
	
	for(int i = 0; i < v.size(); i ++){
		
		if (v[i] == 0) cout << "HEAL" << endl;
		else cout << "STRIKE" << endl;
	}


	return 0;
}


