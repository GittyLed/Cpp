#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
using namespace std;

namespace VDMS {
    class Car : public Vehicle {
    private:
        int numberOfSeats;

    public:
        Car(const string& vin, const string& make, const string& model, int year, int numberOfSeats);
        ~Car();
        void display() const override;
    };
}

#endif // CAR_H
