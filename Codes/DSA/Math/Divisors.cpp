
#include <iostream>

using namespace std;


int main(){

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; i++){
		
		if (n % i == 0){
			cout << i << " ";
			cnt++;
		}
	}	

	cout << "\nTotal divisors of a given number: " << cnt;

	cout <<"\n";
	
	return 0;
}








