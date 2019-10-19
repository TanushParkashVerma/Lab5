//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP


#include <iostream>
#include "abstract_operation.hpp"

using namespace std;

class multiplication_operation : public abstract_operation {
public:

    /*char DIVISION_CODE*/
    static const char MULTIPLICATION_CODE = '*';

    /*ZERO constructor*/
    multiplication_operation(char ch) : abstract_operation(MULTIPLICATION_CODE) {

    };

    /*perform function implementation*/
    int perform(int a, int b) override {
        return a * b;
    }

    /*destructor*/
    virtual ~multiplication_operation() {
        cout << "MULTIPLICATION DESTRCUCTOR" << endl;
    }
};


#endif //LAB5_MULTIPLICATION_OPERATION_HPP
