//
// Created by tanus on 2019-10-18.
//

#include <sstream>
#include "rpn_calculator.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"


using namespace std;


/*operation_type function*/
abstract_operation *rpn_calculator::operation_type(char operand) {
    switch (operand) {
        case addition_operation::ADDITION_CODE:
            return new addition_operation(addition_operation::ADDITION_CODE);
        case subtraction_operation::SUBTRACTION_CODE:
            return new subtraction_operation(subtraction_operation::SUBTRACTION_CODE);
        case multiplication_operation::MULTIPLICATION_CODE:
            return new multiplication_operation(multiplication_operation::MULTIPLICATION_CODE);
        case division_operation::DIVISION_CODE :
            return new division_operation(division_operation::DIVISION_CODE);
        default:
            cerr << "error" << endl;
            return NULL;
    }
}


/*perform function*/
void rpn_calculator::perform(abstract_operation *opp) {
    int secondNum = cal.top();
    cal.pop();
    int firstNum = cal.top();
    cal.pop();
    int finalResult = opp->perform(firstNum, secondNum);
    cal.push(finalResult);

}

/*process_form function*/
int rpn_calculator::process_form(string arithmetic) {
    int n;
    istringstream iss(arithmetic);
    while (!iss.eof()) {
        string operand;
        iss >> operand;
        istringstream iss2(operand);
        if (iss2 >> n) {
            cout << n << endl;
            cal.push(n);
        } else {
            perform(operation_type(operand[0]));
        }

    }
    result = cal.top();
    return result;
}

