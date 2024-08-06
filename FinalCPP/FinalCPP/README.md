# Integrated Vehicle Management System

## Overview

This project implements an integrated vehicle management system that manages different types of vehicles and supports various service facilities. It demonstrates advanced C++ concepts including inheritance, polymorphism, operator overloading, and more.

## Project Structure

- **include/**: Contains header files for the project.
- **src/**: Contains source files for the project.

## Files

- **ServiceType.h**: Defines the ServiceType enumeration.
- **Vehicle.h**: Defines the base class for vehicles.
- **Car.h**: Defines the Car class derived from Vehicle.
- **Truck.h**: Defines the Truck class derived from Vehicle.
- **Motorcycle.h**: Defines the Motorcycle class derived from Vehicle.
- **ServiceStation.h**: Defines the ServiceStation class.
- **Vehicle.cpp**: Implements the Vehicle class.
- **Car.cpp**: Implements the Car class.
- **Truck.cpp**: Implements the Truck class.
- **Motorcycle.cpp**: Implements the Motorcycle class.
- **ServiceStation.cpp**: Implements the ServiceStation class.
- **main.cpp**: Contains the main function to run the program.

## Compilation and Execution

### Requirements

- A C++ compiler (e.g., g++, clang++)
- Visual Studio or any IDE that supports C++ development

### Compilation Steps

1. Open the terminal/command prompt.
2. Navigate to the project directory.

#### Using g++ (example)

```sh
g++ src/*.cpp -o VehicleManagementSystem
./VehicleManagementSystem
