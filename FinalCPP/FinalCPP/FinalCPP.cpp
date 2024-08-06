#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"
#include <iostream>
using namespace VDMS;
using namespace std;
int main() {

    Car* car = new Car("1HGBH41JXMN109186", "Toyota", "Corolla", 2020, 4);
    Truck* truck = new Truck("2FTZF0725XCA08936", "Ford", "F-150", 2019, 1500);
    Motorcycle* motorcycle = new Motorcycle("JH2RC5307XM400446", "Honda", "CBR600RR", 2018, 160);

    ServiceStation serviceStation;
    serviceStation.addService(car, ServiceType::OilChange);
    serviceStation.addService(truck, ServiceType::Inspection);
    serviceStation.addService(motorcycle, ServiceType::TireRotation);

    cout << "Initial service queue:\n";
    serviceStation.displayQueue();

    cout << "\nProcessing services:\n";
    serviceStation.processServices();

    cout << "\nService queue after processing:\n";
    serviceStation.displayQueue();

    return 0;
}
