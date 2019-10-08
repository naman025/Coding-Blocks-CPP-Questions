/*IS ARMSTRONG NUMBER*/
/*Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where armstrong number is defined as follows

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
Print the value returned.

Input Format:
Integer

Constraints:
0 < N < 1000000000

Output Format
Boolean

Sample Input
371
Sample Output
true*/

#include<iostream>
#include<math.h>
using namespace std;

bool returnArmstron(int N){
	int sum = 0;
	int n = N;
	while(n){
		sum+=pow((n%10),3);
		n/=10;
	}
	if(sum==N){
		return true;
	}else{
		return false;
	}
}

int main() {
	int N;
	cin>>N;
	cout<<(returnArmstron(N)?"true":"false");
	return 0;
}
