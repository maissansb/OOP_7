//
// Created by LENOVO 3 on 10/13/2020.
//
#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

void doctor::set(string a,int b,int c){
    x.name=a;
    x.durationOfTreatment=b;
    x.TreatmentCost=c;
}
doctor::doctor(int nof, int tc) {
    numberOfPatients=nof;
    totalCost=tc;
    for(int i=0;i<nof;i++){
        x.name[i]=" ";
        x.durationOfTreatment[i]=0;
        x.TreatmentCost[i]=0;
    }
}
