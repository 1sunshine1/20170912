/*************************************************************************
    > File Name: 类的继承演示程序
    > Author: hug
    > Mail:   hug@haizeix.com
    > Created Time: 二  9/12 18:25:20 2017
************************************************************************/
 
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
 
class Animal {
public :
    Animal(string name) : __name(name) {
        cout << "Animal constructor" << endl;
    }
    void set_name(string name) {
        this->__name = name;
    }
    void tell_me_your_name() {
        cout << "my name is : " << this->__name << endl;
    }
protected :
    string __name;
};
 
class Cat : protected Animal {
public :
    Cat() : Animal("temp_name") {
        this->tail = 1;
        cout << "Cat constructor" << endl;
    }
    Cat(string name) : Animal(name) {
        cout << "Cat constructor" << endl;
    }
    void output_tail() {
        cout << this->tail << endl;
    }
    void tell_me_your_name() {
        cout << "cat name is : " << this->__name << endl;
    }
private:
    int tail;
};
 
class Tail {
public :
    Tail(int length) : __length(length) {
        cout << "Tail constructor" << endl;
    }
private:
    int __length;
};
 
class HasTailCat : public Cat {
public :
    HasTailCat(string name) : tail(6) {
        cout << "HasTailCat constructor" << endl;
        this->__name = name;
    }
private:
    Tail tail;
};
 
int main() {
    HasTailCat a("garfiled");
    a.tell_me_your_name();
    a.output_tail();
    return 0;
}
