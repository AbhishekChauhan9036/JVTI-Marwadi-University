/*
 OOps in JavaScript->
    Variable -> Data Member
    Function -> Member Function/ Method

 pillars of OOPS->
    Encapsulation
    Abstraction
    Inheritance
    Polymorphism
*/

class Car{
    constructor(n, m){
        this.name = n;
        this.model = m;
    }

    printCarDetails(){
        console.log(this.name,this.model);
        // process.stdout.write(`Hello`)
    }
}

const car1 = new Car("KIA",2024);
const car2 = new Car("PAGANI",2025);
car1.printCarDetails();
car2.printCarDetails();

