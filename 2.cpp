#include <iostream>

using namespace std;

int main(){

	int n = 20;
	int m = 8;

	int a[n][m];

	int d[] = {0, 1, 2, 3};

	for(int y = 0 ; y < n; ++y){
		for(int x = 0; x < m; ++x){
			a[y][x] = 1;
		}
	}

	int ind = 0;
	int k = 1;

	for(int y = 0 ; y < n; ++y){

			a[y][ind] = 0;

			if(ind + k == m){
				k = -1;
			}else if(ind + k == -1){
				k = 1;
			}

			ind = ind + k;
	}

	cout << endl;

	for(int y = 0 ; y < n; ++y){
		for(int x = 0; x < m; ++x){
			cout << a[y][x] << " ";
		}
		cout << endl;
	} 

	
	return 0;
}