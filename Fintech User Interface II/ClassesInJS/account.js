/*
class BankAccount

Data Member->
AccountHolderName
balance
Address

Member Function/Method->
withdrawn()
AddAmount()
checkBalance()
userDetails()
Loan()
*/

class BankAccount{
    constructor(accountHolderName, balance, address){
        this.accountHolderName = accountHolderName;
        this.balance = balance;
        this.address = address;
    }

    withdrawn(amount){
        if(amount > this.balance){
            console.log("Insufficient Balance");
        }else{
            this.balance = this.balance-amount;
            console.log("Withdrawn Successfully");
        }
    }

    AddAmount(amount){
        this.balance= this.balance+amount;
        console.log(this.balance," Amount Deposited");
    }

    checkBalance(){
        console.log("Current Balance: ₹",this.balance);
    }

    userDetails(){
        console.log("Name:",this.accountHolderName);
        console.log("Address:",this.address);
        console.log("Balance:",this.balance);
    }

    Loan(amount){
        if(this.balance<= 50000){
            this.balance+=amount;
            console.log("Loan Approved!");
        }else{
            console.log("Loan Denied!");
        }
    }
}

const user1 = new BankAccount("Nandani", 6000, "Morbi");
user1.userDetails();
user1.checkBalance();
user1.withdrawn(5000);
user1.checkBalance();
user1.Loan(100000);
user1.checkBalance();

