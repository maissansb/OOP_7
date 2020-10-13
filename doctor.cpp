//
// Created by LENOVO 3 on 10/13/2020.
//
#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

void doctor::set(string name,int money,int nof){
    numberOfPatients=nof;
    person::set(name,money);



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
void doctor::print(){

}
