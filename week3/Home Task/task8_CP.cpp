#include<iostream>
using namespace std;

 main () {

 float vegetable_per, fruit_per;
 int total_veg,total_fruit;
 float rupee=1.94;
 cout<<"Enter vegetable price per kilogram (in coins): ";
 cin>>vegetable_per;
 cout<<"Enter fruit price per kilogram (in coins): ";
 cin>>fruit_per;
 cout<<"Enter total kilograms of vegetabes: ";
 cin>>total_veg;
 cout<<"Enter total kilograms of fruits: ";
 cin>>total_fruit;
 float veg=(vegetable_per*total_veg)/rupee;
 float fruit=(fruit_per*total_fruit)/rupee;
 float earning=veg+fruit;
 cout<<"Total earnings in Rupees (Rps): "<<earning;

}