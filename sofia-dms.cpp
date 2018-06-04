#include <iostream>
#include "sofia/sofia.hpp"

using namespace std;
using namespace Sofia;

int main(int argc, char *argv[]) {
	
  cout << "====================================" << endl;	
  cout << "Sofia Document Management System 0.1" << endl;
  cout << "by grmagalhaes 2017,18              " << endl;  
  cout << "====================================" << endl;
  cout << "service running..." << endl << endl;    
  
  Folder *folder = new Folder;
  Document *document = new Document;  
  Document *document2 = new Document("I-FD-3010.95-1352-140-TTY-023", "0");    
  File *file = new File;  
  
  folder->setID(39458394);
  folder->setName("TECHNICAL DOCUMENTS");
  
  cout << "FolderID: " << folder->getID() << endl;
  cout << "FolderName: " << folder->getName() << endl << endl;
  
  document->setID(3);
  document->setName("I-MC-3010.95-1352-140-P4X-003");
  document->setRevision("A");
  document->create();
  document->read();
  document->update();
  document->remove();
  
  cout << "DocID: " << document->getID() << endl;
  cout << "DocName: " << document->getName() << endl;
  cout << "DocRevision: " << document->getRevision() << endl << endl;  

  document2->create();  
  cout << "Doc2ID: " << document2->getID() << endl;
  cout << "Doc2Name: " << document2->getName() << endl;
  cout << "Doc2Revision: " << document2->getRevision() << endl; 

  cout << endl;
  
  file->setID(10);
  file->setName("teste.dwg");
  
  cout << "FileID: " << file->getID() << endl;
  cout << "FileName: " << file->getName() << endl;
  
  delete folder;
  delete document;    
  delete document2;
  delete file;
  
  cout << endl << "service shutdown..." << endl;  

  return 0;
}