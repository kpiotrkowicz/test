#include <iostream>
#include "logowanie.h"

int main() {
    std::string login, haslo;

    std::cout << "Login: ";
    std::cin >> login;

    std::cout << "Haslo: ";
    std::cin >> haslo;

    if (zaloguj(login, haslo)) {
        std::cout << "Zalogowano poprawnie!" << std::endl;
    }
    else {
        std::cout << "Zly login lub haslo." << std::endl;
    }
    std::cout << "oasdokadok";
    return 0;
}
