//
// Created by frieddv on 12/17/18.
//

#ifndef PROJ1_EQUALTO_H
#define PROJ1_EQUALTO_H


#include "ComparisonCondition.h"

class EqualTo : public ComparisonCondition {
public:

    bool evaluate() {
        return left->calculate() == right->calculate();
    }
};


#endif //PROJ1_EQUALTO_H
