#include <iostream>
using namespace std;

class SaleInfo{

  private:
  int salesByDay;
  int salesByWeek;
  int salesByMonth;

  public:
  void setSalesByDay(int daySales);
  void setSalesByWeek(int weekSales);
  void setSalesByMonth(int monthSales);
  int GetSalesByDay();
  int GetSalesByWeek();
  int GetSalesByMonth();
  void GenerateSales();

  

};// end Sale
