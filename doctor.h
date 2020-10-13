//
// Created by LENOVO 3 on 10/13/2020.
//

#ifndef LAB6_DOCTOR_H
#define LAB6_DOCTOR_H

#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

class doctor: public person{
private:
    patient x [20];
    int numberOfPatients,totalCost;
public:
    void set(string,int,int);
    void print ();
    doctor(int=0,int=0);
};


#endif //LAB6_DOCTOR_H
