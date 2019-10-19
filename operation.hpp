//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP


#include <iostream>

using namespace std;

/*interface called operation*/
class operation {
public:

    /*get_code function*/
    virtual char get_code() = 0;


    /*get_code function*/
    virtual int perform(int a, int b) = 0;


    /*destructor*/
    virtual ~operation() {
        cout << "OPERATION DESTRCUCTOR" << endl;
    };
};


#endif //LAB5_OPERATION_HPP
