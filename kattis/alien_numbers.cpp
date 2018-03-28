#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <math.h>

int to_dec(std::string number, std::string language)
{
    int row = number.length() - 1;
    int language_base = language.length();
    int result = 0;
    for(char ch : number)
    {
        result += pow(language_base,row) * (language.find(ch));
        row --;
    }
    return result;
}

std::string to_language(int number, std::string language)
{
    std::string result;
    int language_base = language.length();
    int mod = number % language_base;
    if(number != 1)
    {
        number /= language_base;
        if(number != 0)
            result.append(to_language(number, language));
    }
    result.push_back(language.at(mod));

    return result; 
}

int main()
{
    int cases;
    std::cin >> cases;

    for(int i = 1; i<= cases; i++)
    {
        std::string alien_number,
                    source_language,
                    target_language;
        std::cin >> std::skipws >> alien_number >> source_language >> target_language;

        int source_base = source_language.length();
        int target_base = target_language.length();

        int number = to_dec(alien_number, source_language);

        std::cout << "Case #" << i << ": " << to_language(number, target_language) << "\n";
    }
}

