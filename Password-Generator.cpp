#include <iostream>
#include <string>

int main()
{
    char input;
    uint32_t failed, tries;
    std::string word, out;

    tries = 15;
    word = "HELLO";

    for (uint32_t i = 0; i < word.size(); i++)
        out.append("_");

    while (out.find("_") != std::string::npos && failed < tries)
    {
        std::cout << "The following word is searched:" << out << ", you have " << tries - failed << " more tries" << std::endl;
        std::cin >> input;
        if (word.find(input) == std::string::npos)
            failed++;
        else
            for (uint32_t at = 0; at < word.length(); at++)
                if (word[at] == input)
                    out[at] = input;
    }
    if (out.find("_") != std::string::npos)
        std::cout << word << " You have lost :[";
    else
        std::cout << word << " You have won :]";
    std::cout << std::endl;
    return 0;
}
