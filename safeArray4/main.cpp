#include <iostream>
#include "safeArray.h"
#include "invalidIndex.h"

int main(){
    int num1[] = {1, 2, 3, 4, 5};
    SafeArray<int> arr1(num1, 5);

    try
    {
        arr1[-1] = 1;
    }
    catch(const InvalidIndex& e)
    {
        std::cerr << "invalid Index : " << e.getIndex() << std::endl;
    }

    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr1[i] << std::endl;
    }

    
    double nums2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    SafeArray<double> arr2(nums2, 5);

    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr2[i] << std::endl;
    }
    
    
    return 0;
}