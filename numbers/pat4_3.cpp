/* Patter design by numbers
 *
 * Author : horobox
 * Created : 05-02-2020 08:09:01 PM
 *
 * Input : 5
 * Output :
 *         5 4 3 2 1
 *           4 3 2 1
 *             3 2 1
 *               2 1
 *                 1
 */
#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int k = num;
	
	//loops
	//outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
		//inner loop controlling spaces and numbers.
		for(int j = 1; j <= num; j++)
		{
			if(i <= j)
			{
				cout << k << " ";
				k--;
			}
			else
				cout << "  ";
		}
		k = num - i;
		cout << endl;
	}
	return 0;
}
