#include<iostream>

using namespace std;


class Desk
{
public:

	char field[3][3];

	Desk() {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				field[i][j] = '-';
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
	}
	void printField() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
	}

	//funkcia proverki na pobedy i nichiu
	void checkWinX() {
		for (int i = 0; i < 3; i++) {
			if ((field[i][0] == 'x' && field[i][1] == 'x' && field[i][2] == 'x') ||
				(field[0][i] == 'x' && field[1][i] == 'x' && field[2][i] == 'x')) {
				cout << "x won!" << endl;
			}
		}
		// Check diagonals
		if ((field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') ||
			(field[0][2] == 'x' && field[1][1] == 'x' && field[2][0] == 'x')) {
			cout << "x won!" << endl;
		}
	}
	void checkWinO() {
		for (int i = 0; i < 3; i++) {
			if ((field[i][0] == '0' && field[i][1] == '0' && field[i][2] == '0') ||
				(field[0][i] == '0' && field[1][i] == '0' && field[2][i] == '0')) {
				cout << "O won!" << endl;
			}
		}
		// Check diagonals
		if ((field[0][0] == '0' && field[1][1] == '0' && field[2][2] == '0') ||
			(field[0][2] == '0' && field[1][1] == '0' && field[2][0] == '0')) {
			cout << "O won!" << endl;
		}
	}
};


void Player(Desk& desk, char A)
{

	int x;
	int x0;
	int y0;
	int y;

	do
	{
		cout << "Введите расположение по вертикали" << endl;
		cin >> x0;
		x = x0 - 1;
		cout << "Введите расположение по горизонтали" << endl;
		cin >> y0;
		y = y0 - 1;
		
		for (int i = 0; i < 3; i++) {

			if (desk.field[x][y] == '-') {
				desk.field[x][y] = A;
				break;

			}
			else {
				cout << "не вышло" << endl;

			}
		}
		desk.printField();
		desk.checkWinX();
		desk.checkWinO();
	} while (true);

	//proverka 
};
//s
int main()
{
	Desk desk;
	Player(desk, 'x');
	Player(desk, 'o');
}