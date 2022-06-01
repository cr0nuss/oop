#include <iostream>
#include <utility>
class Human {
public:
    std::string surname;
    std::string name;
    std::string midname;
    int age;
    Human(std::string _surname, std::string _name, std::string _midname, int _age):
        surname(std::move(_surname)), name(std::move(_name)), midname(std::move(_midname)), age(_age)
        {

        }
    virtual const char* print() {
        std::cout << surname << " " << name << " " <<  midname << " " <<  age << std::endl;
    }
    ~Human();
};

Human::~Human() = default;


class Student: public Human {
public:
    Student(std::string surname, std::string name, std::string midname, int age, bool on_lesson) : Human(std::move(surname), std::move(name), std::move(midname), age) {
    }
    const char* print() override {
        std::cout << surname << " " << name << " " <<  midname << " " <<  age << std::endl;
    }
    ~Student();
};

Student::~Student() = default;


class Boss: public Human {
public:
    Boss(std::string surname, std::string name, std::string midname, int age, int numbers_of_workes) : Human(std::move(surname), std::move(name), std::move(midname), age) {

    }
    virtual const char* print() {
        std::cout << surname << " " << name << " " <<  midname << " " <<  age << std::endl;
    }
    ~Boss();
};

Boss::~Boss() = default;


int main() {
    Human b ("Tim", "henson", "NN", 27);
    b.print();
    Student a("Tim", "henson", "NN", 27, false);
    a.print();
    Boss c ("Tim", "henson", "NN", 27, 8);
    c.print();
    return 0;
}
