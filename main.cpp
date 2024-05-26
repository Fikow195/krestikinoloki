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
		cout << "   1    2    3" << endl;
		cout << "   -----------" << endl;
		for (int i = 0; i < 3; i++) {
			cout << char('A' + i) << " |";
			for (int j = 0; j < 3; j++) {
				cout << ' ' << field[i][j] << " ";
				if (j < 2) cout << "|";
			}
			cout << "|" << endl;
			if (i < 2) cout << "  |---|---|---|" << endl;
		}
		cout << "   -----------" << endl;
	}

	//funkcia proverki na pobedy i nichiu
	void isFull() {
		int schet = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (field[i][j] == 'x' || field[i][j] == '0') {
					schet += 1;
				}
			}
		}
		if (schet == 9)
		{
			cout << "Ничья!" << endl;
		}
	}

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


void Player(Desk& desk)
{
	char A;
	int x;
	int x0;
	int y0;
	int y;
	desk.printField();
	do
	{
		A = 'x';
		cout << "Игрок " << 'x' << " Введите расположение по горизонтали " << endl;//izmenila nemnogo
		cin >> x0;
		x = x0 - 1;
		cout << "Игрок " << 'x' << " Введите расположение по вертикали " << endl;
		cin >> y0;
		y = y0 - 1;
		
		for (int i = 0; i < 3; i++) {

			if (desk.field[x][y] != 'x' && desk.field[x][y] != '0') {
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
		desk.isFull();
		A = '0';
		cout << "Игрок " << '0' << " Введите расположение по горизонтали " << endl;//izmenila nemnogo
		cin >> x0;
		x = x0 - 1;
		cout << "Игрок " << '0' << " Введите расположение по вертикали " << endl;
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
		desk.isFull();
	} while (true);

	//proverka 
};
//s
int main()
{
	Desk desk;
	Player(desk);
}