
#include <iostream>

using namespace std;


void bubbleSort(int arr[],int n){

	// number of passes
	for(int pass = 0; pass < n; pass++){

		// total number of comparision for each pass
		for (int j = 0; j <= n - pass - 1; j++){

			// check if they are correctly placed
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}

		}
		
	}
}



int main(){

	int n = 8;

	int arr [] = {5, 1, 5, 2, 3, 8, 90, 7};

	cout << "Before sorting\n";

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	cout << endl;

	bubbleSort(arr, n);	

	cout << "After sorting\n";

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	cout << "\n";

	return 0;
}








