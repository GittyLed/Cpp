#include "Car.h"
using namespace std;
using namespace VDMS;
Car::Car(const string& vin, const string& make, const string& model, int year, int numberOfSeats)
	: Vehicle(vin, make, model, year), numberOfSeats(numberOfSeats) {}

Car::~Car() {}

void Car::display() const {
	cout << "Car [VIN: " << vin << ", Make: " << make << ", Model: " << model << ", Year: " << year << ", Number of Seats: " << numberOfSeats << "]\n";
}



