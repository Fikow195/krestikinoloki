#include<iostream>

using namespace std;


class Desk
{
public:
	const int row = 3;
	const int col = 3;
	int field[3][3];

	Desk() {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				field[i][j] = '-';
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
	}
};


class Player
{
public:
	char A;

};