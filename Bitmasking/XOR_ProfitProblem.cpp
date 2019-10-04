/*XOR PROFIT PROBLEM*/
/*We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

Input Format:
We are given two integers x and y

Constraints:
l <= r <= 1000

Output Format
Print the maximum value of a XOR b

Sample Input
5
6
Sample Output
3*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cin>>x>>y;
    int g_xor = 0;
    for(int i = x; i < y; i++){
        for(int j = i+1; j <= y; j++){
            int Xor = i;         
            Xor = Xor ^ j;
            if(Xor > g_xor)
                g_xor = Xor;
        }
    }
    cout<<g_xor;
    return 0;
}
