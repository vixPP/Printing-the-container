#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <algorithm>

template<typename T>
void print_container(const T& container, const std::string& delimiter, std::ostream& os = std::cout)
{
    std::copy(std::begin(container), std::end(container), std::ostream_iterator<typename T::value_type>));
    os << std::endl;
}


int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set, ", ");

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list, ", ");

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector, ", ");

    return 0;
}