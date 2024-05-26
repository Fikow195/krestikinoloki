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
		cout << "  1 2 3\n";
		for (int i = 0; i < 3; i++) {
			cout << char('A' + i) << ' ';
			for (int j = 0; j < 3; j++) {
				cout << field[i][j] << " "; 
				if (j < 2) cout << "|";
			}
			if (i < 2) cout << "  |---|---|---|" << endl;
			
		}
	}

	//funkcia proverki na pobedy i nichiu
};


void Player(Desk& desk, char player)
{
	
	int x;
	int x0;
	int y0;
	int y;
	
	do
	{
		cout << "Игрок"<< player <<"Введите расположение по горизонтали " << endl;//izmenila nemnogo
		cin >> x0;
		x = x0 - 'A'-1;
		cout << "Игрок" << player << "Введите расположение по вертикали " << endl;
		cin >> y0;
		y = y0 - 2;

		for (int i = 0; i < 3; i++) {

			if (desk.field[x][y] == '-') {
				desk.field[x][y] = player;
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