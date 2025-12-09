#include "logowanie.h"

bool zaloguj(const std::string& login, const std::string& haslo) {
    return login == "admin" && haslo == "1234";
}
