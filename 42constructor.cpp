// constructor : no return type,invokes at the time of object creation
// in this part we will learn constructor of no input type

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
        cout<<"contructor is called"<<endl;
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
    // statically
    hero prashant;
    cout<<prashant.level<<endl;

    // dynamically
    hero *h=new hero;
}