/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>
int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);
int max(int a[], int n)
{
	int max = a[0];
	for (int i=0; i<n; i++)
	{
		if (max<a[i])
			max = a[i];
	}
	return(max);
}
int min(int a[], int n)
{
	int min = a[0];
	for (int i=0; i<n; i++)
	{
		if (min>a[i])
			min = a[i];
	}
	return(min);
}
float average(int a[], int n)
{
	float average = 0.0;
	float sum = 0.0;
	for (int i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	average = sum/n;
	return(average);
}
int mode(int a[], int n)
{
	int counts=0, value=0;
	for (int i=0; i<n; i++)
	{
		int count=0;
		for (int j=0; j<n; j++)
		{
			if (a[j]==a[i])
			count++;
		}
		
		if (count>counts)
		{
			counts=count;
			value=a[i];
		}
	}
	return(value);
}
int factors(int n, int a[])
{
	int count=0;
	while (n%2==0)
	{
		a[count++]=2;
		n=n/2;
	}
	for (int i=3; i<=n; i++)
	{
		while(n%i==0)
		{
			a[count++]=i;
			n=n/i;
		}
	}
	if (n>2)
	{ 
		a[count++]=n;
	}
	return(count);
}
					
