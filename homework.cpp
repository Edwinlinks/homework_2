#include<iostream>
using namespace std;
int main()
{

	int i=0,j=0,k=0;
	int n,m;
	for(k=0;k<10;k++)
	{
		m=10*k+5;
		for(i=0;i<k;i++)
		{
			n=10*i+5;
			cout<<n<<"*"<<m<<" ";
		}
		printf("\n");
	}
	return 0;
}

