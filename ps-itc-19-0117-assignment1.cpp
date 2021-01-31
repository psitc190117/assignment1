#include <iostream>

using namespace std;

int main()
{
    string name;
    double uniq_ID,printer,phone,table,Vat,balance,total_Cost,change,payment,final_Cost;
    int item_A,item_B,item_C;

    Vat = 0.12;

    cout << "PURCHASING AN ITEM" <<endl;

    cout << "" << endl;

    cout << "Please what is your name"<<endl;
    getline(cin,name);

    cout << "" << endl;

    cout << "Please enter your unique ID " <<endl;
    cin>>uniq_ID;

    cout << "" <<endl;

    cout << "These are our items and their respective prices " <<endl;
    cout << "Printer = $20" <<endl;
    cout << "Phone = $123" <<endl;
    cout << "Table = $50" <<endl;

    cout << "" <<endl;

    printer=20;
    phone=123;
    table=50;



   cout << "Please how many Printers will you buy, if none input 0"<<endl;
   cin>>item_A;

       cout << "" <<endl;

    cout << "Please how many Phones will you buy, if none input 0"<<endl;
   cin>>item_B;

       cout << "" <<endl;

   cout << "Please how many Tables will you buy, if none input 0"<<endl;
   cin>>item_C;

    cout << "" <<endl;

    cout << "Please this is your total cost without Vat "<<endl;

    total_Cost = ((printer*item_A)+(phone*item_B)+(table*item_C));
    cout<<total_Cost;

    cout << ""<<endl;

   cout << "Please this the total cost with Vat"<<endl;
    final_Cost=((total_Cost*Vat)+total_Cost);
    cout<<final_Cost<<endl;

        cout << "" <<endl<<endl;


    cout << "Please how much do you have" <<endl;
    cin >> payment;

    if(payment==final_Cost){
        cout << "Thank you for shopping with us; your Receipt is below"<<endl;
    }else if(payment > final_Cost){
        cout << "Thank you for shopping with us; your change and your Receipt will be below"<<endl;
    }else if(payment < final_Cost){
        cout << "Thank you for shopping with us but unfortunately your money is not enough; your balance and Receipt will be displayed below"<<endl;
    }else{
       cout << "Error" <<endl;
    }

 change=payment-final_Cost;
 balance = final_Cost- payment;


 cout << "RECEIPT" <<endl;
 cout<<name<<endl;
 cout << uniq_ID<<endl;
 cout<<"Printer: " <<item_A<<endl;
 cout<<"phone: " <<item_B<<endl;
 cout<<"table: " <<item_C<<endl;
 cout << "vat amount:" << final_Cost - total_Cost <<endl;
 cout << "total cost:" << final_Cost <<endl;
 cout << "payment:" << payment <<endl;
 if(payment > final_Cost){
    cout << "Your change is:" << payment - final_Cost <<endl;
 }
 else if(payment==final_Cost){
    cout << "Thank you for shopping with us" <<endl;
 }
 else
 {
     cout << "Your balance is:" <<  final_Cost-payment <<endl;
 }







    return 0;
}
