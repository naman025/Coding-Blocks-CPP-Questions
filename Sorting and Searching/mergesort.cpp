#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<TIME.h>
#include<dos.h>
void merge(int arr[], int l, int m, int r)
{
 int i, j, k;
 int n1 = m - l + 1;
 int n2 = r - m;
 int L[20000], R[20000];
 for (i = 0; i < n1; i++)
L[i] = arr[l + i];
 for (j = 0; j < n2; j++)
R[j] = arr[m + 1 + j];
 i = 0;
 j = 0;
 k = l;
 while (i < n1 && j < n2) {
if (L[i] <= R[j]) {
 arr[k] = L[i];
 i++;
}
else {
 arr[k] = R[j];
 j++;
}
k++;
 }
 while (i < n1) {
arr[k] = L[i];
i++;
k++;
 }
 while (j < n2) {
arr[k] = R[j];
j++;
k++;
 }
}
void mergeSort(int arr[], int l, int r)
{
 if (l < r) {
int m = l + (r - l) / 2;
mergeSort(arr, l, m);
mergeSort(arr, m + 1, r);
merge(arr, l, m, r);
 }
}
void printArray(int A[], int size)
{
 int i;
 for (i = 0; i < size; i++)
printf("%d ", A[i]);
 printf("\n");
}
void main()
{
 int arr[30000],n, i;
 clock_t s, e;
 float time;
 clrscr();
 printf("\nEnter the size of array: ");
 scanf("%d", &n);
 for( i = 0 ; i < n ;i++)
 {
 arr[i] = i;
 }
 s = clock();
 mergeSort(arr, 0, n - 1);
 e = clock();
 time = (e-s)/CLK_TCK;
 printf("\nTime for best case%f" , time);
 for( i = 0 ; i < n ;i++)
 {
arr[i] = rand()%n;
 }
 s = clock();
 delay(300);
 mergeSort(arr, 0, n - 1);
 e = clock();
 time = (e-s)/CLK_TCK;
 printf("\nTime for average case%f" , time);
 for( i = 0 ; i < n ;i++)
 {
arr[i] = n-i;
 }
 s = clock();
 delay(700);
 mergeSort(arr, 0, n - 1);
 e = clock();
 time = (e-s)/CLK_TCK;
 printf("\nTime for worst case%f" , time);
 getch();
}
