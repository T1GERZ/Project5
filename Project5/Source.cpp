#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int count;
	for (count = 1; count <= 1000000; count=count*10)
		cout << count * 10 << endl;
}