#include<iostream>
using namespace std;
class hero{

    // properties
    private:
    int health=80;


    public:
    char level='b';

    void print(){
        cout<<"health "<< this->health <<endl;
        cout<<"level : "<<this->level<<endl;
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


    // manually creating copy constructor
    // hero (hero& temp){
    //      cout<<"copy contructor is called"<<endl;
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }
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

    // hero prashant;
    // prashant.set_health(55);
    // prashant.set_level('z');

    // instead of above we can do in this way also;

    hero prashant(55,'z');
    cout<<prashant.get_health()<<endl;
    cout<<prashant.get_level()<<endl;
    prashant.print();

    // copying

    cout<<endl;
    hero ayush(prashant);
    cout<<ayush.get_health()<<endl;
    cout<<ayush.get_level()<<endl;
    ayush.print();
    
  
  
}