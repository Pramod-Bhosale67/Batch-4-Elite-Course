
#include <iostream>

using namespace std;


void selectionSort(int arr[],int n){

	 for (int i = 0; i < n; i++) {

            int ans = arr[i];
            int index = i;

            for (int j = i + 1; j < n; j++) {

                if (arr[j] < ans) {
                    ans = arr[j];
                    index = j;
                }
            }

            swap(arr, index, i);
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

	selectionSort(arr, n);	

	cout << "After sorting\n";

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	cout << "\n";

	return 0;
}








