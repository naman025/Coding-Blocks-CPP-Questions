/*LOWER UPPER*/
/*Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format:
Single Character .

Constraints:
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid*/

#include<iostream>
using namespace std;

int main() {

    char ch;
    cin>>ch;
    if(ch >= 'A' and ch <= 'Z'){
        cout<<"UPPERCASE"<<endl;
    }else if(ch >= 'a' and ch <= 'z'){
        cout<<"lowercase"<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }

	return 0;
}
