#include <iostream>
#include <string>

struct Book{
  std::string name;
  std::string author;
  std::string published;
  int pages;
  
  void print(){
    std::cout << name << ' ' << author << ' ' << published << ' ' << pages << '\n';
  }
};

int main()
{
  Book Stalker;
  Stalker.name = "Stalker";
  Stalker.author = "Strugackie";
  Stalker.published = "1978";
  Stalker.pages = 221;

  Stalker.print();
  
  return 0;
}
