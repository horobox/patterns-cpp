/* Patter design
 *
 * Author : horobox
 * Created : 01-02-2020 11:31:40 AM
 *
 * Input : 5
 * Output :
 *      * * * * * 
 *      * * * * *
 *      * * * * *
 *      * * * * *
 *      * * * * *
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
	for(int i = 0; i < num; i++)
	{
		//inner loop controlling columns
		for(int j = 0; j < num; j++)
		{
			cout << "* ";	
		}
		cout << endl;
	}
	return 0;
}
