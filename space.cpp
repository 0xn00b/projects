#include <iostream>

int main() {
  
  
  std::cout << "Please enter your earthian weight: ";
  int bitchi;
  double eweight;
  std::cin >> eweight; 
  std::cout << "please enter the planet code: "; 
  std::cin >> bitchi;
  switch (bitchi)
  {
      case 1:
          std::cout << eweight*0.78;
          break;
      case 2 :
      std::cout << eweight*0.39;
      break;
      
      
       case 3:
      std::cout << eweight*2.65;
      
      break;
        case 4:
      std::cout << eweight*1.17;
        break;
        
        case  5: 
      std::cout << eweight*1.05;
      break;
      
      case 6:
      std::cout << eweight*1.23;
      break;
      
       default:
          break;
  }
  
  
  
  
  
  
  
  
  
  
}