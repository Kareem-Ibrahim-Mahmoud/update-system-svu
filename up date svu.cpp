#include <iostream>
#include <ostream>
#include <istream>
#include <fstream>


using namespace std;
class m{
virtual int Askformation()=0;

};
class n:m{
int id;
int password=202020;
int a;

public:
int set_id()
{

cout<<"Enter ID User : "<<endl;
cin>>id;
return id;
}
int set_password()
{
    cout<<"Enter password User : "<<endl;
    cin>>password;
    return password;

}

virtual int Askformation()
{





}


~n()
{


}



int get_a()
{
    cout<<"1.basic information : "<<endl;
    cout<<"2.Academic Registration : "<<endl;
    cout<<"3.school schedule : "<<endl;
    cout<<"4.Tuition fees : "<<endl;
    cout<<"5.Exams Table : "<<endl;
    cout<<"6.Grades for courses : "<<endl;
    cout<<"7.Desires to join : "<<endl;
    cin>>a;
    switch(a){

    case 1:
        cout<<"\t\t\t personal data : "<<endl<<endl;
        cout<<"Name:Kareem Ibrahim Mahmoud Omar"<<endl;
        cout<<"Country of Nationality:Egypt "<<endl;
        cout<<"Type : Male "<<endl;
        cout<<"Religion: Muslim"<<endl;
        cout<<"Date of Birth : 12/11/2002 "<<endl;
        cout<<"your place of birth : Qena "<<endl;
        cout<<"National ID :220231652223"<<endl;
        cout<<"\t\t\t---------------------"<<endl;
        cout<<"\t \t family data : "<<endl<<endl;
        cout<<"Name of the Father :Ibrahim Mahmoud Omar"<<endl;
        cout<<"Function : Teacher "<<endl;
        cout<<"City : Elsmaena "<<endl;
        cout<<"E-mail :elbamb_@gmail.com"<<endl;
        cout<<"\t\t\t---------------------"<<endl;
        cout<<"\t\t Previous qualification information : "<<endl<<endl;
        cout<<"The school : D.r yuosef Ismael"<<endl;
        cout<<"qualification : High School Science Math"<<endl;
        cout<<"graduation year:*********"<<endl;
         cout<<"\t\t\t---------------------"<<endl;
         cout<<"\t\t\t\t Finish          "<<endl;
        break;

   case 2:
        cout<<"Materials prescribed to you : "<<endl<<endl<<"1-object oreanted programing"<<endl<<endl<<
        "\t\t\t\t 2-operator resarsh"<<endl<<"3-Progect Mangment"<<endl<<endl<<"\t\t\t\t 4- IT ";
        break;

    case 3:

        cout<<"Appointments        1:2 | 2:3 | 3:4 | 4:5 | 5:6 | 6:7 |"<<endl;
        cout<<"          Saturday      |     |     |     |     |     |"<<endl;
        cout<<"           Sunday       |     |     |     |     |     |"<<endl;
        cout<<"           Monday       |     |     |     |     |     |"<<endl;
        cout<<"          Tuesday       |     |     |     |     |     |"<<endl;
        cout<<"         Wednesday      |     |     |     |     |     |"<<endl;
        cout<<"         Thursday       |     |     |     |     |     |"<<endl;
        cout<<"_______________________________________________________"<<endl;

        break;
        case 4:
        cout<<"He must pay the tuition fee for this year and its value : 900$ "<<endl;
        cout<<"You can pay via : Vodafon cash"<<endl<<"Orange cash"<<"on the number :01011111"<<endl;
        cout<<"Via the payment machine "<<endl;
        break;
        case 5:
        cout<<"Appointments  |  Time   | location number | Subject | Exam place "<<endl;
        cout<<"Saturday      |  9:11   |     20          |  OOP    |  Hall 1    "<<endl;
        cout<<"Sunday        |  9:11   |     38          |   OR    |  Hall 2    " <<endl;
        cout<<"Monday        |  9:11   |     13          |   PM    |  runway 2  "<<endl;
        cout<<"Tuesday       |  9:11   |     22          |   IT    |  runway  1 " <<endl<<endl;
        cout<<"_________________________________________________________________"<<endl;
        break;
        case 6:
        cout<<" Subject | subject grades | Appreciation |"<<endl;
        cout<<"   OR    |       73       |      B       |"<<endl;
        cout<<"   IT    |       80       |      B+      |"<<endl;
        cout<<"   PR    |       60       |      D       |"<<endl;
        cout<<"   OOP   |       65       |      D+      |"<<endl;
        cout<<"__________________________________________"<<endl;
        cout<<"Earned hours : 9                          "<<endl;
        cout<<"Semester average:2.1"<<endl;
        break;
        case 7:
        cout<<"\t \t \t \t ***not yet***"<<endl;
        break;
        return a;
    }

}

};




int main()

{
    cout<<"\t \t \t \t \t \t  Abn el haethm\t"<<endl;
n br;

//br.set_id();
try{

if(br.set_id()!=202020)

throw "Erorr password ";






}
catch(int *e)
{


}
//br.set_password();
try{

if(br.set_password()!=202020)

throw "Erorr password ";






}
catch(int *e)

{


}

br.Askformation();
br.get_a();



}


