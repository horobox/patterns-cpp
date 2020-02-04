/* Patter design
 *
 * Author : horobox
 * Created : 04-02-2020 02:34:58 PM
 *
 * Input : 5
 * Output :
 *          *
 *        * * *
 *      * * * * *
 *    * * * * * * *
*   * * * * * * * * *
*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin  >> num;

	for(int i = 1; i <= num; i++){

		for(int j = 1; j <= (num + i) - 1; j++){

			if(j >= num-(i-1) && j <= num+(i-1))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}