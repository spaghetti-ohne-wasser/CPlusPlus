#include <iostream>
#include <string>
#include <ctime>

std::string Generate_Password(const uint32_t &seed, const uint32_t &length, const std::string &chars)
{
    std::string password;
    srand(seed);
    for (uint32_t _ = 0; _ < length; _++)
        password.push_back(chars[rand() % chars.size()]);
    return password;
}

int main()
{
    std::cout << Generate_Password(time(NULL), 10, "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") << std::endl;
    return 0;
}
