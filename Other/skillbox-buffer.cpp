#include <iostream>

int main()
{
   char buffer [5];
   sprintf(buffer, "%.3f",3.144);
   std::cout << "buffer: " << buffer << std::endl;
   return 0;
}