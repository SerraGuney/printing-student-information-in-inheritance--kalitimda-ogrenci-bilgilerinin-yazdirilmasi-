#include <iostream>
using namespace std;
 class student{
        protected:
        string name,surname;
        public:
        student(string n,string s){
            name=n;
            surname=s;
        }
        void print(){
            cout<<"name of student:"<<name<<endl<<"surname of student:"<<surname<<endl;
        }
    };
    class exam:public student{
        int exam1,exam2;
        public:
        exam(string a,string s,int v,int f):student(a,s){
            exam1=v;
            exam2=f;
        }
        void print2(){ 
            print();
            cout<<"exam1 of student:"<<exam1<<endl<<"exam2 of student:"<<exam2<<endl<<endl;
        }
    };
int main(){
    exam stud[3]={exam("Serra","Guney",85,100),exam("Kerem","Ak",87,95),exam("Damla","Al",94,45)};
    for(int i=0;i<3;i++){
        stud[i].print2();
    }
    return 0;
}

