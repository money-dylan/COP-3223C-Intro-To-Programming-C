//Dylan Money
//Dr.Steinberg
//COP3223C Section 1
//Small Program 2


          ////////             /////////
          ////////             /////////
          ////////             /////////
          ////////             /////////

      /////                           /////
      /////                           /////
          /////                  /////
          /////////          /////////
              ///////////////////
              //////////////////


#include <stdio.h>
#include <math.h>

  double coneSurfaceArea();
  double parkingCharge();
  double halaPopulation();
  double factorialApprox();

  int main()
  {
   
   coneSurfaceArea(); 
   
   parkingCharge();
   
  halaPopulation();
  
  factorialApprox();
  
    return 0;
  }
  
  double coneSurfaceArea()
  {
    double radius;
    double height;
    double pi = 3.14;
    
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    printf("Enter the height: ");
    scanf("%lf", &height);
    
    double total = pi * radius * (radius + sqrt((height * height) + (radius * radius)));
    
    printf("The total surface area of the cone is %.2lf\n", total);
    
    return 0;
  }
    
  double parkingCharge()
  {
    int hours;
    
    printf("Welcome to the Parking Garage!\n");
    printf("How many hours will you keep your car parked here> ");
    scanf("%d", &hours);
    
    double total = 1.73 * hours;
    
    printf("Car will be parked for %d", hours);
    printf( " hours and will be charged $%.2lf", total);
    printf(".\n");
    
    return 0;
    
  }
  
  double halaPopulation ()
  {
  
    int year;
    
    printf("Enter a year after 1990: ");
    
    scanf("%d", &year);
    
    int newYear = year - 1990;
    
    double total = 60.236 + 2.247 * newYear;
    
    printf("Predicted Hala's population for %d", year);
    printf(" (in thousands): %.3lf\n", total);
  
    return 0;
  
  }
  
  double factorialApprox ()
  {
    int num;
    double pi = 3.14;
    
    printf("Enter the value for n: ");
    scanf("%d", &num);
    
    double factorial = pow(num, num) * exp(-num) * sqrt((2 * num + ((double)1/3))* pi);
    
    printf("%d", num);
    printf("! is approximately %.4lf\n", factorial);
  
  return 0;
  
  }