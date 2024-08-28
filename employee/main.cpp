#include "employee.h"

int main()
{
    const Employee e1(1, "Park Jung Seok", NULL);
    const Employee e2(2, "Sung Young Ho", &e1);
    const Employee e3(3, "Cho Min Sung", &e1);
    const Employee e4(4, "Park Jung Hun", &e3);
    const Employee e5(5, "Kang Min Su", &e3);
    const Employee e6(6, "Lee Jin Woo", &e3);

    //Employee e; X
    //Employee e7 = e1; X
    //e1 = e2; X

    std::cout << e1 << std::endl;
    std::cout << e2 << std::endl;
    std::cout << e3 << std::endl;
    std::cout << e4 << std::endl;
    std::cout << e5 << std::endl;
    std::cout << e6 << std::endl;


    return 0;
}