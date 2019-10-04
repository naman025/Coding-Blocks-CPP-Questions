/*STRINGS-REMOVE DUPLICATES*/
/*Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba

Sample Output
abcba*/

#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string str){
    if(str.length() == 0){
        return "";
    }
    char ch = str[0];
    string ros = str.substr(1);
    string result = removeDuplicates(ros);
    if(ch == result[0]){
        return result;
    }
    else{
        return (ch + result);
    }
}

int main() {
    string str;
    cin>>str;
    cout<<removeDuplicates(str)<<endl;
	return 0;
}
