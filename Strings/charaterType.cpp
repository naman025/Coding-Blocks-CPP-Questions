/*CHARACTER TYPE*/
/*Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

Input Format:
Character (ch)

Constraints:
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L*/

#include<iostream>
using namespace std;

char returnCase(char ch){
    if(ch >= 'A' and ch <= 'Z')
        return 'U';
    else if(ch >= 'a' and ch <= 'z')
        return 'L';
    else    
        return 'I';
}

int main() {
    char ch;
    cin>>ch;
    cout<<returnCase(ch);
	return 0;
}
