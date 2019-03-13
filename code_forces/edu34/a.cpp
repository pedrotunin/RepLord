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
	
	int n, frangos;
	cin >> n;
	
	for(int c = 0 ; c < n ; c++){
		
		bool p = false;
		cin >> frangos;
		
		if(frangos % 3 == 0 || frangos % 7 == 0){
			cout << "YES" << endl;
			continue;
		}

		for(int fp = 0; fp <= frangos; fp++){
			
			for(int fg = 0; fg <= frangos; fg++){
				
				if(fp*3 + fg*7 == frangos){
					
					cout << "YES" << endl;
					p = true;
					break;
				}
			}
			
			if(p) break;
		}
		
		if(!p) cout << "NO" << endl;
	}

	return 0;
}


