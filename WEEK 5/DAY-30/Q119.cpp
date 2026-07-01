#include <iostream>
#include <vector>
#include <string>
"
"
using namespace std;

struct Employee {
    int id;
    string name;
    string position;
    double salary;
};

vector<Employee> db;

void addEmployee(){
    Employee e;
    cout<<"Enter ID: "; if(!(cin>>e.id)){cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n'); return;} 
    cin.ignore();
    cout<<"Enter name: "; getline(cin,e.name);
    cout<<"Enter position: "; getline(cin,e.position);
    cout<<"Enter salary: "; if(!(cin>>e.salary)){cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n'); return;} cin.ignore();
    for(auto &x: db) if(x.id==e.id){ cout<<"ID already exists. Aborting.\n"; return; }
    db.push_back(e);
    cout<<"Employee added.\n";
}

void listEmployees(){
    if(db.empty()){ cout<<"No employees.\n"; return; }
    cout<<left<<setw(6)<<"ID"<<setw(20)<<"Name"<<setw(20)<<"Position"<<setw(10)<<"Salary"<<"\n";
    for(auto &e: db){
        cout<<left<<setw(6)<<e.id<<setw(20)<<e.name<<setw(20)<<e.position<<setw(10)<<fixed<<setprecision(2)<<e.salary<<"\n";
    }
}

void findEmployee(){
    cout<<"Enter ID to search: "; int id; if(!(cin>>id)){cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n'); return;} 
    for(auto &e: db) if(e.id==id){
        cout<<"Found: "<<e.id<<" - "<<e.name<<" ("<<e.position<<") Salary: "<<fixed<<setprecision(2)<<e.salary<<"\n";
        return;
    }
    cout<<"Not found.\n";
}

void removeEmployee(){
    cout<<"Enter ID to remove: "; int id; if(!(cin>>id)){cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n'); return;} 
    auto it = remove_if(db.begin(), db.end(), [&](const Employee &e){ return e.id==id; });
    if(it==db.end()){ cout<<"Not found.\n"; }
    else{ db.erase(it, db.end()); cout<<"Removed.\n"; }
}

int main(){
    while(true){
        cout<<"\nMini Employee Management\n";
        cout<<"1. Add employee\n2. List employees\n3. Find by ID\n4. Remove by ID\n5. Exit\n";
        cout<<"Choice: "; int c; if(!(cin>>c)){ cout<<"Invalid input. Exiting.\n"; break; }
        cin.ignore();
        switch(c){
            case 1: addEmployee(); break;
            case 2: listEmployees(); break;
            case 3: findEmployee(); break;
            case 4: removeEmployee(); break;
            case 5: return 0;
            default: cout<<"Invalid choice\n";
        }
    }
    return 0;
}
