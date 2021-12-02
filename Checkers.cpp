#include <iostream>
#include "checkers.h"


int main(){
   Checkers obj;
   obj.set_board();
   obj.view();
while(true){
   std::cout<<std::endl;
   std::cout<<"White Turn"<<std::endl;
   obj.move();
   obj.view();
   std::cout<<std::endl;
   std::cout<<"Black Turn"<<std::endl;
   obj.move();
   obj.view();

    
}
}


