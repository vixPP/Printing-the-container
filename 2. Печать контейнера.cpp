#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <algorithm>

template<typename T>
void print_container(const T& container)
{
    bool first = true;
    for (const auto& item : container)
    {
        if (!first)
        {
            std::cout << ", ";
        }

        std::cout << item;
        first = false;
    }
    std::cout << std::endl;
}


int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); 

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); 

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);

    return 0;
}