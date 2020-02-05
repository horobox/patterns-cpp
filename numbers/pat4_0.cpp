/* Patter design by numbers
 *
 * Author : horobox
 * Created : 05-02-2020 08:08:42 PM
 *
 * Input : 5
 * Output :
 *         1
 *         1 2
 *         1 2 3
 *         1 2 3 4
 *         1 2 3 4 5
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
		for(int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
