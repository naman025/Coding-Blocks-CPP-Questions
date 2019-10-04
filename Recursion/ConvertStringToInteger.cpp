/*RECURSION-CONVERT STRING TO INTEGER*/
/*Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

Input Format:
Enter a number in form of a String

Constraints:
None

Output Format
Print the number after converting it into integer

Sample Input
1234

Sample Output
1234*/

#include <bits/stdc++.h>
using namespace std;

int convertToInt(string str){
    if(str.length() == 0){
        return 0;
    }
    char ch = str[0];
    int num = int(ch - '0');
    string ros = str.substr(1);
    num = convertToInt(ros)*10 + num;
    return num;
}

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    for (int i = 0; i < str.length()/2; ++i){
        swap(str[i], str[str.length()-i-1]);
    }
    cout<<convertToInt(str);
    return 0;
}
