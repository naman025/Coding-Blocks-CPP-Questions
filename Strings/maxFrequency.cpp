/*STRINGS-MAX FREQUENCY CHARACTER*/
/*Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a*/

#include<bits/stdc++.h>
using namespace std;

char returnMaxFrequency(string str){
	int arr[26] = {0};
	int len = str.length();
	for(int i = 0; i < len; i++){
		int x = int(str[i] - 'a');
		arr[x]++;
	}
	char max = 'a';
	int largest = 0;
	for(int i = 0; i < 26; i++){
		if(largest < arr[i]){
			largest = arr[i];
			max = char(i) + 'a';
		}
	}
	return max;
}

int main() {
	string str;
	cin>>str;
	cout<<returnMaxFrequency(str);
	return 0;
}
