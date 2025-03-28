#pragma once
#include <string>
using namespace std;

class IElectronics
{
public:
	virtual void ShowSpec() = 0;
	virtual ~IElectronics() = default;
};

class Portable : virtual public IElectronics
{
public:
	Portable(const string& name, short batteryLife);
	void ShowSpec() override;
protected:
	string _name;
	short _batteryLife;
};

class Appliances :virtual public IElectronics
{
public:
	Appliances(short weight);
	void ShowSpec() override;
protected:
	short _weight;
};

class Player : public Portable, Appliances
{
public:
	Player(const string& name, short batteryLife, short weight, short totalTracks);
	void ShowSpec() override;
private:
	short _totalTracks;
};

class TV : public Portable, Appliances
{
public:
	TV(const string& name, short batteryLife, short weight, short totalChannels);
	void ShowSpec() override;
private:
	short _totalChannels;
};

class PortConsole : public Portable
{
public:
	PortConsole(const string& name, short batteryLife, short totalGames);
	void ShowSpec() override;
private:
	short _totalGames;
};

class WashMachine : public Appliances
{
public:
	WashMachine(const string &name, int power, short weight);
	void ShowSpec() override;
private:
	string _name;
	int _power;
};

class Fridge : public Appliances
{
public:
	Fridge(const string &name, int temp, short weight);
	void ShowSpec() override;
private:
	string _name;
	int _temp;
};