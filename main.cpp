#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    Human() {}
    Human(string a, string b, string c, int q) :name(a), surname(b), fathername(c), age(q) {}
    virtual void print() = 0;
    virtual ~Human() {}
protected:
    string surname, name, fathername;
    int age;
};

class Student : public Human {
public:
    Student(string a, string b, string c, int q, bool w) :Human(a, b, c, q) { on_lesson = w; }
    void print()override{
        cout << this->name << ' ' << this->surname << ' ' << this->fathername << ' ' << this->age << ' ' << this->on_lesson << endl;
    }
private:
    bool on_lesson;
};
class Boss :public Human{
public:
    Boss(string a, string b, string c, int q, int w) :Human(a, b, c, q) { WN = w; }
    void print()override{
        cout << this->name << ' ' << this->surname << ' ' << this->fathername << ' ' << this->age << ' ' << this->WN << endl;
    }
private:int WN;
};
int main(){
    Student q("a", "b", "c", 1, true);
    q.print();
    Boss q1("a", "b", "c", 0, false);
    q1.print();
}


