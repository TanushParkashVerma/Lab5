//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP


#include <iostream>
#include "operation.hpp"

using namespace std;

/*abstract class that implements our operation interface*/
class abstract_operation : public operation {
private:
    char operation_type;

public:

    /*abstract_operation function*/
    abstract_operation(char represent) {
        operation_type=represent;
    }


    /*get_code function*/
    char get_code() {
        return operation_type;
    }

    /*destructor*/
    virtual ~abstract_operation() {
        cout << "ABSTRACT Destructor" << endl;
    }
};

#endif //LAB5_ABSTRACT_OPERATION_HPP
