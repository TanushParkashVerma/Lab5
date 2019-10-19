//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP


#include <iostream>
#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation {
public:

    /*char SUBTRACTION_CODE*/
    static const char SUBTRACTION_CODE = '-';


    /*ZERO constructor*/
    subtraction_operation(char c) : abstract_operation(c) {

    };


    /*perform function implementation*/
    int perform(int x, int y) override {
        return x - y;
    }


    /*destructor*/
    virtual ~subtraction_operation() {
        cout << "Subtraction Destructor" << endl;
    }

};


#endif //LAB5_SUBTRACTION_OPERATION_HPP
