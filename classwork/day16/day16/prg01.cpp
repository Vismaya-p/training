//minimum and maximum element in an array
#include<iostream>
#define MAX 30
using namespace std;
int main()
{
	int a[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int min = a[0];
	int max = a[0];
	for(int i=0;i<10;i++)
	{
	if (a[i] > max)
	{
		max = a[i];
	}
	else if(a[i]<min)
	{
		min = a[i];
	}
	}
	cout << "min ="<<min << "max ="<< max;
}
