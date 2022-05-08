#include<bits/stdc++.h>

using namespace std;

    class inheritane{ //Base class
    private:
        int noOfWheels;
        string brand="Ford";
    public:
        string model;

        void set_noofwheels(int a){
            noOfWheels=a;
        }
        int get_noofwheels(){
            return noOfWheels;
        }
        inheritane(string m){
            model=m;
        };
    
        inheritane(){};
    };
    
//Derived class
    class c1 : public inheritane
    {
    private:
        int carID;
    public:
        string color;
        // c1(){}; //no default constructors for a inherited class

        void set_carID(int p){
            carID=p;
        }
        int get_carID(){
            return carID;
        }

    };
    

int main()
{

    inheritane v;
    v.set_noofwheels(4);
    v.model="Q6";

    c1 myC ;
    myC.color="Black";
    myC.set_noofwheels(4);
    myC.model="q6";
    myC.set_carID(4565);
    cout<<myC.get_noofwheels();
    cout<<" "+myC.model+" "+myC.color+" ";
    cout<<myC.get_carID();

return 0;
}

/*

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Lets Start  \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
} 

*/