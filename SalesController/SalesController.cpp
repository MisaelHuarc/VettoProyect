#include "pch.h"

#include "SalesController.h"

using namespace SalesPersistance;

int SalesController::Controller::AddProduct(Product^ product)
{
    //ver que no se repita el id d eproduct ingresante
    productList->Add(product);
    Persistance::PersistBinary("products.bin", productList);
    return Int32(product->Id);
}

Product^ SalesController::Controller::QueryProductById(int productId)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId)
            return productList[i];
    return nullptr;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    return productList;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == product->Id) {
            productList[i] = product;
            Persistance::PersistBinary("products.bin", productList);
            return product->Id;
        }

    return 0;
}

int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId) {
            productList->RemoveAt(i);
            Persistance::PersistBinary("products.bin", productList);
            return productId;
        }
    return 0;
}

List<Product^>^ SalesController::Controller::QueryProductsByNameOrDescription(String^ nameDesc)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameDesc) || productList[i]->Description->Contains(nameDesc))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

List<Product^>^ SalesController::Controller::QueryProductsByNameOrCareer(String^ nameCaree)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameCaree) || productList[i]->Career->Contains(nameCaree))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

List<String^>^ SalesController::Controller::QueryAllCareers()
{
    //careerList = (List<String^>^)Persistance::LoadXMLData("career.xml");
    return careerList;
}

int SalesController::Controller::AddCustomer(Customer^ customer)
{
    //ver que no se repita el id d eproduct ingresante
    customerList->Add(customer);
    Persistance::PersistBinary("customers.bin", customerList);
    return Int32(customer->Id);
}

Customer^ SalesController::Controller::QueryCustomerById(int customerId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

List<Customer^>^ SalesController::Controller::QueryAllCustomers()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int SalesController::Controller::UpdateCustomer(Customer^ customer)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customerList[i]->Id == customer->Id) {
            customerList[i] = customer;
            Persistance::PersistBinary("customers.bin", customerList);
            return customer->Id;
        }

    return 0;
}

int SalesController::Controller::DeleteCustomer(int customerId)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customerList[i]->Id == customerId) {
            customerList->RemoveAt(i);
            Persistance::PersistBinary("customers.bin", customerList);
            return customerId;
        }
}
