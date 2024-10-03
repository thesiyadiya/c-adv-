#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void quicksort(int[],int,int);
void main()
{
	int a[100],n,i;
	clrscr();
	cout<<"\n enter array size:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n enter array elements:";
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<"\n sorted array elements:"x<<a[i];
	}
	getch();
}
void quicksort(int a[],int first,int last)
{
	int low,high,temp,pivot,i;
	low=first;
	high=last;
	pivot=(low+high)/2;
	while(low<=high)
	{
		while(a[low]<a[pivot])
		low++;
		while(a[high]>a[pivot])
		high--;
		if(low<=high)
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
	}
	if(first<high)
	quicksort(a,first,high);
	if(low<last)
	quicksort(a,low,last);
}