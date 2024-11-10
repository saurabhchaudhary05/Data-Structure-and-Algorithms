#include <iostream>
#include <string>

class MyClass {
public:
    std::string data = "Johny";

    void printData(const std::string& str) {
        std::string modifiedData = data + " " + str;
        std::cout << modifiedData << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.printData("Johny");
    return 0;
}
