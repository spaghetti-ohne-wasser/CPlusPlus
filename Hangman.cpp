#include <iostream>
#include <string>

#define clear "\033[2J\033[1;1H"
#define red "\033[0;31m"
#define green "\033[0;32m"
#define white "\033[0;37m"

int main()
{
    char input;
    int8_t failed, tries;
    std::string word, out;

    tries = 15;
    
    std::cout << "Hangman" << std::endl << "Enter the word to be searched for: ";
    std::cin >> word;
    std::cout << clear;

    for (int8_t i; i < word.length(); i++)
        out.append("_");

    while (out.find("_") != std::string::npos && failed < tries)
    {
        std::cout << "The following word is searched:" << out << ", you have " << tries - (int) failed << " more tries" << std::endl;
        std::cin >> input;
        if (word.find(input) == std::string::npos)
            failed++;
        else
            for (int8_t i = 0; i < word.length(); i++)
                if (word[i] == input)
                    out[i] = input;
    }
    if (out.find("_") != std::string::npos)
        std::cout << red << clear << word << " You have lost";
    else
        std::cout << green << clear << word << " You have won!";
    std::cout << white << std::endl;
    return 0;
}
