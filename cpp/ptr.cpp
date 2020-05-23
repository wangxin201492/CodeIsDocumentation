//
// Created by 煮茶 on 2020/3/23.
//
#include <iostream>
#include <memory>

using namespace std;

class Person{
    string _name;

public:
    Person(string& name): _name(name) {
        cout << "Person" << endl;
    }

    ~Person() {
        cout << "~Person" << endl;
    }
};

class Developer : public Person {
public:
    Developer(string& name): Person(name) {
        cout << "Developer" << endl;
    }

    ~Developer() {
        cout << "~Developer" << endl;
    }
};

unique_ptr<Person> getPerson(string& name) {
    return std::make_unique<Developer>(name);
}

int main() {
    string p_str("person");
    auto aa = getPerson(p_str);
    cout << "after" << endl;
}