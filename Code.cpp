#include<iostream>
using namespace std;
int main()
{
    int initial_balance,deposit_amount,withdrawal_amount;
    cout<<"Enter the initial balance: ";
    cin>>initial_balance;
    cout<<"Enter the deposit amount: ";
    cin>>deposit_amount;
    cout<<"Enter withdrawal amount: ";
    cin>>withdrawal_amount;
    initial_balance+=deposit_amount;
    cout<<"Balance after deposit: "<<initial_balance<<endl;
    initial_balance-=withdrawal_amount;
    cout<<"Balance after withdrawal: "<<initial_balance;
}
