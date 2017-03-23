#include <iostream>

int main() {
    std::cout << "long " << sizeof(long) << std::endl;
    std::cout << "long long " << sizeof(long long) << std::endl;
    std::cout << "int64_t " << sizeof(std::int64_t) << std::endl;
    std::cout << "intptr_t " << sizeof(std::intptr_t) << std::endl;
    return 0;
}
