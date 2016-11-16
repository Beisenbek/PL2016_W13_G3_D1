#include <iostream>

using namespace std;

int main(){

	int n = 10;
	int m = 4;

	int a[n][m];


	for(int y = 0 ; y < n; ++y){
		for(int x = 0; x < m; ++x){
			if(x == y || x + y == 6||y - 6 == x){
				a[y][x] = 0;
			}else{
				a[y][x] = 1;
			}
		}
	}


	for(int y = 0 ; y < n; ++y){
		for(int x = 0; x < m; ++x){
			cout << a[y][x] << " ";
		}
		cout << endl;
	} 

	
/*
	6,0
	7,1
 	8,2
 	9,3
*/

	return 0;
}