#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Book
{
    int id;
    char name[50];
    char author[50];
    char publishers[50];
    char genre[50];
    int year;
    float price;


    void SaveToFile()
    {

        ofstream out("library.txt", ios_base::app);
        out << id;
        out << ":";
        out << name;
        out << ":";
        out << author;
        out << ":";
        out << publishers;
        out << ":";
        out << genre;
        out << ":";
        out << year;
        out << ":";
        out << price;
        out << "|";
        out.close();

    }
    void Show()
    {
        cout << "Id: " << id << " Name: " << name << " Author: " << author << "Publishers: "<<publishers<<"Genre: "<<genre<<"Year: "<<year<<"Price: "<<price<<endl;
    }
    void FillFromFile(int idF, char* nameF, char* authorF, char* publishersF, char* genreF, int yearF, float priceF)
    {
        id = idF;
        strcpy_s(name, 50,nameF);
        strcpy_s(author, 50,authorF);
        strcpy_s(publishers, 50,publishersF);
        strcpy_s(genre, 50,genreF);
        year = yearF;
        price = priceF;

    }
    void Copy(Book h)
    {
        id = h.id;
        strcpy_s(name, 50,h.name);
        strcpy_s(author, 50,h.author);
        strcpy_s(publishers, 50,h.publishers);
        strcpy_s(genre, 50,h.genre);
        year = h.year;
        price = h.price;
    }
};

void ShowBooks(Book* h, int size)
{
    for (int i = 0; i < size; i++)
    {
        h[i].Show();
    }
}

void ShowBook(Book& book)
{
    cout << "Id: " << book.id << endl;
    cout << "Name: " << book.name << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publishers: " << book.publishers << endl;
    cout << "Genre: " << book.genre << endl;
    cout << "year: " << book.year << endl;
    cout << "Price: $" << book.price << endl << endl;
}

Book* AddNewBook(Book* book, int* size, Book newBook)
{
    Book* temp = new Book[*size + 1];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = book[i];
    }
    temp[*size] = newBook;
    temp[*size].SaveToFile();
    delete[]book;
    (*size)++;
    return temp;
}

Book* DeleteBookById(Book* arr, int* size, int id)
{
    int j = 0;
    Book* temp = new Book[*size - 1];
    for (int i = 0; i < *size; i++)
    {
        if (arr[i].id == id)
        {
            continue;
        }
        temp[j] = arr[i];
        j++;


    }
    delete[]arr;
    (*size)--;
    return temp;

}

void ChangePrice(Book* arr, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].id == id)
        {
            ShowBook(arr[i]);
            cout << "Enter new price: ";
            cin >> arr[i].price;
        }
    }
}

void SearchByAuthor(char author[], Book* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].author, author) == 0)
        {
            ShowBook(arr[i]);
        }
    }
}
void SearchByName(char name[], Book* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            ShowBook(arr[i]);
        }
    }
}
void SearchByPublishers(char publishers[], Book* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].publishers, publishers) == 0)
        {
            ShowBook(arr[i]);
        }
    }
}
void SearchByGenre(char genre[], Book* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].genre, genre) == 0)
        {
            ShowBook(arr[i]);
        }
    }
}

void ReadFromFile(Book*& arr, int& size)
{
    ifstream in("library.txt");

    if (!in)
    {
        cout << "File not found!" << endl;
        return;
    }

    delete[] arr;
    arr = nullptr;
    size = 0;

    char bid[50];
    char bname[50];
    char bauthor[50];
    char bpublishers[50];
    char bgenre[50];
    char byear[50];
    char bprice[50];

    while (in.getline(bid, 50, ':'))
    {
        in.getline(bname, 50, ':');
        in.getline(bauthor, 50, ':');
        in.getline(bpublishers, 50, ':');
        in.getline(bgenre, 50, ':');
        in.getline(byear, 50, ':');
        in.getline(bprice, 50, '|');

        int id = atoi(bid);
        int year = atoi(byear);
        float price = atof(bprice);

        Book readBook;
        readBook.FillFromFile(id,bname,bauthor,bpublishers,bgenre,year,price);

        Book* temp = new Book[size + 1];

        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }

        temp[size] = readBook;

        delete[] arr;
        arr = temp;

        size++;
    }

    in.close();
}



