//
// Created by LENOVO 3 on 10/13/2020.
//

#ifndef LAB6_PERSON_H
#define LAB6_PERSON_H

#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

class person {
private:
    string name;
    int money;
public:
    void set(string, int);
    int getMoney();
    void print();
    person(string="",int=0);

};


#endif //LAB6_PERSON_H
