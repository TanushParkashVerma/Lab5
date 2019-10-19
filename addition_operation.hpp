//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP


#include <iostream>
#include "abstract_operation.hpp"

using namespace std;

class addition_operation : public abstract_operation {
public:

    /*char ADDITION_CODE*/
    static const char ADDITION_CODE = '+';

    /*ZERO constructor*/
    addition_operation(char ch) : abstract_operation(ADDITION_CODE) {

    };

    /*perform function implementation*/
    int perform(int a, int b) override {
        return a + b;
    }

    /*destructor*/
    virtual ~addition_operation() {
        cout << "ADDITION DESTRCUCTOR" << endl;
    }
};

#endif //LAB5_ADDITION_OPERATION_HPP
