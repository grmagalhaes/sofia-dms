#include <string>
using namespace std;

namespace Sofia {
	
  class Document {
	  private:
	  long id;
	  string name;
	  string revision;
	  
	  public:	  
	  long getID();
	  void setID(long id);
	  
	  Document();
	  Document(string name, string revision);	  
      ~Document();
	  
	  string getName();
	  void setName(string name);
	  
	  string getRevision();
	  void setRevision(string revision);
	  
	  long create();
	  void read();	  
	  void update();
      void remove();
  };
  
}  



