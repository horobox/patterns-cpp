/*
   Author : horobox
   Created :  01-02-2020 11:00:35 AM
 
   Input : 7
   Output : * * * * * * * 
 
 */

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	//loops
	for(int i = 0; i < num; i++)
	{
			cout << "* ";
	}
	cout << endl;
	return 0;
}
 