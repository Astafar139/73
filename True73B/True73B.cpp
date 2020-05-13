#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include "windows.h"

using std::cin; using std::cout; using std::endl; using std::cerr; using std::string;

class students {
public:
    int k = 0;
    string set_str(string* a) {
        srand(time(0));
        k++;
        return a[rand() % 10];
   }
    int set_int(int* a) {
        srand(time(0));
        k++;
        return a[rand() % 10];
    }
    int get_id() {
        return *idPtr;
    }
    string get_lastname() {
        return lastname;
}
    void get_allinfo() {
        cout << lastname << " " << firstname << " " << fathername << " " << oldYear << " " << powerful << " " << kurs <<"\n";
    }
   
    void sort(string* S, int N) {
        for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++) {
            if (strcmp(S[i].c_str(), S[j].c_str()) > 0) swap(S[i], S[j]);
        }
    }
    int set_id() {
        return qw;
    }
    void id_swap(int* a, int* b) {
        int k = *b;
        *b = *a;
        *a = k;
    }
    students(){
        cout << "Генерация имен -->";
        Sleep(1000);
        system("cls");
        srand(time(0));
        lastname = set_str(lnames);
        firstname = set_str(fnames);
        fathername = set_str(fanames);
        oldYear = set_int(olders);
        powerful = set_int(powers);
        kurs = set_int(kursL);
        studentID = set_id(); ++qw;
    }
    ~students(){

    }
    int studentID;
    int* idPtr = &studentID;
private:
    string lastname;//фамилия
    string firstname;//имя
    string fathername;//отчество
    int oldYear;//возраст(в годах)
    int powerful;//успеваемость
    int kurs;//курс :D
    int qw = 0;


    string lnames[10] = { "Аксеенко","Хомяков","Новиков","Семенов","Николаев","Никитин","Смирнов","Орлов","Андреев","Соколов" };
    string fnames[10] = { "Георгий","Виктор","Владислав","Тимофей","Илья","Кирилл","Максим","Александр","Глеб","Евгений" };
    string fanames[10] = { "Анатольевич","Евгеньевич","Валентинович","Викторович","Александрович","Григорьевич","Николаевич","Юрьевич","Филиппович","Павлович" };
    int olders[10] = { 18, 19, 21, 20, 18, 18, 19, 20, 18, 19 };
    int powers[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int kursL[10] = { 1,2,3,4,5,5,4,3,2,1 };
};




int main()
{
    short int studentCount = 25;
    setlocale(LC_ALL, "Russian");
    students* klassof25 = new students[studentCount];
    for (int i = 0; i < studentCount; i++) {
        klassof25[i].get_allinfo();
    }
    //sort
    cout << endl;
    for (int i = 0; i < studentCount; i++) {
        for (int j = 0; j < studentCount; j++) {
            if (klassof25[i].get_lastname().at(0) < klassof25[j].get_lastname().at(0)) {
                klassof25[i].id_swap(klassof25[i].idPtr, klassof25[i].idPtr);
            }
            else  if (klassof25[i].get_lastname().at(1) < klassof25[j].get_lastname().at(1)) {
                klassof25[i].id_swap(klassof25[i].idPtr, klassof25[i].idPtr);
            }
            else  if (klassof25[i].get_lastname().at(2) < klassof25[j].get_lastname().at(2)) {
                klassof25[i].id_swap(klassof25[i].idPtr, klassof25[i].idPtr);
            }
        }
    }

    for (int i = 0; i < studentCount; i++) {
        cout << klassof25[i].get_id();
    }

    /*for (int i = 0; i < studentCount; i++) {
        int j = klassof25[i].get_id();
        klassof25[j].get_allinfo();
    }*/
}
