#include "Motorcycle.h"
using namespace std;
using namespace VDMS;
Motorcycle::Motorcycle(const string& vin, const string& make, const string& model, int year, int maxSpeed)
	: Vehicle(vin, make, model, year), maxSpeed(maxSpeed) {}

Motorcycle::~Motorcycle() {}

void Motorcycle::display() const {
	cout << "Motorcycle [VIN: " << vin << ", Make: " << make << ", Model: " << model << ", Year: " << year << ", Max Speed: " << maxSpeed  << "]\n";
}

