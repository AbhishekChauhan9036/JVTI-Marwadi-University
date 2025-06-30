/**
 * Create a Car class with properties brand and speed and methods to 
 *inscreseSpeed() and displayInfo()
 */

 class Car{
    constructor(b, s){
        this.brand = b;
        this.speed = s;
    }

    inscreseSpeed(val){
        this.speed+=val;
    }

    displayInfo(){
        console.log(this.brand);
        console.log(this.speed);
    }
 }

const c1 = new Car("KIA",40);
c1.inscreseSpeed(20);
c1.displayInfo();




