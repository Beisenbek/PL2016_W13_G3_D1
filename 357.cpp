#include <iostream>

using namespace std;

int main(){

	int n;
	int m;

	cin >> n >> m;

	int a[n][m];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}

	int winner_value = -1;

	for(int i = 0; i < n; ++i){
		int max_value = a[i][0];
		for(int j = 1; j < m; ++j){
			if(max_value < a[i][j]){
				max_value = a[i][j];
			}
		}
		
		if(max_value > winner_value){
			winner_value = max_value;
		}
	}

	cout << winner_value << endl;

	bool found = false;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(a[i][j] == winner_value){
				cout << i << " " << j << endl;
				found = true;
				break;
			}
		}

		if(found) break;
	}

	return 0;
}