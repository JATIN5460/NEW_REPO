#include<iostream>
//hybrid inheritace in  cpp
using  namespace std;
class D{
    protected:
    int age;
    float marks;

    public:
    void getD(){
        cout<<"the age of the indivdual would be as follows:"<<endl;
        cin>>age;
        cout<<"the marks:"<<endl;
        cin>>marks;
    }
    void putD(){
        cout<<"the age:"<<age;
        cout<<"marks:"<<marks;

    }
};

class B:public D{
    protected:
    int y;

    public:
    void getB(){
        y=90;
    }
};

class C:public D{
    protected:
    int z;
    public:
    void getC(){
        z=80;
    }
};

class E:public C, public B,public D{
  public:
    void putSum(){
        cout<<"the sum:"<<y+z<<endl;
    }
};
 
 int main(){
    E e;
    
    e.getB();
    e.getC();
    e.putSum();
 }