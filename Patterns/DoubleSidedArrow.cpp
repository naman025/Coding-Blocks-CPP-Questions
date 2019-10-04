/*PATTERN DOUBLESIDEDARROW*/
/*Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
Input Format:
Take N as input.

Constraints:
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1
*/           

#include<iostream>
using namespace std;

int main() {
	
    int N;
    cin>>N;
    int n = N/2 + 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=2*(n-i); j++)
            cout<<"  ";
        for(int j = i; j >= 1; j--)
            cout<<j<<" ";
        for(int j = 1; j <= 2*(i-1)-1; j++)
            cout<<"  ";
        for(int j = 1; j <= i; j++){
            if(i == 1)
                continue;
            cout<<j<<" ";
        }
        cout<<endl;   
    }
    for(int i = n-1; i >=1; i--){
        for(int j = 1; j <= 2*(n-i); j++)
            cout<<"  ";
        for(int j = i; j >= 1; j--)
            cout<<j<<" ";
        for(int j = 1; j <= 2*(i-1)-1; j++)
            cout<<"  ";
        for(int j = 1; j <= i; j++){
            if(i==1)
                continue;
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
