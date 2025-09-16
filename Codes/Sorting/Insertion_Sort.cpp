
#include <iostream>

using namespace std;


void insertionSort(int arr[],int n){

	for (int i = 1; i < n; i++){

        int ans = arr[i];
        int index = i - 1;

        while (index >= 0 && arr[index] > ans){
            arr[index + 1] = arr[index];
            index--;
        }

        arr[index + 1] = ans;
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

	insertionSort(arr, n);	

	cout << "After sorting\n";

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	cout << "\n";

	return 0;
}








