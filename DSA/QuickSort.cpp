#include<iostream>
using namespace std;

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low;

	for (int j = low; j < high; j++){
		if (arr[j] < pivot){
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[high]);
	return i;
} 

void quickSort(int arr[], int low, int high){
	if (low < high){
		int pos = partition(arr, low, high);

		quickSort(arr, low, pos - 1);
		quickSort(arr, pos + 1, high);
	} 
} 


int main()
{
    int arr[] = {12, 90, 1, 45, 11, 18};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
