//inventory.h

#def _INVENTORY_H_
#indef _INVENTORY_H_


#include <inventory.h>
#include <book.h>

#include <vector>

class inventory{
    
    private:
        //vector reffering to the class Book from book.h
        vector<Book> list;
    
        //any variables needed
        
    public:
        //consructor
        inventory();
        //deconstructor
        ~inventory();
    
        bool inventory::TitleCompare(book i, book j)
        void addBook(book obj);
        bool orderBook(string title);
        void sellStock(string title);
        void lowOnHandAlert();
        void display();

    };

#endif
