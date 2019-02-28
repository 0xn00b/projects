#include <iostream>
#include <cmath>

int main() {
int a;
int b;
int c;
double root1;
double root2;
std::cout << "Enter a: ";
std::cin >> a;
std::cout << "Enter b: ";  
std::cin >> b;  
std::cout << "Enter c: "; 
std::cin >> c;  
root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
std::cout << "Root 1 is "<<root1 <<"\n";

  std::cout << "Root 2 is "<<root2 <<"\n";
}