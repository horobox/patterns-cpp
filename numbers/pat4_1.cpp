/* Patter design by numbers
 *
 * Author : horobox
 * Created : 05-02-2020 08:08:49 PM
 *
 * Input : 5
 * Output :
 *                 1
 *               2 1
 *             3 2 1
 *           4 3 2 1
 *         5 4 3 2 1
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
		//inner loop controlling spaces and numbers
		for(int j = num; j >= 1; j--)
		{
			if(j <= i)
			{
				cout << j << " ";
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

