#include <string>
#include <iostream>
#include "Electronics.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	IElectronics* Tech[5];
	
	Tech[0] = new Player("Sony Walkman NW-A105B", 20, 1, 800);
	Tech[1] = new TV("iFFALCON IFF50U62", 10000, 8, 500);
	Tech[2] = new PortConsole("Playstation VITA", 15, 30);
	Tech[3] = new WashMachine("LG F2V5GG2S", 5, 60);
	Tech[4] = new Fridge("Eigen Stark-RF22", -20, 68);

	bool op = true;
	while (op)
	{
		cout << "Выберите товар : 1 - плейер, 2 - Телевизор, 3 - Игровая консоль, 4 - стиральная машина, 5 - Холодильник, 0 - выход " << endl;
		int x;
		cin >> x;
		switch (x)
		{
			case 0:
				op = false;
				break;
			case 1:
				Tech[0]->ShowSpec();
				break;
			case 2:
				Tech[1]->ShowSpec();
				break;
			case 3:
				Tech[2]->ShowSpec();
				break;
			case 4:
				Tech[3]->ShowSpec();
				break;
			case 5:
				Tech[4]->ShowSpec();
				break;
			default:
				cout << "Выберите товар от 1 до 5 или 0, чтобы выйти " << endl;
				break;
		}
	}
	
	delete Tech[0];
	delete Tech[1];
	delete Tech[2];
	delete Tech[3];
	delete Tech[4];

	return 0;
}