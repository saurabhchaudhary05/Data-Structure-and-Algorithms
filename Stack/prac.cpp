#include <iostream>
#include <fstream>

struct Product {
    std::string name;
    double price;
};

int main() {
    std::ofstream file("products.txt", std::ios::binary);
    Product prod;
    prod.name = "Keyboard";
    prod.price = 29.99;
    file.write(reinterpret_cast<char*>(&prod), sizeof(Product));
    file.close();
    return 0;
}
