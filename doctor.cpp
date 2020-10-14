//
// Created by LENOVO 3 on 10/13/2020.
//
#include <iostream>
#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

void doctor::set(string name,int money,int nof){
    numberOfPatients=nof;
    x = new patient[nof];
    ((person*)(this))->set(name, money);
    //static_cast<person*>(this)->set(name,money)
    for(int i=0;i<nof;i++){
        cout<<"Enter the name, duration and cost of treatment "<<i+1<<": ";
        cin>>x[i].set();
        cout<<endl;
    }

}
void doctor::calculatetotal() {
    totalCost=0;
    for(int i=0;i<numberOfPatients;i++){
        totalCost+=x[i].TreatmentCost*x[i].durationOfTreatment;
    }
}
doctor::doctor(string n,int m, int nof){
    numberOfPatients=nof;
///need to add

    }
void doctor::print(){
    cout<<endl;
    ((person*)(this))->print();
    for(int i=0;i<numberOfPatients;i++)
        x[i].print();
    calculatetotal();
    cout<<"The total cost of the "<<numberOfPatients<<" is "<<totalCost<<endl;
    cout<<"The overall total money is "<<totalCost+person::getMoney();
}
