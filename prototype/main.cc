#include <iostream>
#include <algorithm>

using namespace std;

const int N = 3;

class Document {
public:
   virtual Document* clone() const = 0;
   virtual void store() const = 0;
};

class xmlDoc : public Document {
public:
   Document* clone() const { return new xmlDoc; }
   void store() const { cout << "xmlDoc\n"; }
};

class plainDoc : public Document{
public:
   Document* clone() const { return new plainDoc; }
   void store() const { cout << "plainDoc\n"; }
};

class spreadsheetDoc : public Document{
public:
   Document* clone() const { return new spreadsheetDoc; }
   void store() const { cout << "spreadsheetDoc\n"; }
};

class DocumentManager {
public:
   static Document* makeDocument( int choice ){
      return mDocTypes[choice]->clone();
   }
private:
   static Document* mDocTypes[N];
};

Document* DocumentManager::mDocTypes[] = { new xmlDoc, new plainDoc, new spreadsheetDoc };

int main() {
   int choice;
   cout << "xml(0), plain(1), spreadsheet(2): \n";

   cin >> choice;
   if(choice < N){
      Document *docs = DocumentManager::makeDocument( choice );
      docs->store();
   }

   return 0;
}
