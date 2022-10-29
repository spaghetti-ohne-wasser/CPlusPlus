#include <iostream>
#include <string>
#include <ctime>

std::string generatePassword(const uint32_t &seed, const uint32_t &length, const std::string &chars)
{
    std::string password;
    srand(seed);
    for (uint32_t _ = 0; _ < length; _++)
        password.push_back(chars[rand() % chars.size()]);
    return password;
}

int main()
{
    std::cout << generatePassword(time(NULL), 16, "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") << std::endl;
    return 0;
}
