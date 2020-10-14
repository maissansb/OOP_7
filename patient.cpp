//
// Created by LENOVO 3 on 10/13/2020.
//
#include <iostream>
#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

void patient::set(){
    cin>>name>>durationOfTreatment>>TreatmentCost;
}
int patient:: getCost(){
    return TreatmentCost;
}
int patient::getDuration() {
    return durationOfTreatment;
}
patient::patient(string n,int d,int c){
    name=n;
    durationOfTreatment=d;
    TreatmentCost=c;
}
void print(){
cout<<name<<" was treated for "<<durationOfTreatment<<" minutes, at a cost "<<TreatmentCost<< " dirham per minute "<<endl;
}
