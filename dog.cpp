#include <iostream>

int main()
{
  double dog_age; 
  std::cout << "FCK";
  std::cin >> dog_age;
  
  
  
  
  double early_years = 21; //the first 2 years of dogs converted to human years
  double later_years = (dog_age-2)*4; // how the dog age is converted to human age after 2 years
  double human_years = early_years + later_years ; //dog age converted to human age the first 2 years + the other years
  if (dog_age < 2) {
    human_years = dog_age * (21/2);
      
  
  }
  


  std::cout << "My name is hax! ruff ruff, I am "<< human_years <<" years old in human years.";








}
