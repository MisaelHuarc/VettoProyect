#include "pch.h"

#include "SalesController.h"

int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    return Int32(product->Id);
}

Product^ SalesController::Controller::QueryProductById(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId)
            return productList[i];
    return nullptr;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    return productList;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == product->Id) {
            productList[i] = product;
            return product->Id;
        }

    return 0;
}

int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId) {
            productList->RemoveAt(i);
            return productId;
        }
    return 0;
}

List<Product^>^ SalesController::Controller::QueryProductsByNameOrDescription(String^ nameDesc)
{
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameDesc) || productList[i]->Description->Contains(nameDesc))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

List<Product^>^ SalesController::Controller::QueryProductsByNameOrCareer(String^ nameCaree)
{
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameCaree) || productList[i]->Career->Contains(nameCaree))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}
