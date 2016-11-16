#include <iostream>

using namespace std;

int main(){

	int n;
	int m;

	cin >> n >> m;

	int x;

	int winner_value = -1;
	int winner_row = -1;
	int winner_column = -1;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> x;
			if(winner_value < x){
				winner_value = x;
				winner_row = i;
				winner_column = j;
			}
		}
	}

	printf("%i\n%i %i",winner_value,winner_row, winner_column );

	return 0;
}