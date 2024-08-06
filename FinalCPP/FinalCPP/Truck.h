#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
using namespace std;

namespace VDMS {
    class Truck : public Vehicle {
    private:
        double capacity;

    public:
        Truck(const string& vin, const string& make, const string& model, int year, double capacity);
        ~Truck();
        void display() const override;
    };
}

#endif // TRUCK_H
