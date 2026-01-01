#include <iostream>
int main() {
    std::string name;
    std::cout << "Halo, siapa namamu? ";
    std::getline(std::cin, name);
    std::cout << "Hai " << name << "! Selamat belajar C++.\n";
    return 0;
}
