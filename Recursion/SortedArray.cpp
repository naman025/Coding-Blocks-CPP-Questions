/*Sorted Array*/
/*Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted, and false otherwise.

Input Format:
N x y z

Constraints:
1 < N < 1000
-10^9 < i < 10^9, where i is an element of the array

Output Format
true OR false

Sample Input
5
1 2 3 4 5

Sample Output
true*/

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size, int ptr){
	if(ptr == size - 1){
			return true;
	}

	bool rest_of_the_array = isSorted(arr, size, ptr+1);
	if(rest_of_the_array and arr[ptr] <= arr[ptr + 1]){
		return true;
	}
	else
		return false;
}

int main(int argc, char const *argv[])
{
	int size;
	cin>>size;
	int arr[size];
	for(int i  = 0 ; i < size; i++){
		cin>>arr[i];
	}
	if(isSorted(arr, size , 0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
