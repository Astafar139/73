#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <fstream>


using std::cin; using std::cout; using std::endl; using std::cerr; using std::string;

class students {
public:
    string set_str(string* a) {
        srand(time(0));
        return a[rand() % 10];
   }
    int set_int(int* a) {
        srand(time(0));
        return a[rand() % 10];
    }
    students(){
        lastname = set_str(lnames);
        firstname = set_str(fnames);
        fathername = set_str(fanames);
        oldYear = set_int(olders);
        powerful = set_int(powers);
    }

private:
    string lastname;//фамилия
    string firstname;//имя
    string fathername;//отчество
    int oldYear;//возраст(в годах)
    int powerful;//успеваемость

    string lnames[10] = { "Аксеенко","Хомяков","Новиков","Семенов","Николаев","Никитин","Смирнов","Орлов","Андреев","Соколов" };
    string fnames[10] = { "Георгий","Виктор","Владислав","Тимофей","Илья","Кирилл","Максим","Александр","Глеб","Евгений" };
    string fanames[10] = { "Анатольевич","Евгеньевич","Валентинович","Викторович","Александрович","Григорьевич","Николаевич","Юрьевич","Филиппович","Павлович" };
    int olders[10] = { 18, 19, 21, 20, 18, 18, 19, 20, 18,19 };
    int powers[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
};




int main()
{
    setlocale(LC_ALL, "Russian");
}
