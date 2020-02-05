/* Patter design by numbers
 *
 * Author : horobox
 * Created : 05-02-2020 08:08:22 PM
 *
 * Input : 7
 * Output :
 *       1 2 3 4 5 6 7
 */

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;

    //loop
	for(int i = 1; i <= num; i++)
		cout << i << " ";
	cout << endl;
	return 0;
}
