#include <iostream>
#include <vector>
#include <algorithm>
  
int main()
{
    std::vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8};
    const auto [min, max] = std::minmax_element(begin(numbers), end(numbers));
    std::cout << "Min: " <<  *min << std::endl;
    std::cout << "Max: " << *max << std::endl;
}