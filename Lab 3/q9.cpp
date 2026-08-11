#include <iostream>
#include <string>
using namespace std;

class Product {
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void accept() 
    {   
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() 
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
    }


    float calculateCost() 
    {
        return price * quantity;
    }
};

class ShoppingCart 
{
    Product* products;
    int n;
    float totalCost;

public:

    //Constructor to initialize value
    ShoppingCart(int size) 
    {
        n = size;
        products = new Product[n];
        totalCost = 0;
    }

    //method to accept products details
    void acceptProducts() 
    {
        for (int i = 0; i < n; i++) 
        {
            cout << "\nEnter details for Product " << i + 1 << ":\n";
            products[i].accept();
        }
    }

    //method to display details of product
    void displayProducts() 
    {
        cout << "\n===== Shopping Cart =====\n";

        for (int i = 0; i < n; i++) 
        {
            cout << "\nProduct " << i + 1 << ":\n";
            products[i].display();
        }
    }

    //method to calculate total cost
    void calculateTotal() 
    {
        totalCost = 0;

        for (int i = 0; i < n; i++) 
        {
            totalCost += products[i].calculateCost();
        }
    }

    //method to display total cost
    void displayTotal() 
    {
        cout << "\nTotal Amount = " << totalCost << endl;
    }


    //Destructor for freeing allocated memory
    ~ShoppingCart() 
    {
        delete[] products;
    }
};

int main() {
    int n;

    cout << "Enter the number of products: ";
    cin >> n;

    ShoppingCart cart(n);

    cart.acceptProducts();

    cart.displayProducts();

    cart.calculateTotal();

    cart.displayTotal();

    return 0;
}