#include<bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string name,gender,address;
    int age ,mobileNo, cusID;
    char arr[999];

    void getDetails(){
        ofstream out("old-customer.txt",ios::app);
        {
            cout<<"Enter Customer Id: ";
        cin>>cusID;
         cout<<"Enter Name: ";
        cin>>name;
         cout<<"Enter Gender: ";
        cin>>gender;
         cout<<"Enter Age: ";
        cin>>age;
         cout<<"Enter Mobile Number: ";
        cin>>mobileNo;
         cout<<"Enter Address: ";
        cin>>address;
        }
        out<<"\nCustomerID:" << cusID << "\nName:" << name << "\nGender:" << gender << "\nAge:" << age << "\nMobile:" << mobileNo << "\nAddress:" << address << endl;
        out.close();
        cout<<"\nSAVED \nNOTE: We save your details record for future purposes\n"<<endl;
        
    }
    void showDetails(){
        ifstream in ("old_customer.txt");{
            if(!in){
                cout<< "File Error!"<<endl;
            }
            while(!(in.eof())){
                in.getline(arr,999);
                cout<<arr<<endl;
            }
            in.close();
        }
    }
};


class Cabs{
    public:
    int CabChoice;
    int kilometer;
    float cabCost;
    float lastCabCost;

    void cabDetails(){
        cout<<"\n Welocome! Cab services "<<endl;
        cout<<"\n 1.Rent a Standard cab -Rs.15 for 1KM"<<endl;
        cout<<"\n 2.Rent a Luxury Cab -Rs25 for 1KM"<<endl;

        cout<<"\n To calculate the cost for your jurney"<<endl;
        cout<<"Enter Which kind of cab you need: ";
        cin>>CabChoice;
        cout<<"Enter Kilometer you have to travel: ";
        cin>>kilometer;

        int hireCab;
        
        if(CabChoice==1){
            cabCost=kilometer*15;
            cout<<"\n Your tour cost"<<cabCost<<" rupees for a Standard Cab"<<endl;
            cout<<"Press 1 to hire this cab: or";
            cout<<"Press 2 to select another Cab:";
            cin>>hireCab;
            system("cls");
            if(hireCab==1){
                lastCabCost=cabCost;
                cout<<"\n You have succesfully hires a Standard Cab"<<endl;
                cout<<"Goto Menu";
            }

        }
        
    }

};


class Booking{

};

class Charges{

};



int main(){
    

    return 0;
}