#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "string.h"

class Employee
{
    friend std::ostream& operator<<(std::ostream& out, const Employee& rhs);
    private:
        int id_;
        String name_;
        const Employee *pManager_;

        Employee(const Employee& rhs);                  //is not use
        Employee& operator=(const Employee& rhs);       //is not use

    public:
        Employee(int id, String name, const Employee *p);
        // Employee() {}
        // Employee(const Employee& rhs) {/* memberwise copy */}
        // ~Employee() {}
        // Employee& operator=(const Employee& rhs) {/* memberwise copy */ return *this}

        // Employee* operator&() {return this;}
        // const Employee* operator&() const 

        int getId() const;
        String getName() const;
        const Employee *getPManager() const;
};

#endif