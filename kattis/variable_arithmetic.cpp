#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

int main()
{
    std::string input;

    while(std::cin >> input && input != "0")
    {
        std::istringstream iss(input);
        std::vector<std::string> results(std::istream_iterator<std::string>{iss},
                                         std::istream_iterator<std::string>());
        for(auto item:results) std::cout << item << "\n";
    }
}
