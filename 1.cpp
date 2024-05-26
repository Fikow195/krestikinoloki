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
};


void Player(Desk& desk, char A)
{
	
	int x;
	int x0;
	int y0;
	int y;
	
	do
	{
		cout << "Введите расположение по горизонтали " << endl;
		cin >> x0;
		x = x0 - 1;
		cout << "Введите расположение по вертикали " << endl;
		cin >> y0;
		y = y0 - 1;

		for (int i = 0; i < 3; i++) {

			if (desk.field[x][y] == '-') {
				desk.field[x][y] = A;
				break;

			}
			else {
				cout << "место занято" << endl;

			}
		}
	} while (true);

	//proverka 
	};

	int main()
	{
		setlocale(LC_ALL, "ru");
		Desk desk;
		Player(desk, 'x');
		Player(desk, 'o');
	}