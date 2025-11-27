#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

/*
1. Need to crate a class for Bike details
2.set on road price (price + GST )
3.set off_road price (price)
4.get onroadprice
5.get offroadprice
6.calculate GST


*/

class bike{

// Declaring Data  Memebers
private:
 char name[20];
 char modelname[40];
 int year;
 int offroad_price;
 int onroad_price;
 int Gst;
 
// Declaring Memeber function
//cretae cosntuctor
public:
bike(){
 
 strcpy(this->name,"");
 strcpy(this->modelname,"");
 this->year = 0; 
 this->offroad_price = 0;
 this->offroad_price = 0;
 this->Gst=0;

}

// Actual condtructor
bike(char *arr , char *mod ,int y,int p,int g){
 
 strcpy(this->name, arr); 
 strcpy(this->modelname,mod);
 this->year = y; 
 this->offroad_price= p;
 this->Gst=g;

}

void set_onroadprice(int price , int gst)
{

    this->offroad_price = price+ gst;
}

void set_offroadprice (int price)
{

    this->offroad_price = price;
}


int get_onroadprice()
{
 
  return onroad_price;

}
int get_offroadprice()
{
 
  return offroad_price;

}

void set_gst(int p)
{

    this->Gst = (offroad_price* 0.18);
}
int get_gst()
{

   return Gst;
}

};

// creating Objects
int main()
{
    // created object on the class bike
bike b1("Royal","Hunter",2014,1500000,0);

b1.set_offroadprice(1500000);
b1.set_gst(1500000);
b1.set_onroadprice(1500000, b1.get_gst()); 

cout<<b1.get_onroadprice()<<endl;
cout<<b1.get_offroadprice()<<endl;

return 0;

}