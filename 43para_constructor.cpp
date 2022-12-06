// parametrised constructor
#include<iostream>
using namespace std;
class hero{

    // properties
    private:
    int health=80;


    public:
    char level='b';

    void print(){
        cout<<"hio"<<endl;
    }

    hero(){
        cout<<this<<endl;
        cout<<"contructor is called"<<endl;
    }
    // parameterised constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;

        this->health=health;
        
    }

    hero(int health ,char level){
        this->health=health;
        this->level=level;
    }
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }  

    void set_health(int h){
        health=h;
    }
    void set_level(char c){
        level=c;
    }

};
int main(){

    hero h1;

    cout<<h1.level<<endl;
    cout<<h1.get_health()<<endl;


    hero h2(60);
    cout<<&h2<<endl;
    cout<<h2.level<<endl;
    cout<<h2.get_health()<<endl;

    hero h3(30,'f');
    cout<<h3.level<<endl;
    cout<<h3.get_level()<<endl;
    cout<<h3.get_health();
}