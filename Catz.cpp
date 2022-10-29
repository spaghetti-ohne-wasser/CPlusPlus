#include <iostream>
#include <string>
#include <fstream>

std::string read(const std::string &path)
{
    std::ifstream file(path);
    if (file.is_open())
    {
        std::string line, text;
        while (getline (file, line))
            text += line + '\n';
        file.close();
        return text;
    }
    return "File can't open " + path;
}

int main(int argc, const char * argv[])
{
    if (argc > 1)
        for (int at = 1; at < argc; at++)
            std::cout << "--------------" << argv[at] << "--------------" << std::endl << read(argv[at]) << std::endl;
    else
        std::cout << "./Catz <Filename/Path>" << std::endl;
    return 0;
}
