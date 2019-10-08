/*STRING COMPRESSION*/
/*Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format:
A single String S

Constraints:
1 < = length of String < = 100

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1*/

#include <bits/stdc++.h>
using namespace std;

void compressString(char str[]){
    for(int i = 0; i < strlen(str); i++){
        static int count = 1;
        if(str[i] == str[i+1]){
            count++;
        }
        else{
            cout<<str[i]<<count;
            count = 1;
        }
    }
}
