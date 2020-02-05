/* Patter design by numbers
 *
 * Author : horobox
 * Created : 05-02-2020 08:08:29 PM
 *
 * Input : 5
 * Output :
 *         1 1 1 1 1
 *         2 2 2 2 2
 *         3 3 3 3 3
 *         4 4 4 4 4
 *         5 5 5 5 5
 */
#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;

    //loops
    //outer loop controlling rows
	for(int i = 1; i <= num; i++)
	{
        //inner loop controlling spaces and numbers
		for(int j = 1; j <= num; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
