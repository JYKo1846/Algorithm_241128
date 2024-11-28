/*
BOJ 5622
#include <iostream>
#include <string>

//2 : ABC / 3 : DEF / 4 : GHI / 5 : JKL / 6 : MNO / 7 : PQRS / 8 : TUV / 9 : WXYZ / 0 : OPERATOR
using namespace std;

int changeNum(char x)
{
	if('A'<= x && x<= 'C')
		return 3;
	if('D'<= x && x<= 'F')
		return 4;
	if('G'<= x && x<= 'I')
		return 5;
	if('J'<= x && x<= 'L')
		return 6;
	if('M'<= x && x<= 'O')
		return 7;
	if('P'<= x && x<= 'S')
		return 8;
	if('T'<= x && x<= 'V')
		return 9;
	if('W'<= x && x<= 'Z')
		return 10;
}

int main()
{
	string in;
	int res= 0;
	
	getline(cin, in);
	for(int i= 0; i< in.length(); i++)
		res+= changeNum(in[i]);
	
	cout << res << endl;
	return 0;
}
*/
