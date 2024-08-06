#include "ServiceStation.h"
using namespace std;
using namespace VDMS;
ServiceStation::ServiceStation() {}

ServiceStation::~ServiceStation() {
	for (auto& service : serviceQueue) {
		delete service.first;
	}
}

void ServiceStation::addService(Vehicle* vehicle, ServiceType serviceType) {
	serviceQueue.push_back(make_pair(vehicle, serviceType));
}

void ServiceStation::processServices() {
	for (auto& service : serviceQueue) {
		switch (service.second) {
		case ServiceType::OilChange:
			cout << "Processing Oil Change for vehicle: ";
			break;
		case ServiceType::Inspection:
			cout << "Processing Inspection for vehicle: ";
			break;
		case ServiceType::TireRotation:
			cout << "Processing Tire Rotation for vehicle: ";
			break;
		}
		service.first->display();
	}
	serviceQueue.clear();
}

void ServiceStation::displayQueue() const {
	cout << "Service Queue:\n";
	for (const auto& service : serviceQueue) {
		service.first->display();
	}
}

