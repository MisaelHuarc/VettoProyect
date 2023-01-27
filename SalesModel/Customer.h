/**
 * Project Untitled
 */


#pragma once
#include "Person.h"
using namespace System;
namespace SalesModel {
    public ref class Customer : public Person {
    public:
        property int CustomerPoints;
        property String^ Address;
    };
}
