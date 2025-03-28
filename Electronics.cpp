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
	cout << "����� ������ ������������ ���������� " << _name << " " << _batteryLife << " �����" << endl;
}
void Appliances::ShowSpec()
{
	cout << "��� ������� ������� ���������� " << _weight << " �����������" << endl;
}
void Player :: ShowSpec()
{
	cout << "����� ������ " << _name << " " << _batteryLife << " �����" << endl;
	cout << "��� ���������� " << _weight << " �����������" << endl;
	cout << _totalTracks << " ����� ����� �������� � ������ " << _name << endl;
}

void TV::ShowSpec()
{
	cout << "����� ������ ���������� " << _name << " " << _batteryLife << " �����" << endl;
	cout << "��� ���������� " << _weight << " �����������" << endl;
	cout << _totalChannels << " ������� � ���������� " << _name << endl;
}

void PortConsole::ShowSpec()
{
	cout << "����� ������ ������� " << _name << " " << _batteryLife << " �����" << endl;
	cout << _totalGames << " ��� ��������� � ������� " << _name << endl;
}

void WashMachine::ShowSpec()
{
	cout << "������������ �������� ���������� ������ " << _name << " " << _power << " ������� * ���" << endl;
	cout << "��� " << _weight << " �����������" << endl;
}

void Fridge::ShowSpec()
{
	cout << "����������� � ����������� ������ ������������ " << _name << " ���������� " << _temp << " �������� �������" << endl;
	cout << "��� " << _weight << " �����������" << endl;
}