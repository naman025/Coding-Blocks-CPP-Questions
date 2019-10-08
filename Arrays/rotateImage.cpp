/*ROTATE IMAGE (N X N ARRAY)*/
/*Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

Input Format:
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints:
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = n-1; i >= 0; --i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
