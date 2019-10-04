/*RECURSION-DUPLICATE CHARACTER FORMATTING*/
/*Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

Input Format:
Enter a String

Constraints:
None

Output Format
Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

Sample Input
hello

Sample Output
hel*lo
*/

#include <iostream>
using namespace std;

string insert(string str){
    if(str.length()==0){
        return "";
    }
    string ch = "*";
    string ros = str.substr(1);
    string result = insert(ros);
    if(str[0] == result[0]){
        return (str[0] + ch + result);
    }
    else
        return str[0] + result;


}

int main(){
    string str;
    cin>>str;
    cout<<insert(str);
    return 0;
}
