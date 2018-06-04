#include <string>
#include <ctime>
using namespace std;

namespace Sofia {
	
  Document::Document() : id(0), name(""), revision("") { 
    srand(clock());
  };
  
  Document::Document(string name, string revision) : id(0), name(name), revision(revision) {
    srand(clock());
  };
  
  Document::~Document() {}
	
  long Document::getID() {
	  return this->id;
  };

  void Document::setID(long id) {
	  this->id = id;
  };
  
  string Document::getName() {
	  return name;
  }
  
  void Document::setName(string name) {
	  this->name = name;
  }
  
  string Document::getRevision() {
	  return this->revision;
  }
  
  void Document::setRevision(string revision) {
	  this->revision = revision;
  }  
  
  long Document::create() {
	 cout << "Document " << this->name << " [" << this->revision << "] created" << endl;
	 this->id = (long)std::rand;
	 return this->id;
  }
  
  void Document::read() {
	 cout << "Document " << this->name << " [" << this->revision << "] read" << endl;
  }

  void Document::update() {
	 cout << "Document " << this->name << " [" << this->revision << "] updated" << endl;
  }
  
  void Document::remove() {
	 cout << "Document " << this->name << " [" << this->revision << "] deleted" << endl;
  }
  
}  


