#include <fstream>
#include <iostream>

int main()
{
  std::ifstream note;
  note.open("C:\\Users\\user\\OneDrive\\Рабочий стол\\Note.txt");

  int num;
  std::string str;

  note >> num >> str;
  std::cout << num << " " << str << std::endl;

  note >> num >> str;
  std::cout << num << " " << str << std::endl;

  note >> num >> str;
  std::cout << num << " " << str << std::endl;

  note.close();
}