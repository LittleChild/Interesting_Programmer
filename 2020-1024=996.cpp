#include<iostream>
using namespace std;
class Bachelor{
public:
    Bachelor(){
        cout<<"i am "<<basic_attribute<<endl;
    }
    virtual void change_attribute(){};
private:
    string basic_attribute="single";
};
class Programmer:public Bachelor{
public:
    Programmer(){
        cout<<"exactly...";
    }
    //...no override
};
int main(){
    Programmer p;
    return 0;
}