#include<bits/stdc++.h>
using namespace std;
 class car {
    public:
        string Name;
        string Model;
        int Year;
        double Price;

     void displayCar() {   // you can also create this function outside this class and pass the object as a parameter to that function.
        cout << "Car Name: " << Name << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
        cout << "Price: $" << Price << endl;
        cout << "------------------------" << endl;
        }  
    };
    

int main(){
    car c1;
    c1.Name = "Toyota";
    c1.Model = "Corolla";
    c1.Year = 2020;
    c1.Price = 20000.0;
    
    car c2;
    c2.Name = "Honda";
    c2.Model = "Civic";
    c2.Year = 2021;
    c2.Price = 22000.0;

    car c3;
    c3.Name = "Ford";
    c3.Model = "Mustang";
    c3.Year = 2022;
    c3.Price = 30000.0;
     
    // Function to display car details
    // Display details of each car
    c1.displayCar();                                         // displaycar(c1); // display details of each car    // if it was 
    c2.displayCar();                                         // displaycar(c2); // display details of each car    // fun ouside 
    c3.displayCar();                                         // displaycar(c3); // display details of each car    // the class                
    
    // // Display details of each car using a loop
    // car cars[] = {c1, c2, c3};
    // for (int i = 0; i < 3; i++) {
    //     displayCar(cars[i]);
    // }
    // // Display details of each car using a pointer
    // car* carPtr = &c1;
    // cout << "Car Name: " << carPtr->Name << endl;
    // cout << "Model: " << carPtr->Model << endl;
    // cout << "Year: " << carPtr->Year << endl;
    // cout << "Price: $" << carPtr->Price << endl;
    // cout << "------------------------" << endl;
    // carPtr = &c2;
    // cout << "Car Name: " << carPtr->Name << endl;
    // cout << "Model: " << carPtr->Model << endl;
    // cout << "Year: " << carPtr->Year << endl;
    // cout << "Price: $" << carPtr->Price << endl;
    // cout << "------------------------" << endl;
    return 0;
}