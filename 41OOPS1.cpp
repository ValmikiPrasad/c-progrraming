#include<iostream>
// #include"hero1.cpp"
using namespace std;

// class hero{

//     // properties

// };
class hero{

    // properties
    private:
    int health=80;


    public:
    char level='b';

    void print(){
        cout<<"hio"<<endl;
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
    // hero h;
    //*** note when there is no propeties in class then sizeof(h)...will return 1.***
    // cout<<"size : "<<sizeof(h)<<endl;

    hero h;
    cout<<"size : "<<sizeof(h)<<endl;
    // cout<<h1.health;  ....by default properties of class are private so it cannot be acessesd directly.
    // cout<<h.level<<endl;
    // h.level='c';
    // cout<<h.level<<endl;
    cout<<h.get_health()<<endl;
    
    cout<<h.get_level()<<endl;

    int health=70;
    h.set_health(health);

    cout<<h.get_health()<<endl;

    char a='d';
    h.set_level(a);
    cout<<h.get_level()<<endl;

    h.print();

}