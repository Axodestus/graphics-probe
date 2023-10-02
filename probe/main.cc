#include <iostream>
#include <functional>
#include <typeinfo>

auto lam = [](std::string str) {
    std::cout << str << std::endl;
    return 0;
};

int main() {

    std::cout << typeid(lam).name() << std::endl;
    std::cout << lam("hello probe") << std::endl;
    return 0;
}