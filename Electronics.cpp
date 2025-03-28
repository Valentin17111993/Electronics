#include <string>
#include <iostream>
#include "Electronics.h"
using namespace std;

Portable :: Portable(const string& name, short batteryLife) : _name(name), _batteryLife(batteryLife)
{
}

Appliances :: Appliances(short weight) : _weight(weight)
{
}

Player :: Player(const string& name, short batteryLife, short weight, short totalTracks) : Portable(name, batteryLife), Appliances(weight), _totalTracks(totalTracks)
{
}

TV :: TV(const string& name, short batteryLife, short weight, short totalChannels) : Portable(name, batteryLife), Appliances(weight), _totalChannels(totalChannels)
{
}

PortConsole::PortConsole(const string& name, short batteryLife, short totalGames) : Portable(name, batteryLife), _totalGames(totalGames)
{
}

WashMachine :: WashMachine(const string& name, int power, short weight) : _name(name), _power(power), Appliances(weight)
{
}

Fridge::Fridge(const string& name, int temp, short weight) : _name(name), _temp(temp), Appliances(weight)
{
}

void Portable::ShowSpec()
{
	cout << "Время работы Портативного устройства " << _name << " " << _batteryLife << " часов" << endl;
}
void Appliances::ShowSpec()
{
	cout << "Вес бытовой техники составляет " << _weight << " килограммов" << endl;
}
void Player :: ShowSpec()
{
	cout << "Время работы " << _name << " " << _batteryLife << " часов" << endl;
	cout << "Вес составляет " << _weight << " килограммов" << endl;
	cout << _totalTracks << " песен можно записать в плейер " << _name << endl;
}

void TV::ShowSpec()
{
	cout << "Время работы телевизора " << _name << " " << _batteryLife << " часов" << endl;
	cout << "Вес составляет " << _weight << " килограммов" << endl;
	cout << _totalChannels << " каналов в телевизоре " << _name << endl;
}

void PortConsole::ShowSpec()
{
	cout << "Время работы консоли " << _name << " " << _batteryLife << " часов" << endl;
	cout << _totalGames << " игр сохранено в консоли " << _name << endl;
}

void WashMachine::ShowSpec()
{
	cout << "Потребляемая мощность стиральной машины " << _name << " " << _power << " Килоатт * час" << endl;
	cout << "Вес " << _weight << " килограммов" << endl;
}

void Fridge::ShowSpec()
{
	cout << "Температура в морозильной камере холодильника " << _name << " составляет " << _temp << " градусов Цельсия" << endl;
	cout << "Вес " << _weight << " килограммов" << endl;
}