#pragma once
#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include <vector>
#include "Vehicle.h"
#include "ServiceType.h"
using namespace std;
using namespace VDMS; 

class ServiceStation {
    private:
        vector<pair<Vehicle*, ServiceType>> serviceQueue;

    public:
        ServiceStation();
        ~ServiceStation();
        void addService(Vehicle* vehicle, ServiceType serviceType);
        void processServices();
        void displayQueue() const;
};


#endif // SERVICESTATION_H
