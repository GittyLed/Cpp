#include "Truck.h"
using namespace std;
using namespace VDMS;
Truck::Truck(const string& vin, const string& make, const string& model, int year, double payloadCapacity)
	: Vehicle(vin, make, model, year), capacity(payloadCapacity) {}

Truck::~Truck() {}

void Truck::display() const {
	cout << "Truck [VIN: " << vin << ", Make: " << make << ", Model: " << model << ", Year: " << year << ", Payload: " << capacity << "]\n";
}

