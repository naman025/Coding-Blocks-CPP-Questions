/*CHEWBACCA AND NUMBER*/
/*Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format:
The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

Constraints:
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){

        int a = s[i]-48;
        if(a>4){
            a = 9 - a;
        }
        if(!a && !i)continue;
        s[i] = a +'0';
    }
    cout << s << endl;

    return 0;
}
