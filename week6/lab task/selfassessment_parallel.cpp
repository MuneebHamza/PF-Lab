#include<iostream>
using namespace std;
main () {
    string pasta[5]={"Mild","Medium","Sweet","Hot","Zesty"};
    int sold[5];
    int i;
    int sum=0;
    for( i=0; i<5;i++){
        cout<<"Enter number of pasta Sold("<<pasta[i]<<"): ";
        cin>>sold[i];
        sum=sum+sold[i];
    }
    cout<<"Pasta"<<" \t "<<"Sold"<<endl;
    for( i=0; i<5; i++){
        cout<<pasta[i]<< "\t "<<sold[i]<<endl;
    }
    cout<<"Total"<<" \t "<<sum<<endl;
    string highest_name=pasta[0];
    int highest_sale=sold[0];
    string lowest_name=pasta[0];
    int lowest_sold=sold[0];
    for(i=1; i<5; i++){
        if(sold[i]>highest_sale){
            highest_sale=sold[i];
            highest_name=pasta[i];
        }
        if(sold[i]<lowest_sold){
            lowest_sold=sold[i];
            lowest_name=pasta[i];
        }
    }
     cout<<"Highest Selling Prduct: "<<highest_name<<endl;
     cout<<"Lowest Selling Prduct: "<<lowest_name<<endl;
}