//
// Created by LENOVO 3 on 10/13/2020.
//

#ifndef LAB6_PATIENT_H
#define LAB6_PATIENT_H

#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

class patient {
private:
    string name;
    int durationOfTreatment,TreatmentCost;
public:
    void set();
    int getCost();
    int getDuration();
    void print();
    patient(string=" ",int=0,int=0);
};


#endif //LAB6_PATIENT_H
