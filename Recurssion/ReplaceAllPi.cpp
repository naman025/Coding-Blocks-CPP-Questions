/*REPLACE ALL Π*/
/*Replace all occurrences of pi with 3.14

Input Format:
Integer N, no of lines with one string per line

Constraints:
0 < N < 1000 0 <= len(str) < 1000

Output Format
Output result one per line

Sample Input
3
xpix
xabpixx3.15x
xpipippixx


Sample Output
x3.14x
xab3.14xx3.15x
x3.143.14p3.14xx*/

#include <bits/stdc++.h>
using namespace std;

string replaceAllPi(string str){
	if(str.length() == 0){
		return "";
	}
	char ch = str[0];
	string ros = str.substr(1);
	string result = replaceAllPi(ros);
	if(ch == 'p' and result[0] == 'i'){
		return "3.14" + result.substr(1);
	}
	else{
		return (ch + result);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n){
		string str;
		cin>>str;
		cout<<replaceAllPi(str)<<endl;
		n--;

	}
	return 0;
}
