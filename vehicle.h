#include <iostream>
using namespace std;

class Vehicle{

  private:
    int year;
    string make;
    string model;
    string color;
    int daysOnLot;
    int initialPrice;
    string vin;
    

  public:
    void setYear(int userYear);
    void setMake(int userMake);
    void setModel(int userModel);
    void setColor(int userColor);
    void setDays(int userDys);
    void setPrice(int userPrice);
    void setVin(int userVin);
    int getPrice();
    int getYear();
    int getDays();
    string getMake();
    string getModel();
    string getColor();
    string getVin();
    void PrintVehicle();
    void SearchByMake(string make);
    void SearchByColor(string color);
    void SearchByYear(int year);
    void SearchByDaysOnLot(int days);
    
    
  
  
};// end vehicle
