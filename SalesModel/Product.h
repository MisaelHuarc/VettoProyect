/**
 * Esta clase Producto modela las carecteristicas de nuestro producto a vender
 */

#pragma once

using namespace System;
using namespace System::Collections::Generic;
namespace SalesModel {
    public ref class Product {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property double Price;
        property int Stock;
        property char Status;
        property array<Byte>^ Photo;
        property String^ Career;
        property List<String^>^ Coments;
        property double Starts;
    };
}
