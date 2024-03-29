#include<iostream>
using namespace std;


class User {
private:
string name;
int birth_year;
int birth_day;
int birth_month;
double salary;

public:

User(string name, int year, int day, int month, double salary){
      this -> name = name;
      birth_year = year;
      birth_day = day;
      birth_month = month;
      this -> salary = salary;
}

int operator==(const User& object){
    if(birth_year < object.birth_year){
        return 1;
    } else if(birth_year > object.birth_year){
        return -1;
    }
      
       if(birth_day < object.birth_day){
     return 1;
       } else if(birth_day > object.birth_day){
      return -1;
       }

        
  if(birth_month < object.birth_month){
     return 1;
      } else if(birth_month > object.birth_month){
       return -1;
     } else{
        return 0;
     }

}

  double operator+(const User& object){
    return (salary + object.salary) / 2.0;
  }

  double operator+(int num){
      salary = salary *(num / 100.0);// add percentage increment in user existing salary
      return salary;

  }

  void display(){
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birth_year << endl;
        cout << "Birth Day: " << birth_day << endl;
        cout << "Birth Month: " << birth_month << endl;
        cout << "Salary: " << salary << endl;
  }

};

int main(){
    User user1 ("Niharika",1990,12,5,30000);
    User user2("Akash",2000,8,1,40000);

    // comparing ages of uers 
    int result = user1 == user2;
      if(result == 1){
        cout<<"user1 is elder"<<endl<<endl;
      } else if(result == -1){
        cout<<"user2 is elder"<<endl<<endl;
      } else{
        cout<<" both are equal"<<endl<<endl;
      }

    double avg_sal = user1 + user2;
    cout<<"Average salary:"<<avg_sal<<endl<<endl; 

     cout<<"Before increment users details:"<<endl<<endl;
    user1.display();
    user2.display();

   user1 + 5; // add 5% increment in user1 existing salary
   user2 + 10; // add 10% increment in user2 existing salary

   cout<<"After increment users details :"<<endl<<endl;
   user1.display();
   user2.display();

    

}