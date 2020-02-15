#include <iostream>
/***********Three ways to iterate through arrays ************/

int main() {
  std::string words[] = {"Huckleberry_P", "Reddy", "Paloalto"};

  for(int i = 0; i < sizeof(words)/sizeof(std::string); i++){
    std::cout << words[i] << " " << std::flush;
  }

  std::cout << std::endl;

  std::string* pElement = words;

  for(int i = 0; i < sizeof(words)/sizeof(std::string); i++, pElement++){
    std::cout << *pElement << " " << std::flush;
  }

  std::cout << std::endl;

  std::string* pFirstElement = words;
  std::string* pLastElement = &words[2];

  while(true){
    std::cout << *pFirstElement << " " << std::flush;
    if(pFirstElement == pLastElement){
      break;
    }
    pFirstElement++;

  }
}