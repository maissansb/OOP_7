#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"
#include "doctor.h"

using namespace std;

int main()
{
    doctor Hakeem;

    Hakeem.set("Ali Omar", 3000, 3);
    Hakeem.print();

    return 0;
}

