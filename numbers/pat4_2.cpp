/* Patter design by numbers
 *
 * Author : horobox
 * Created : 05-02-2020 08:08:57 PM
 *
 * Input : 5
 * Output :
 *         1 2 3 4 5
 *         1 2 3 4
 *         1 2 3
 *         1 2
 *         1
 */
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int k = 1;

	//loops
	//outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
		//inner loop controlling spaces and numbers.
		for(int j = 1; j <= num; j++)
		{
			if(j <= num - i + 1)
			{
				cout << k << " ";
				k++;
			}
			else
			{
				cout << "  ";
			}
			
		}
		k = 1;
		cout << endl;
	}
	return 0;
}

