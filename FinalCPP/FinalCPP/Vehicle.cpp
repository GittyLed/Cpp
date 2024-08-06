#include "Vehicle.h"
using namespace std;
using namespace VDMS;
int Vehicle::vehicleCount = 0;

Vehicle::Vehicle(const string& vin, const string& make, const string& model, int year)
	: vin(vin), make(make), model(model), year(year) {
	vehicleCount++;
}

Vehicle::~Vehicle() {
	vehicleCount--;
}

Vehicle::Vehicle(const Vehicle& other)
	: vin(other.vin), make(other.make), model(other.model), year(other.year) {
	vehicleCount++;
}

Vehicle& Vehicle::operator=(const Vehicle& other) {
	if (this == &other) return *this;

	vin = other.vin;
	make = other.make;
	model = other.model;
	year = other.year;

	return *this;
}

int Vehicle::getVehicleCount() {
	return vehicleCount;
}

