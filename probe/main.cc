#include <iostream>
#include <functional>
#include <typeinfo>

auto lam = [](std::string str) {
    std::cout << str << std::endl;
    return 0;
};

int main() {

    if (int temp = 10; temp > 5) {
        std::cout << "temporary if-scope variable works! = " << temp << std::endl;
    }

    std::cout << typeid(lam).name() << std::endl;
    std::cout << lam("hello probe") << std::endl;
    return 0;
}