#include<iostream>
#include<cctype>
using namespace std;

//firstly defining the class in c++
class Student{
    private:int roll_no;
           float cg_pa;
           char name;

    public:
           void get_it();
           void put_it();

};
//then using the scope resolution in this case
//base class :derived class
class D: public Student{
    private:int score;
            float money;
    public:
    void da_ta();
    void put_d();
            
};

void Student::get_it(){
    cout<<"enter the roll no of the student:"<<endl;
    cin>>roll_no;
    cout<<"enter the cgpa of the student:"<<endl;
    cin>>cg_pa;
    cout<<"enter the name of the student:"<<endl;
    cin>>name; 
}
void Student::put_it(){
    cout<<roll_no<<'\n';
    
    cout<<cg_pa<<'\n';
    
    cout<<name<<'\n';
    
}

void D::da_ta(){
    cout<<"enter the score of the student:"<<endl;
    cin>>score;
    cout<<"enter the money in pocket of the student:"<<endl;
    cin>>money;
    cout<<"/n";
    cout<<"other variable :from the base class:";
  

    
    

}
void D::put_d(){
    cout<<"the data that is being received is:"<<endl;
    cout<<score;
    cout<<"the other data is as follows:"<<endl;
    cout<<money;
}
int main(){
D d1;
d1.get_it();
d1.put_it();

d1.da_ta();
d1.put_d();


cout<<"RESULT"<<endl;

}