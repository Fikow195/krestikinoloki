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
	void printField() {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
	}
};


void Player(char A)
{
	char A;
	cout << "Выберите x или o: " << endl;
	cin >> A;
	int x;
	int x0;
	int y0;
	int y;
	const int row = 3;
	const int col = 3;
	int field[3][3];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			field[i][j] = '-';
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
	while (true)
	{
		cout << "Введите расположение по горизонтали " << endl;
		cin >> x0;
		x = x0 - 1;
		cout << "Введите расположение по вертикали " << endl;
		cin >> y0;
		y = y0 - 1;

		for (int i = 0; i < 3; i++) {

			if (field[x][y] == 'x') {
				cout << "место занято" << endl;
				break;
				continue;

			}
			else if (field[x][y] == 'o') {
				cout << "место занято" << endl;
				continue;

			}
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{

					cout << field[i][j] << " ";
					field[x][y] = A;
				}
				cout << endl;
			}
		}
	}
	};

	void main()
	{
		setlocale(LC_ALL, "ru");
		char A;
		int x;
		int x0;
		int y0;
		int y;
		const int row = 3;
		const int col = 3;
		int field[3][3];
		
		Player('x');
		Player('o');
	}
