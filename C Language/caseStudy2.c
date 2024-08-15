// What will be the output of the following code?
int main() {
    int a = 5;
    int b = ++a + a++ + --a + a--;
    printf("%d", b);
    return 0;
}



// What will be the value of c after executing the following code?
int main() {
    int a = 3, b = 4, c;
    c = (a++ * --b) + (--a * b++);
    printf("%d", c);
    return 0;
}




// What is the output of the following code snippet?
int main() {
    int x = 10, y = 15;
    int z = (x++ - --y) + (y++ + --x);
    printf("%d", z);
    return 0;
}




// Given the following code, what will be the output?
int main() {
    int i = 1, j = 2, k = 3;
    int result = i++ - j-- + --k + i-- - ++j + k++;
    printf("%d", result);
    return 0;
}







// Consider the following code. What is the value of res?
int main() {
    int x = 5, y = 7;
    int res = (x++ * ++y) - (--x * y--);
    printf("%d", res);
    return 0;
}





// What is the output of the following code?
int main() {
    int a = 2;
    int b = a++ + ++a + --a + a--;
    printf("%d", b);
    return 0;
}




// What will be the final value of a and b after the following code executes?
int main() {
    int a = 5, b = 10;
    int res = a++ + ++b - --a + b-- + a--;
    printf("%d %d %d", a, b, res);
    return 0;
}


// What will be the output of the following code?
int main() {
    int a = 1, b = 2, c = 3, d;
    d = a++ + ++b * --c + c++ * --b;
    printf("%d", d);
    return 0;
}



// Consider the following code. What will be the value of res?
int main() {
    int x = 8, y = 6;
    int res = --x - y++ + ++x - --y + x--;
    printf("%d", res);
    return 0;
}



//What is the output of the following code?
int main() {
    int x = 4;
    int y = x++ + ++x * --x + x-- - ++x;
    printf("%d", y);
    return 0;
}
