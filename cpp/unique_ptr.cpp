//
// Created by 煮茶 on 2020/3/30.
//

#include <iostream>
#include <memory>

class Person {

};

class Developer : public Person {

};

int main(){
    std::unique_ptr<Person> p = std::make_unique<Person>();

}
