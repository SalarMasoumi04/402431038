#include<iostream>
#include<string>
class Account{
    public:
    // Method , here is constructor 
    Account(int b){
        if(b> 5000)
            balance = b;
    }
    //Another method in c++ member function 
    int getBalance(){
        return balance;
    }
    void setBalance(int b){
        if(b>5000)
            balance = b;
    }
    std::string getName() const{
        // name =  "No name";
        return name;
    }
    void setName(std::string s){
        name = s;
    }
    private:
    //Feild of class , in c++ data member
        int balance{5000};
        std::string name;
};
