#include <iostream>
#include <set>

int main()
{
    std::set<int> modulos;

    for(int i=1; i<=10; i++)
    {
        int input = 0;
        std::cin >> input;
        
        modulos.insert(input%42);
    }

    std::cout << modulos.size();
}
