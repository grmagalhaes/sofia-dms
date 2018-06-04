#include <string>
using namespace std;

namespace Sofia {
	
  long Folder::getID() {
	  return this->valor;
  };

  void Folder::setID(long valor) {
	  this->valor = valor;
  };
  
  string Folder::getName() {
	  return name;
  }
  
  void Folder::setName(string name) {
	  this->name = name;
  }

}  


