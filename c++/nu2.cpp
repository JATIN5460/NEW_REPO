#include<iostream>
#include<cctype> 
//firstly defining the new class 
//for the multiple inhertiance solution
using namespace std;
class N1{
    private:
     int roll_no;
     float cg_pa;

     public:
     void get_it(){
        cout<<"the rollno of the given person is as follows"<<'\n';
        cin>>roll_no;
        cout<<"the cg_pa of the given person is as follows"<<'\n';
        cin>>cg_pa;

     };
     void put_it(){
        cout<<"the roll_no:"<<roll_no<<'\n';
        cout<<"the cg_pa:"<<cg_pa<<'\n';
     };
};

class N2{
    private:
    int employe_id;
    float salary;

    public:
       void em_in(){
        cout<<"the id of the employe is as follows:"<<'\n';
        cin>>employe_id;
        cout<<"the salary of the employe would be as follows"<<'\n';
        cin>>salary;
       };
       void em_out(){
        cout<<"the employe_id is as foolows of the given person:"<<employe_id<<'\n';
        cout<<"the salary of the employe is as follows"<<salary<<'\n';
        
       };
};

class N:public N1,N2{
    private: int x,y;
    public:
    void display(){
        cout<<"the value oftheintx and the would be"<<'\n';
        cin>>x && y;
    }
    void dispaly_2(){
        cout<<"the two values that are so received are as follows:";
        cout<<x<<'\n';
        cout<<y<<'\n';
    }
};
int main(){
N n;
n.get_it();
n.put_it();
n.display();
n.dispaly_2();

return 0;



}