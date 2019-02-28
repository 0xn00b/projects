#include <iostream>
int main(){
  int u;
  std::cout <<"how much FIZZ you want: \n";
  std::cin >> u;
  for (int i=1;i<=u;i++){
    if (i%3==0) {
        std::cout << "Fizz\n";
    }
    else if (i%5==0)
    {
        std::cout << "Buzz\n";
    }
    else if (i%3==0 && i%5==0)
    {
        std::cout << "FizzBuzz\n";
    }
    
    else {
    
    
    
    std::cout <<" " << i << "\n";
    
    }
    
    
    
  }
  
  
  
  
  
  
}