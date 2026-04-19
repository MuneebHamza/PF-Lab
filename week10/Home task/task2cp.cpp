#include<iostream>
#include<iomanip>
using namespace std;

  double pyramid(int length, int width, int height){
    int volume = length*width*height;
    return volume/3.0;
  }
  void convert(double volume, string output){

    cout << fixed;
    if(output=="millimeters"){
        cout<<"Volume: "<<volume*1000*1000*1000<<" cubic millimeters";
    }
    else if(output=="centimeters"){
        cout<<"Volume: "<<volume*100*100*100<<" cubic centimeters";
    }
    else if(output=="meters"){
        cout<<"Volume: "<<volume<<" cubic meters";
    }
    else if(output=="kilometers"){
        cout<<"Volume: "<<(volume/1000/1000/1000)<<" cubic kilometers";
    }
  }

int main(){
    int length, width, height;
    cout<<"Enter length, width and height (in meters): ";
    cin>>length>>width>>height;
    string output;
    cout<<"Enter output unit (milimeters, centimeters, meters, kilometers): ";
    cin>>output;
    double volume = pyramid(length, width, height);
    convert(volume, output);
    return 0;
}