int main()
{
    int choice;
    char name[50];
    int id;
    char author[50];
    char publishers[50];
    char genre[50];
    int year;
    
    int size = 10;
    Book* arr = new Book[size]{
        {1, "Kobzar", "Taras Shevchenko", "Osnovy", "Poetry", 1840, 250},
        {2, "1984", "George Orwell", "Secker", "Dystopia", 1949, 320},
        {3, "Dune", "Frank Herbert", "Chilton", "Science Fiction", 1965, 450},
        {4, "Dracula", "Bram Stoker", "Archibald", "Horror", 1897, 280},
        {5, "Hamlet", "William Shakespeare", "Penguin", "Tragedy", 1603, 200},
        {6, "The Hobbit", "J.R.R. Tolkien", "Allen & Unwin", "Fantasy", 1937, 400},
        {7, "It", "Stephen King", "Viking", "Horror", 1986, 500},
        {8, "The Alchemist", "Paulo Coelho", "HarperCollins", "Novel", 1988, 350},
        {9, "The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "Classic", 1925, 300},
        {10, "Harry Potter", "J.K. Rowling", "Bloomsbury", "Fantasy", 1997, 550}
    };
    do
    {
        system("cls");
        cout << "-------------------- Menu ----------------------" << endl;
        cout << "Edit price                                   [1]" << endl;
        cout << "Print all books                              [2]" << endl;
        cout << "Search by author                             [3]" << endl;
        cout << "Search by name                               [4]" << endl;
        cout << "Search by publishers                         [5]" << endl;
        cout << "Search by genre                              [6]" << endl;
        cout << "Add book                                     [7]" << endl;
        cout << "Delete book                                  [8]" << endl;
        cout << "Read file                                    [9]" << endl;
        cout << "Exit                                         [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a nice day" << endl;
            break;
        case 1:
            
            cout << "Enter book's id: ";
            cin >> id;
            ChangePrice(arr, size, id);
            break;
        case 2:
            for (int i = 0; i < size; i++)
            {
                ShowBook(arr[i]);
            }
            break;
        case 3:
            cout << "Enter book's author: ";
            cin.getline(name, 50);
            SearchByAuthor(name, arr, size);
            break;
        case 4:
            cout << "Enter book's name: ";
            cin.getline(name, 50);
            SearchByName(name, arr, size);
            break;
        case 5:
            cout << "Enter book's publishers: ";
            cin.getline(name, 50);
            SearchByPublishers(name, arr, size);
            break;
        case 6:
            cout << "Enter book's genre: ";
            cin.getline(name, 50);
            SearchByGenre(name, arr, size);
            break;
        case 7:
			Book newBook;
            cout << "Enter id: ";cin >> newBook.id;
            cin.ignore();
            cout << "Enter name: ";cin.getline(newBook.name, 50);
            cout << "Enter author: ";cin.getline(newBook.author, 50);
            cout << "Enter publishers: ";cin.getline(newBook.publishers, 50);
            cout << "Enter genre: ";cin.getline(newBook.genre, 50);
            cout << "Enter year: ";cin >> newBook.year;
            cout << "Enter price: ";cin >> newBook.price;
            arr = AddNewBook(arr, &size, newBook);
            break;
        case 8:
            int ID;
            cout << "Enter id for delete: ";
            cin >> ID;
            arr = DeleteBookById(arr, &size, ID);
            break;
        case 9:
            ReadFromFile(arr, size);
            cout << "Books read from file!" << endl;
            for (int i = 0; i < size; i++)
            {
                ShowBook(arr[i]);
            }

            break;
        default:
            cout << "Error choice" << endl;
            break;
        }
        if (choice != 0)
        {
            cout << "Press any key......";
            _getch();
        }


    } while (choice != 0);






    delete[]arr;
}
