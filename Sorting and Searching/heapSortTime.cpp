#include <bits/stdc++.h>
using namespace std; 
 
void heapify(int a[], int n, int i) { 
 
	int largest = i; 
	int left = 2*i + 1; 
	int right = 2*i + 2; 
 
	if (left < n && a[left] > a[largest]) 
		largest = left; 
 
	if (right < n && a[right] > a[largest]) 
		largest = right; 
 
	if (largest != i) { 
		swap(a[i], a[largest]); 
		heapify(a, n, largest); 
	} 
} 
 
void heapSort(int a[], int n) { 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(a, n, i); 
 
	for (int i=n-1; i>0; i--) { 
		swap(a[0], a[i]); 
		heapify(a, i, 0); 
	} 
}
 
int main() { 
 
	int a[10000];
	int n = 10000;
	for(int i=0; i<n; i++) {
		a[i] = rand()%100;
	}
 
	clock_t start, end; 
	start = clock();
	heapSort(a, n); 
	end = clock(); 
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0;
} 
