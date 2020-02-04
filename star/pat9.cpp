/* Patter design
 *
 * Author : horobox
 * Created : 04-02-2020 01:35:34 PM
 *
 * Input : 3
 * Output :
 *       *
 *      * *
 *     * * *
 *      * * 
 *       *
 */
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin  >> num;

	//temporary variable
	int k = num;

	//loops

	//for above pattern
	//outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
		//inner loop controlling spaces
		for(int j = 1; j < k; j++)
		{
			cout << " ";
		}
		k -= 1;

		//inner loop controlling character
		for(int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//for below pattern
	num = num - 1;
	k = num;
	//outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
		//inner loop controlling spaces
		for(int j = 0; j < i; j++) // j = 0 because num - 1 pattern to be drawn.
		{
			cout << " ";
		}
		
		//inner loop controlling character
		for(int j = 1; j <= k; j++)
		{
			cout << "* ";
		}
		
		k -= 1;		
		cout << endl;
	}
	return 0;
}