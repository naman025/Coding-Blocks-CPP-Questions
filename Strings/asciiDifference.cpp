/*STRINGS-DIFFERENCE IN ASCII CODES*/
/*Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format:
String

Constraints:
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b*/

#include<iostream>
using namespace std;

int returnDiff(char a, char b){
    return b-a;
}
int main() {
    string str;
    cin>>str;

    for(int i = 0; i < str.length(); i++){
        cout<<str[i];
        if(i == str.length() - 1)
            break;
        cout<<returnDiff(str[i], str[i+1]);
    }
	return 0;
}
