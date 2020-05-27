/*Add a parameterized constructor that initializes all the attributes during object creation.*/
/*Create dog objects by calling the parameterized constructor*/
#include<iostream>
#include<string>
using namespace std;
class Dog
{
public:
    int age;
    string name, color, breed;
   
    Dog()
    { cout<<"Dog object created\n"; }


   Dog(int, string, string,string);
    void displayDetails();
    
};

Dog ::  Dog(int age, string name, string color, string breed)
    {
        this-> age = age;
        this-> name = name;
        this-> color = color;
        this-> breed = breed;
    }
void Dog :: displayDetails()
{
    cout<<"age = "<<age<<endl<<"Name = "<<name<<endl<<"color = "<<color<<endl<<"breed = "<<breed<<"\n\n";
}
int main()
{
    Dog();
    Dog dog1(7,"jackie", "white","Dalmation");
    dog1.displayDetails();
    Dog();
    Dog dog2(4,  "Pluto", "Brown", "Beagle");
    dog2.displayDetails();

    return 0;
}
