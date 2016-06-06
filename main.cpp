#include <iostream>
#include <stxxl/vector>

int main()
{
    std::cout << "c++ " << __cplusplus << " sizeof(void*) = " << sizeof(void*) << "\n";

    stxxl::vector<unsigned> dummy_vector;
    dummy_vector.push_back(0);
    std::cout << dummy_vector.size() << "  " << dummy_vector[0] << "\n";

    return 0;
}
