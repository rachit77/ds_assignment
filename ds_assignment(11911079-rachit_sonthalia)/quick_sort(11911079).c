// RACHIT SONTHALIA 11911079
#include <stdio.h>
int partition(int a[], int beg, int end);  
void quickSort(int a[], int beg, int end);  
void main()  
{  
int i;  
int arr[10]={90,23,101,45,65,28,67,89,34,29};  
quickSort(arr, 0, 9);  
printf("\n The sorted array is: \n");  
for(i=0;i<10;i++)  
printf(" %d\t", arr[i]);  
}  
int partition(int a[], int beg, int end)  
{  
int left, right, t, l, f;     
l = left = beg;  
right = end;  
f = 0;  
while(f != 1)  
{  
while((a[l] <= a[right]) && (l!=right))  
right--;  
if(l==right)  
f =1; 
else if(a[l]>a[right])  
{  
t = a[l];  
a[l] = a[right];  
 a[right] = t;  
l = right;  
}  
if(f!=1)  
{  
while((a[l] >= a[left]) && (l!=left))  
left++;  
if(l==left)  
f =1;  
 else if(a[l] < a[left])  
{  
t = a[l];  
a[l] = a[left]; 
a[left] = t;  
l = left;  
}  
}  
}  
return l;  
}  
void quickSort(int a[], int beg, int end)  
{  
int l;  
if(beg<end)  
{  
l= partition(a, beg, end);  
quickSort(a, beg, l-1);  
quickSort(a, l+1, end);  
}  
}  