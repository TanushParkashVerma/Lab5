//
// Created by tanus on 2019-10-18.
//

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

#include <stack>
#include "abstract_operation.hpp"

using namespace std;


/*rpn_calculator class*/
class rpn_calculator {
private:

    /*int result*/
    int result;

    /*variable of type stack*/
    stack<int> cal;

    /*operation_type function*/
    abstract_operation *operation_type(char operand);

    /*perform function*/
    void perform(abstract_operation *opp);

public:
    /*process_form function*/
    int process_form(string arithmetic);
};


#endif //LAB5_RPN_CALCULATOR_HPP
