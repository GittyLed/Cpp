#pragma once
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"
using namespace std;

namespace VDMS {
    class Motorcycle : public Vehicle {
    private:
        bool maxSpeed;

    public:
        Motorcycle(const string& vin, const string& make, const string& model, int year, int maxSpeed);
        ~Motorcycle();
        void display() const override;
    };
}

#endif // MOTORCYCLE_H
