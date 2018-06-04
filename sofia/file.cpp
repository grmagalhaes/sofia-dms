#include <string>
using namespace std;

namespace Sofia {
	
  long File::getID() {
	  return this->valor;
  };

  void File::setID(long valor) {
	  this->valor = valor;
  };
  
  string File::getName() {
	  return name;
  }
  
  void File::setName(string name) {
	  this->name = name;
  }

}  


