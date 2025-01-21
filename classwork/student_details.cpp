#include<iostream>
using namespace std;

class student{
    int id;
    string name;
    float percent;
    public:
    void roll(){
        cin >> id;
    }
    void std(){
        getline(cin, name);
    }
    void per(){
        cin >> percent;
    }
    void put_data(){
        cout << "id = " << id << " name = " << name << " percent = " << percent << endl;
    }
};
int main(){
    int x;
    int i;
    cout << "Enter the number of students: ";
    cin >> x;
    student s1[x];
    cout <<"enter students detail (id-name-percent)";
    for(int i = 0; i < x; i++){
        s1[i].roll();
        s1[i].std();
        s1[i].per();
    }

    for(int i = 0; i < x; i++){
        s1[i].put_data();
    }
    // int search;
    // cout << "Enter id of student you want to search: ";
    // cin >> search;
    // do{
    //     for(i = 0; i < x; i++){
    //         if(search == s1[i].roll){
    //             s1[i].put_data();
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    // }
    // while(i < x);

}