#include <iostream>
#include <string>

int main()
{
    short failed;
    std::string word, out;
    char input;

    std::cout << "Hangman" << std::endl <<"Enter the word to be searched for: ";
    std::cin >> word;
    std::cout << "\033[2J\033[1;1H";

    for (int8_t i = 0; i < word.length(); i++)
        out.append("_");

    while (out.find("_") != std::string::npos && failed < 10)
    {
        std::cout << "The following word is searched:" << out << ", you have " << 10 - failed << " more tries" << std::endl;
        std::cin >> input;
        if (word.find(input) == std::string::npos)
            failed++;
        else
            for (int8_t i = 0; i < word.length(); i++)
                if (word[i] == input)
                    out[i] = input;
    }

    if (out.find("_") != std::string::npos)
        std::cout << word << " You have lost" << std::endl;
    else
        std::cout << word << " You have won! With " << failed << " failed attempts" << std::endl;
    return 0;
}
