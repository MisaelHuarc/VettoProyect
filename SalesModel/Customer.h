/**
 * Project Untitled
 */

#pragma once
#include "Person.h"
using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    [Serializable]
    public ref class Customer : public Person {
    public:
        property int CustomerPoints;
        property String^ Address;
    };
}
