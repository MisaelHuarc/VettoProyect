/**
 * Project Untitled
 */


#pragma once 

#include "Employee.h"
using namespace System;

namespace SalesModel {
    public ref class DeliveryMan : public Employee {
    public:
        property String^ idMotorBike;
    };
}