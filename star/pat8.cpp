/* Patter design
 *
 * Author : horobox
 * Created : 01-02-2020 02:02:06 PM
 *
 * Input : 5
 * Output :
 *
 *     * * * * *
 *      * * * *
 *       * * *
 *        * *
 *         *
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
	//outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
		//inner loop controlling spaces
		for(int j = 1; j < i; j++)
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
