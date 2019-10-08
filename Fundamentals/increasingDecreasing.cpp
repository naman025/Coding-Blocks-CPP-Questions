/*INCREASING DECREASING SEQUENCE*/
/*Take the following as input.

A number (N)
Take N more numerical inputs
The N inputs for a sequence S = s1, s2, .., sN. Compute if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format:
Constraints:
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true*/

#include<iostream>
using namespace std;
int main() {
    int n,i;
    bool flag=true;
    cin>>n;
    int seq[n],j=0;
    for(i=0;i<n;i++)
        cin>>seq[i];
    for(i=0;i<n;i++){
        if(seq[i]==seq[i+1]){
            flag=false;
        }
    }
    i=0;
    while(seq[i]>seq[i+1]){
            j++;
            i++;
    }
    
    for(i=j+1;i<n;i++){
        if(seq[i]<seq[i-1]){
            flag=false;
            break;
        }
    }
    cout<<(flag?"true":"false");
}
