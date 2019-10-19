//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP


#include "abstract_operation.hpp"

using namespace std;

class division_operation : public abstract_operation {
public:

    /*char DIVISION_CODE*/
    static const char DIVISION_CODE = '/';

    /*ZERO constructor*/
    division_operation(char ch) : abstract_operation(DIVISION_CODE) {

    };

    /*perform function implementation*/
    int perform(int a, int b) override {
        return a / b;
    }

    /*destructor*/
    virtual ~division_operation() {
        cout << "DIVISION DESTRCUCTOR" << endl;
    }
};

#endif //LAB5_DIVISION_OPERATION_HPP
