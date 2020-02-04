/* Patter design
 *
 * Author : horobox
 * Created : 01-02-2020 12:36:24 PM
 *
 * Input : 5
 * Output :
 *
 *      * * * * * 
 *        * * * *
 *          * * *
 *            * *
 *              *
 */

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	//loops
	//outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
		//inner loop controlling spaces and characters
		for(int j = 1; j <= num; j++)
		{
			if(i <= j)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
