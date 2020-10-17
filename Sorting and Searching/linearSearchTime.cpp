#include <bits/stdc++.h>
using namespace std; 
  
int linearSearch(int a[], int n, int num) { 
    int i; 
    for (i = 0; i < n; i++) 
        if (a[i] == num) 
            return i; 
    return -1; 
} 
  
int main() {

    clock_t start, end;

    int n, num, a[10000];
    
    for(int i =0; i<10000; i++)
        a[i] = i;
    cout<<"Enter number to be found: ";
    cin>>num; 

    start = clock();
    int position = linearSearch(a, 10000, num);
    if(position==-1)
        cout<<"Not found \n";
    else
        cout<<"Number found at index "<<position<<endl;

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout <<"Time taken by program is : "<<fixed<< time_taken<<setprecision(5); 
    cout <<"sec"<<endl;
    return 0; 
}
