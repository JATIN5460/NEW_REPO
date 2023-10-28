#include<iostream>
//using the hierarical inheritance
//multiple derived class and the one base class

using namespace std;
class student{
    private:
     int age;
     char name;

     public:
     void getIt();
     void putIt();

};

class d:public student{
    int age1;
    char name1;
    public:
    void getData();
    void putData();

};

class e:public student{
    int employe_id;
    char employe_name;

    public:
    void getEm();
    void putEm();
};

void d::getData(){
    cout<<"the age of the student is:"<<endl;
    cin>>age1;
    cout<<"the name of the student is:"<<endl;
    cin>>name1;

}
void d::putData(){
    cout<<"teh age of the indivdual:"<<endl;
    cout<<age1<<endl;

    cout<<"the name is:"<<name1;
}

void e::getEm(){
 cout<<"the employe id is:"<<endl;
 cin>>employe_id;
 cout<<"the name of the employe is:"<<endl;
 cin>>employe_name;
}

void e::putEm(){
    cout<<"the id is:"<<endl;
    cout<<employe_id;

    cout<<"thee name:"<<endl;
    cout<<employe_name;

}


int main(){
d d1;
e e1;
d1.getData();
d1.putData();

e1.getEm();
e1.putEm();
}