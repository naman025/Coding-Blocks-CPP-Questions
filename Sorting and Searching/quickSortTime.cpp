#include <bits/stdc++.h>
using namespace std;

int partition(int input[], int si, int ei)
{
    int i, count=0;
    int pivot=input[si];
    for(i=si+1; i<=ei; i++)
    {
        if(input[i]<=pivot)
            count++;
    }
    
    int pivotIndex=si+count;
    
    input[si]=input[pivotIndex];
    input[pivotIndex]=pivot;
    
    i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex)
    {
        if(input[i]<=pivot)
            i++;
        else if(input[j]>pivot)
            j--;
        else
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
            
        }
    }
    return pivotIndex;
}
void quickSort(int input[], int si, int ei)
{
    if(si>=ei)
        return;
    
    int p = partition(input, si, ei);
    
    quickSort(input, si, p-1);
    quickSort(input, p+1, ei);
    
}
int main() {

	int a[10000];
	int n=10000;
	for(int i =0; i<10000; i++)
        a[i] = i;
	clock_t start, end;

	start = clock();
	quickSort(a,0,n-1);
	end = clock();
    
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout <<"Time taken by program is : "<<fixed<< time_taken<<setprecision(5); 
    cout <<"sec"<<endl;
    return 0; 
}
