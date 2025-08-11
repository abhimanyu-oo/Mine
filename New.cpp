# include <iostream>
# include <print>
# include <cmath>
using namespace std;
void Connect();
void cal();


void Hello(string Name , int age) {
    println("Hello {} , Nice to meet you!" , Name);
    println("You are {} years old" , age);
}

double Cube(double num) {
    double cube = pow(num, 3);
    // return cube;
    return pow(num,3); // It can  return cube or what was stored in cube.
}

int GetMax(int num1,int num2,int num3) {
    int result;
    if (num1>=num2 && num1>=num3) {;
        result = num1;
    } else if (num2>=num1 && num2>=num3){;
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int power(int base, int exp) {
    int result = 1;
    for (int i =0 ; i < exp; i ++) {
        result *= base;
    }
    return result;
}

int main() {

    // Connect();
    // To find Prime Numbers in A Range

    // cal();
    // To find the day that was on a specific date from that date

    // Variables
    // char Grade;
    // Grade = 'A';
    // cout << Grade  << "\n";
    // Grade = 'B';
    // cout << Grade << "\n";
    // Grade = 'C';
    // cout << Grade << "\n";
    // Grade = 'D';
    // cout << Grade << "\n";
    // Grade = 'E';
    // cout << Grade << "\n";
    // Grade = 'F';
    // cout << Grade << endl;
    // double pi = 3.141592653589793;
    // cout << "The Value of pi is "<< pi << endl;
    // bool is_correct = true;
    // cout << is_correct << endl;
    // is_correct = false;
    // cout << is_correct << endl;
    // int age = 18;
    // cout << "My age is "<< age << endl;
    // string name = "Abhimanyu";
    // cout << "My name is " << name << endl;

    // String Commands
    // cout << "First Letter of name is " << name[0] << endl;
    // name[0]='x'; // Changes the the letter in given position to provided letter, x in this case.
    // cout << "My name with First letter as x is " << name << endl;
    // cout << "My name is " << name.length() << " letters long!" << endl; // Gives the length of the String.
    // cout << name.find("man" , 0) << "\n"; // tells the position after which the thing to be found occurs.
    // cout << name.substr(4,6) << endl; // Prints a part of the string between given defined positions.

    // Int Commands
    // int num1 = 3;
    // double num2 = 4;
    // double num3 = 3.41;
    // cout << pow(num1,num2) << endl; // raises the power 3 to power of 4 in this case.
    // cout << num1 + num2 << endl; // Addition
    // cout << num1 - num2 << endl; // Subtraction
    // cout << num1 * num2 << endl; // Multiplication
    // cout << num1 / num2 << endl; // division(but if the input is int , answer is also int , so for better answers make either of them double or float.)
    // cout << num1 % 4 << endl; // Remainder
    // cout << sqrt(num2) << endl; // Square root
    // cout << round(num3)<< endl; // Round Off
    // cout << ceil(num3) << endl; // Round up
    // cout << floor(num3) << endl; // Round Down or GIF
    // cout << fmax(num1,num2) << endl; // Max of numbers
    // cout << fmin(num1,num2) << endl; // Min of Numbers

    // Taking Input from User
    // string age; // Similar for Char
    // cout << "Enter your age: ";
    // getline(cin, age);
    // cout << "You told me that you are " << age << " years old" <<endl;
    // string Name;
    // cout << "Enter your name: ";
    // getline(cin, Name);
    // cout << "Hello Mr. " << Name << endl;

    // A MadLibs Game
    // string color,noun,celeb;
    // cout<<"Enter your favourite color : ";
    // getline(cin,color);
    // cout<<"Enter a noun : ";
    // getline(cin,noun);
    // cout<<"Enter your favourite celeb : ";
    // getline(cin,celeb);
    // cout << "Rosses are " << color << endl;
    // cout << noun <<" are Blue" << endl;
    // cout << "I love "<< celeb << endl;

    // Arrays
    // int numbers[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // this is an array.The number in the bracket signifies the max numbers of elements in the array.
    // cout << numbers[3] << endl; // prints the 4th element from the array.
    // numbers[3] = 10; // Changes the 4th element to 10
    // cout << numbers[3] << endl;
    // numbers[10] = 20; // 11th element does not exist but i am adding it to the array.
    // cout << numbers[10] << endl;

    // Functions
    // string name;
    // int age;
    // cout << "Please enter your name: ";
    // getline(cin, name);
    // cout << "Please enter your age: ";
    // cin >> age;
    // Hello(name, age);// This calls the function.
    // // If the function was down below this line it would give an error , so the function must be mentioned above so the program knows that it exists.

    // Return Function
    // double num;
    // cout << "Please enter a number: ";
    // cin >> num;
    // double ans = Cube(num);
    // cout << "The cube of the number is " << ans << endl;

    // if statement
    // bool isMale = true;
    // bool isTall = true;
    // if (isMale && isTall) {
    //     cout << "You are a tall male";
    // } else if (isMale && !isTall) {
    //     cout << "You are a short male";
    // } else if (!isMale && isTall) {
    //     cout << "You are tall female";
    // } else {
    // cout << "You are short female";
    // }
    // // && is 'and' operator while || is 'or' operator. ! is for negation of an input.

    // Finding Max (You can use fmax but still);
    // int num1;
    // int num2;
    // int num3;
    // cout << "please enter a number: ";
    // cin >> num1;
    // cout << "please enter a number: ";
    // cin >> num2;
    // cout << "please enter a number: ";
    // cin >> num3;
    // int max = GetMax(num1,num2,num3);
    // println("The number {} is greater of them of all." , max);

    // 4 Function Calculator
    // double num1;
    // cout << "Please enter the first number: ";
    // cin >> num1;
    // char func;
    // cout << "+  -   *   /\n";
    // cout << "Which function do you want to perform: ";
    // cin >> func;
    // double num2;
    // cout << "Please enter the second number: ";
    // cin >> num2;
    // if (func == '+' ) {
    //     cout << num1+num2;
    // } else if (func == '-') {
    //     cout << num1-num2;
    // } else if (func == '*' ) {
    //     cout << num1*num2;
    // } else if (func == '/' ) {
    //     cout << num1/num2;
    // } else {
    //     cout << "Invalid function Entered" << endl;
    // }

    // While Loops
    // int i =7;
    // do
    //     {
    //     cout << i << endl;
    //     i++;
    // } while (i<=7); // A do while loop executes the command and then checks for condition if it is true.
    // // It is the same as while loop but will always atleast provide 1 execution of the command even if the condition is not met.

    // Guessing a Number
    // int secnum=37;
    // int guess;
    // int guesscount=0;
    // int limit =5;
    // bool outofguesses=false;
    // while and if statement seperate.
    // while (secnum != guess && guesscount < limit) {
    //     cout << "Please enter your guess: ";
    //     cin >> guess;
    //     guesscount++;
    // }
    // if (guesscount ==  limit) {
    //     outofguesses=true;
    //     cout << "You are out of guesses!" << endl;
    // } else {
    //     outofguesses=false;
    //     cout << "You Win!" << endl;
    // } // Same Thing but Different approach. if statement inside while loop.
    // while (secnum != guess && !outofguesses) {
    //     if (guesscount < limit ) {
    //         cout << "Please enter your guess: ";
    //         cin >> guess;
    //         guesscount++;
    //     }else {
    //         outofguesses=true;
    //     }
    // }
    // if (outofguesses) {
    //     cout << "You Lose!" << endl;
    // } else {
    //     cout << "You Win!" << endl;
    // }

    // For Loops
    // int numb[] = {1,3,5,7,11,12,21};
    // for (int i =1 ; i < 7 ; i++) {
    //     cout << i;
    //     cout << "=" << numb[i] << endl;
    // } // The loop will run the condition in the () and then run the loop, it is similar to while loop but more cleaner and efficient.

    // Exponent Functions
    // int base, exp;
    // int ans;
    // cout << "Enter Base : ";
    // cin >> base;
    // cout << "Enter power : ";
    // cin >> exp;
    // ans = power(base, exp);
    // cout << base << " raised to " << exp << " power is : " << ans << endl;

    // 2D Arrays and Nested For Loops

    return 0; // Signifies the end of code , anything beyond this does not get executed.
}