//
// Created by LENOVO 3 on 10/13/2020.
//
#include <iostream>
#include "person.h"
#include "patient.h"
#include "doctor.h"
#include <string>
using namespace std;

void person::set(string n,int m){
    name=n;
    money=m;
}
int person:: getMoney(){
    return money;
}
person::person(string n, int m){
    name=n;
    money=m;
}
void person::print(){
    cout<<name<<" has "<<money<<" dirhams and treated the following patients:";
}
