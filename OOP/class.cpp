#include<bits/stdc++.h>

using namespace std;

class student{ //class

    string name; //attributes

    public:      //access specifier
        // *** Private data member's can be accessed within a class
        // We can access the private data member's within the class 
        // by using methods and we can call that method to print it in main.
    
    int age;     //attributes
    bool gender; //attributes

    student(){

        cout<<"Default Constructor"<<endl;

    };
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    student(string s,int a,bool g){ //constructor 
                        
        //constructor => default method called automatically when a object instance is created
        // or A constructor in C++ is a special method that is automatically called when an object of a class is created.
        
        cout<<"Parameterized Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    bool operator ==(student &a){//operator overloading
        if (name==a.name && age==a.age && gender==a.gender)
        {
            return true;    
        }
        return false;
        

    }
    ~student(){
        cout<<"Destructor"<<endl;
    }
    void setName(string s){
        name=s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){  //Method{function}

        cout<<"Name = "<<name<<endl;

        cout<<"Age = "<<age<<endl;

        cout<<"Gender = "<<gender<<endl;
    }

};


int main()
{
/* 
    //Creating object of student class
    
    student a;// a is object
    a.name ='Shubham';
    a.age =20;
    a.gender=0;
*/
    
/* 
    // To create multiple objects of a class at the same time do it using arrays
    
    string s;
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>s;
        arr[i].setName(s);
        cin>>arr[i].age;
        cin>>arr[i].gender;
    
    }

*/
    //By init constructor 
    student a( "Shubham",20,0);
    a.printInfo();
    student b;
    student c=a;

    // if (c==a) //Same
    if(b==c) //Not Same
    {
        cout<<"Same"<<endl;

    }
    else
    {
        cout<<"Not Same"<<endl;
    }
    
    return 0;
}