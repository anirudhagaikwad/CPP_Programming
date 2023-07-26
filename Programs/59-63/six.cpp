/*

Apply the inheritance mechanism to depict the relationship in real world through Animals, Mammals, Herbivorous ans Cow.

*/

#include <iostream>

using namespace std;

class Animals // indicates class A

{

public:

Animals()

    {

cout<< "This is an animal\n";

    }

};

class Mammals: public Animals // indicates class B derived from class A

{

public:

Mammals()

    {

cout<< "This is a mammal\n";

    }

};

class Herbivores  // indicates class C

{

public:

Herbivores()

    {

cout<< "This is a herbivore\n";

    }

};

class Cow: public Mammals, public Herbivores

 // indicates class D derived from class B and class C

{

public:

Cow()

    {

cout<< "A cow is a herbivore mammal\n";

    }

};

int main() {

    Cow c;

    return 0;

}

/*
Class A as Animal Class, Class B as Mammals, Class C as Herbivores, Class D as Cow.
Mammals can be derived from Animal class, and Cow is a combination of Herbivores and Mammals.
This relationship well defines the combination of Multiple Inheritance and Single Inheritance.

*/




