#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

namespace VDMS {
    class Vehicle {
    protected:
        string vin;
        string make;
        string model;
        int year;
        static int vehicleCount;

    public:
        Vehicle(const string& vin, const string& make, const string& model, int year);
        virtual ~Vehicle();
        Vehicle(const Vehicle& other);
        Vehicle& operator=(const Vehicle& other);

        virtual void display() const = 0;
        static int getVehicleCount();
    };
}

#endif // VEHICLE_H

