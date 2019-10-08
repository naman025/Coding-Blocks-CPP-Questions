/*MAXIMUM SUBARRAY SUM*/
/*You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

Input Format:
The first line consists of number of test cases T. Each test case consists of N followed by N integers.

Constraints:
1 <= N <= 100000

1 <= t <= 20

-100000000 <= A[i] <= 100000000

Output Format
The maximum subarray sum

Sample Input
2
4
1 2 3 4
3
-10 5 10
Sample Output
10
15*/

#include<iostream>
using namespace std;

int maxSum(int arr[],int n){

	int ms,g_max;
	ms = g_max = arr[0];

	for(int i=1;i < n;i++){
        int a = arr[i];
		ms = max(ms + a,a);

		if(ms > g_max){
			g_max = ms;
		}
	}

	return g_max;
}

int main() {
	
	int test;
	cin>>test;

	while(test){
		int n;
		cin>>n;
        int arr[n];
		for(int i = 0; i < n; i++)
			cin>>arr[i];
		cout<<maxSum(arr, n)<<endl;
		test--;
	}

	return 0;
}
