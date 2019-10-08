/*BROKEN CALCULATOR*/
/*Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format:
a single lined integer N

Constraints:
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    if(n < 0){
        return 0;
    }
    int fact[1000] = {0};
    fact[0] = 1;
    int len = 1;
    int i, j;
    int carry = 0;
    for(i = 2; i <= n; i++){

        for(j = 0; j < len; j++){
            fact[j] = (fact[j]*i) + carry;
            carry = fact[j]/10;
            fact[j] %= 10;
        }
        while(carry){
            fact[len] = carry%10;            
            len++;
            carry /= 10;
        }
        
    }
    for(j = len-1; j >= 0; j--){
        cout<<fact[j];
    }
    
    return 0;
}
