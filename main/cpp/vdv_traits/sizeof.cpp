/**
 * @file.
 *
 * @author J. Broeckhove - see copyright.txt
 */

#include <iostream>
#include <cstddef>

template <typename T>
class TypeSize
{
public:
        static size_t const value = sizeof(T);
};

int main()
{
        std::cout << "TypeSize<int>::value = " << TypeSize<int>::value << std::endl;
        return 0;
}
