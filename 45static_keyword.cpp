#include<iostream>
using namespace std;
class hero{

    // properties
    private:
    int health=80;


    public:

    string name;
    char level='b';
    static int time_to_complete;

    void print(){
        cout<<"health : "<< this->health <<endl;
        cout<<"level : "<<this->level<<endl;
        cout<<"name : 0"<<this->name<<endl;
    }

    hero(){
        cout<<this<<endl;
        cout<<"contructor is called"<<endl;
        name=new char[100];
    }
    // parameterised constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;

        this->health=health;
        
    }

    hero(int health ,char level,string n){

        this->name=n;
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

int hero::time_to_complete=5;

int main(){

    cout<<hero::time_to_complete<<endl;

    // hero h1;
    // cout<<h1.time_to_complete<<endl;
    hero h1(60,'j',"prashant");
    h1.print();
    
  
}