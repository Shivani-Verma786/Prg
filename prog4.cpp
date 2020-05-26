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
    Dog();

   Dog(int, string, string,string);
    void displayDetails();
};
 Dog :: Dog()
    { cout<<"Dog object created\n"; }

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
    Dog dog1(7,"jackie", "white","gold");
    dog1.displayDetails();

    Dog dog2(4, "Beagle", "Brown", "Pluto");
    dog2.displayDetails();

    return 0;
}
