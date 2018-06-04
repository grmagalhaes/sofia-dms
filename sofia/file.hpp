#include <string>
using namespace std;

namespace Sofia {
	
  class File {
	  long valor;
	  string name;
	  
	  public:	  
	  long getID();
	  void setID(long valor);
	  
	  string getName();
	  void setName(string name);
  };
 
}  



