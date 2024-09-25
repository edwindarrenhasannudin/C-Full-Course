// #include <iostream> 

// int main(){
//     // std::cout << "I like pizza!" << std::endl; 
//     std::cout << "I like pizza!" << '\n'; 
//     // std::cout << "It's really good!" << std::endl; 
//     std::cout << "It's really good!" << '\n'; 
//     return 0; 
// }

// #include <iostream> 

// int main(){

    // int x; // declaration 
    // x = 5; // assignment 
    // int x = 5; 
    // int y = 6; 
    // int sum = x + y; 

    // std::cout << x << '\n'; 
    // std::cout << y << '\n'; 
    // std::cout << sum << '\n'; 

    // integer (whole number)
    // int age = 19; 
    // int year = 2024; 
    // int days = 7; 

    // std::cout << days;
    
    // double (number including decimal)
    // double price = 10.99; 
    // double gpa = 2.5; 
    // double temperature = 25.1; 

    // std::cout << price; 

    //  singel character 
    // char grade = 'A'; 
    // char initial = 'B'; 
    // char dollarSign = '$'; 

    // std::cout << initial; 

    // boolean (true or false)
    // bool student = false;
    // bool power = true; 
    // bool forSale = true; 

    // string (objects that represents a sequence of text)
    // std::string name = "Edwin"; 
    // std::string day = "Friday"; 
    // std::string food = "pizza"; 
    // std::string address = "123 Fake St."; 

    // std::cout << name;   
//     std::cout << "Hello " << name << '\n'; 
//     std::cout << "You are " << age << " years old";

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     const double PI = 3.14159; 
    // PI = 420.69; 
    // double radius = 10; 
    // double circumference = 2 * PI * radius; 

    // std::cout << circumference << " cm";    

//     const int LIGTH_SPEED = 299792458;
//     const int WIDTH = 1920;
//     const int HEIGHT = 1080;  

//     return 0; 
// }

// #include <iostream> 

// namespace first{
//     int x = 1; 
// }

// namespace second{
//     int x = 2; 
// }

// int main(){

    // using namespace std; 
    // using namespace first; 
    // using namespace second; 
    // using std::cout; 
    // using std::string; 

    // int x = 0; 
    // int x = 1;

    // std::cout << x; 
    // std::cout << first::x; 
    // std::cout << second::x; 

    // string name = "Edwin"; 
    // std::string name = "Edwin"; 

    // cout << "Hello " << name; 
    // std::cout << "Hello " << name; 

//     return 0; 
// }

// #include <iostream> 
// #include <vector> 

// typedef std::vector<std::pair<std::string, int>> pairlist_t;  
// typedef std::string text_t; 
// typedef int number_t; 
// using text_t = std::string; 
// using number_t = int; 

// int main(){
    
    // std::vector<std::pair<std::string, int>> pairlist; 
    // pairlist_t pairlist; 

    // std::string firstName; 
    // text_t firstName = "Edwin"; 
    // number_t age = 19; 

//     std::cout << firstName << '\n'; 
//     std::cout << age << '\n'; 

//     return 0; 
// }

// #include <iostream> 

// int main(){

    // int students = 20; 
    // double students = 20; 

    // students = students + 1; 
    // students += 1; 
    // students++; 

    // students = students - 1; 
    // students -= 1; 
    // students--; 

    // students = students * 2; 
    // students *= 2; 

    // students = students / 2; 
    // students /= 2; 

    // students = students / 3; 
    // students /= 3; 

    // int remainder = students % 2; 
    // int remainder = students % 3; 

    // std::cout << students; 
    // std::cout << remainder; 

    // int students = 6 - 5 + 4 * 3 / 2; 
//     int students = 6 - (5 + 4) * 3 / 2; 

//     std::cout << students; 

//     return 0; 
// }

// #include <iostream> 

// int main(){

    // double x = 3.14; 
    // double x = (int) 3.14; 

    // char x = 100; 

    // std::cout << x; 
    // std::cout << (char) 100; 

//     int correct = 8;  
//     int questions = 10; 
//     double score = correct / (double) questions * 100; 

//     std::cout << score << " %"; 

//     return 0; 
// }

// #include <iostream>

// cout << (insertion operator)
// cin << (extraction operator)

// int main(){

    // std::string name; 
    // int age; 

    // std::cout << "What's your age ? : "; 
    // std::cin >> age; 
    
    // std::cout << "What's your full name ? : "; 
    // std::cin >> name; 
    // std::getline(std::cin, name); 
    // std::getline(std::cin >> std::ws, name); 

//     std::cout << "Hello " << name << '\n'; 
//     std::cout << "You are " << age << " years old" << '\n'; 

//     return 0; 
// }
 
// #include <iostream> 
// #include <cmath> 

// int main(){

    // double x = 3; 
    // double x = 3.14; 
    // double x = 3.99; 
    // double y = 4; 
    // double z; 

    // z = std::max(x, y); 
    // z = std::min(x, y); 
    // z = pow(2, 4); 
    // z = sqrt(9); 
    // z = abs(-3); 
    // z = round(x); 
    // z = ceil(x); 
    // z = floor(x);

//     std::cout << z; 

//     return 0; 
// }

// #include <iostream> 
// #include <cmath> 

// int main(){

//     double a;
//     double b;
//     double c;

//     std::cout << "Enter side A : "; 
//     std::cin >> a; 

//     std::cout << "Enter side B : "; 
//     std::cin >> b; 

    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b); 
//     c = sqrt(pow(a, 2) + pow(b, 2)); 

//     std::cout << "Side C : " << c << '\n'; 

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     int age; 

//     std::cout << "Enter your age : "; 
//     std::cin >> age; 

//     if(age >= 100){
//         std::cout << "You are too old to enter this site!" << '\n'; 
//     } else if(age >= 18){
//         std::cout << "Welcome to the site!" << '\n'; 
//     } else if(age < 0){
//         std::cout << "You haven't been born yet!" << '\n'; 
//     } else {
//         std::cout << "You are not old enough to enter!" << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     int month; 
//     std::cout << "Enter the month (1-12) : "; 
//     std::cin >> month; 

    // if(month == 1){
    //     std::cout << "It is January" << '\n'; 
    // } else if(month == 2){
    //     std::cout << "It is February" << '\n'; 
    // } else if(month == 3){
    //     std::cout << "It is March" << '\n'; 
    // } else if(month == 4){
    //     std::cout << "It is April" << '\n'; 
    // } else if(month == 5){
    //     std::cout << "It is May" << '\n'; 
    // } else if(month == 6){
    //     std::cout << "It is June" << '\n'; 
    // } else if(month == 7){
    //     std::cout << "It is July" << '\n'; 
    // } else if(month == 8){ 
    //     std::cout << "It is August" << '\n'; 
    // } else if(month == 9){
    //     std::cout << "It is September" << '\n'; 
    // } else if(month == 10){
    //     std::cout << "It is October" << '\n'; 
    // } else if(month == 11){
    //     std::cout << "It is November" << '\n'; 
    // } else if(month == 12){
    //     std::cout << "It is December" << '\n'; 
    // } else {
    //     std::cout << "You didn't enter a number between (1-12)" << '\n'; 
    // }

//     switch(month){
//         case 1: 
//             std::cout << "It is January" << '\n';  
//             break; 
//         case 2: 
//             std::cout << "It is February" << '\n'; 
//             break; 
//         case 3: 
//             std::cout << "It is March" << '\n'; 
//             break; 
//         case 4: 
//             std::cout << "It is April" << '\n'; 
//             break; 
//         case 5: 
//             std::cout << "It is May" << '\n'; 
//             break; 
//         case 6: 
//             std::cout << "It is June" << '\n'; 
//             break; 
//         case 7: 
//             std::cout << "It is July" << '\n'; 
//             break; 
//         case 8: 
//             std::cout << "It is August" << '\n'; 
//             break; 
//         case 9: 
//             std::cout << "It is September" << '\n'; 
//             break; 
//         case 10: 
//             std::cout << "It is October" << '\n'; 
//             break; 
//         case 11: 
//             std::cout << "It is November" << '\n'; 
//             break; 
//         case 12: 
//             std::cout << "It is December" << '\n'; 
//             break; 
//         default: 
//             std::cout << "Please enter in only numbers (1-12)" << '\n'; 

//     }

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     char grade; 

//     std::cout << "What letter grade ? : "; 
//     std::cin >> grade; 

//     switch(grade){
//         case 'A': 
//             std::cout << "You did great!" << '\n'; 
//             break; 
//         case 'B': 
//             std::cout << "You did good" << '\n'; 
//             break; 
//         case 'C': 
//             std::cout << "You did okay" << '\n'; 
//             break; 
//         case 'D': 
//             std::cout << "You did not do good" << '\n'; 
//             break; 
//         case 'F': 
//             std::cout << "YOU FAILED!" << '\n'; 
//             break; 
//         default: 
//             std::cout << "Please only enter in a letter grade (A-F)" << '\n'; 
//     }    

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     char op; 
//     double num1; 
//     double num2; 
//     double result; 

//     std::cout << "********** CALCULATOR **********\n";

//     std::cout << "Enter either (+ - * /) : "; 
//     std::cin >> op; 

//     std::cout << "Enter #1 : "; 
//     std::cin >> num1; 

//     std::cout << "Enter #2 : "; 
//     std::cin >> num2; 

//     switch(op){
//         case '+':
//             result = num1 + num2; 
//             std::cout << "result : " << result << '\n'; 
//             break; 
//         case '-':
//             result = num1 - num2; 
//             std::cout << "result : " << result << '\n'; 
//             break; 
//         case '*':
//             result = num1 * num2; 
//             std::cout << "result : " << result << '\n'; 
//             break; 
//         case '/':
//             result = num1 / num2; 
//             std::cout << "result : " << result << '\n'; 
//             break; 
//         default: 
//             std::cout << "That wasn't a valid operator\n"; 
//     }

//     std::cout << "********************************\n"; 

//     return 0; 
// }

// #include <iostream> 

// int main(){

    // int grade = 75; 

    // if(grade >= 60){
    //     std::cout << "You pass!" << '\n';
    // } else {
    //     std::cout << "You fail!" << '\n';
    // }

    // grade >= 60 ? std::cout << "You pass!" << '\n': std::cout << "You fail!" << '\n';

    // int number = 9; 
    // number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    // bool hungry = false; 

    // hungry ? std::cout << "You are hungry\n" : std::cout << "You are full" << '\n'; 
    // std::cout << (hungry ? "You are hungry" : "You are full"); 

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     int temp; 
//     bool sunny = true; 
    
//     std::cout << "Enter the temperature : "; 
//     std::cin >> temp; 

    // if(temp > 0 && temp < 30){
    //     std::cout << "The temperature is good!\n"; 
    // } else {
    //     std::cout << "The temperature is bad!\n"; 
    // }
    
    // if(temp <= 0 || temp >= 30){
    //     std::cout << "The temperature is bad!\n"; 
    // } else {
    //     std::cout << "The temperature is good!\n"; 
    // }

    // if(sunny){
    //     std::cout << "It is sunny outside!\n"; 
    // } else {
    //     std::cout << "It is cloudy outside!\n"; 
    // }

//     if(!sunny){
//         std::cout << "It is cloudy outside!\n"; 
//     } else {
//         std::cout << "It is sunny outside!\n"; 
//     }

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     double temp; 
//     char unit; 

//     std::cout << "***** Temperature conversion *****\n";
//     std::cout << "F = Fahrenheit\n"; 
//     std::cout << "C = Celcius\n"; 
//     std::cout << "What unit would you like to convert to : "; 
//     std::cin >> unit; 

//     if(unit == 'F' || unit == 'f'){
//         std::cout << "Enter the temperature in Celcius : ";
//         std::cin >> temp; 

//         temp = (1.8 * temp) + 32.0; 
//         std::cout << "Temperature is : " << temp << " F\n";

//     } else if(unit == 'C' || unit == 'c'){
//         std::cout << "Enter the temperature in Fahrenheit : "; 
//         std::cin >> temp; 

//         temp = (temp - 32) / 1.8; 
//         std::cout << "Temperature is : " << temp << " C\n"; 
    
//     } else {
//         std::cout << "Please enter in only C or F\n"; 
//     }

//     std::cout << "**********************************\n";

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     std::string name; 

//     std::cout << "Enter your name : "; 
//     std::getline(std::cin, name); 

    // if(name.length() > 12){
    //     std::cout << "You name can't be over 12 characters\n"; 
    // } else {
    //     std::cout << "Welcome " << name <<'\n'; 
    // }

    // if(name.empty()){
    //     std::cout << "You didn't enter your name\n";
    // } else {
    //     std::cout << "Hello " << name << "\n"; 
    // }

    // name.clear(); 

    // std::cout << "Hello " << name << '\n'; 

    // name.append("@gmail.com"); 

    // std::cout << "Your username is now " << name << '\n'; 

    // std::cout << name.at(0) << '\n'; 

    // name.insert(0, "@"); 

    // std::cout << name << '\n'; 

    // name.erase(0, 3); 

    // std::cout << name.find(' '); 
    // std::cout << name << '\n'; 

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     std::string name; 

    // while(name.empty()){
    //     std::cout << "Enter your name : "; 
    //     std::getline(std::cin, name); 
    // }

//     while(1 == 1){
//         std::cout << "HELP! I'M STUCK IN AN INFINITE LOOP!"; 
//     }

//     std::cout << "Hello " << name << '\n'; 

//     return 0; 
// }

// #include <iostream>

// int main(){

//     int number; 

    //     std::cout << "Enter a positive # : "; 
    //     std::cin >> number; 
    
    // while(number < 0){
    //     std::cout << "Enter a positive # : "; 
    //     std::cin >> number; 
    // }

//     do{
//         std::cout << "Enter a positive # : "; 
//         std::cin >> number; 
//     } while (number < 0); 


//     std::cout << "The # is : " << number << '\n'; 

//     return 0; 
// }

// #include <iostream>

// int main(){

    // for (int i = 1; i <= 3; i++){
    //     std::cout << "HAPPY NEW YEAR!\n"; 
    // }

//     for(int i = 1; i <= 10; i++){
//         std::cout << i << '\n'; 
//     }

//     std::cout << "HAPPY NEW YEAR!\n"; 

//     return 0; 
// }

// #include <iostream>

// int main(){

//     for (int i = 1; i <= 20; i++){
//         if(i == 13){
//             break; 
//             continue;
//         }

//         std::cout << i << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream>

// int main(){

//     int rows; 
//     int columns; 
//     char symbol; 

//     std::cout << "How many rows ? : "; 
//     std::cin >> rows; 

//     std::cout << "How many columns ? : "; 
//     std::cin >> columns;

//     std::cout << "Enter a symbol to use : "; 
//     std::cin >> symbol; 

    // for(int i = 1; i <= 3; i++){
    //     for (int j = 1; j <= 10; j++){
    //         std::cout << j << ' '; 
    //     }
    //     std::cout << '\n'; 
    // }

//     for (int i = 1; i <= rows; i++){
//         for (int j = 1; j <= columns; j++){
//             std::cout << symbol; 
//         }
//         std::cout << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream> 

// int main(){

//     srand(time(NULL)); 

    // int num = (rand() % 6) + 1; 
    // int num = (rand() % 20) + 1; 
    // int num = (rand() % 100) + 1; 

//     int num1 = (rand() % 6) + 1; 
//     int num2 = (rand() % 6) + 1; 
//     int num3 = (rand() % 6) + 1; 

//     std::cout << num1 << '\n'; 
//     std::cout << num2 << '\n'; 
//     std::cout << num3 << '\n'; 

//     return 0; 
// }

// #include <iostream> 
// #include <ctime>

// int main(){

//     srand(time(0)); 
//     int randNum = rand() % 5 + 1; 

//     switch (randNum){
//         case 1: std::cout << "You win a bumper sticker!\n";
//                 break;
//         case 2: std::cout << "You win a t-shirt!\n";
//                 break;
//         case 3: std::cout << "You win a free lunch!\n";
//                 break;
//         case 4: std::cout << "You win a gift card!\n";
//                 break;
//         case 5: std::cout << "You win concert tickets!\n";
//                 break;
    
//     default:
//         break;
//     }

//     return 0; 
// }

// #include <iostream>

// int main(){

//     int num; 
//     int guess; 
//     int tries; 

//     srand(time(NULL)); 
//     num = (rand() % 100) + 1; 

//     std::cout << "****** NUMBER GUESSING GAME ******\n"; 

//     do {
//         std::cout << "Enter a guess between (1-100) : "; 
//         std::cin >> guess; 
//         tries++; 

//         if(guess > num){
//             std::cout << "Too high!\n"; 
//         } else if(guess < num){
//             std::cout << "Too low!\n"; 
//         } else {
//             std::cout << "CORRECT! # of tries : " << tries << '\n'; 
//         }

//     } while (guess != num); 

//     std::cout << "**********************************\n"; 

//     return 0; 
// }

// #include <iostream>

// void happyBirthday(); 
// void happyBirthday(std::string name, int age); 

// int main(){

//     std::string name = "Edwin"; 
//     int age = 19; 

    // happyBirthday(); 
    // happyBirthday(name, age); 
 
//     return 0; 
// }

// void happyBirthday(){
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "Happy Birthday dear you!\n";
//     std::cout << "Happy Birthday to you!\n\n";
// }

// void happyBirthday(std::string name, int age){
//     std::cout << "Happy Birthday to " << name << '\n';
//     std::cout << "Happy Birthday to " << name << '\n';
//     std::cout << "Happy Birthday dear " << name << '\n';
//     std::cout << "Happy Birthday to " << name << '\n';
//     std::cout << "You are " << age << " years old!\n";
// }

// #include <iostream> 

// double square(double length); 
// double cube(double length); 

// int main(){

//     double length = 5.0; 
//     double area = square(length); 
//     double volume = cube(length); 

//     std::cout << "Area : " << area << " cm^2\n"; 
//     std::cout << "VOlume : " << volume << " cm^3\n"; 

//     return 0; 
// }

// double square(double length){
//     return length * length; 
// }

// double cube(double length){
//     return length * length * length; 
// }

// #include <iostream>

// std::string concatStrings(std::string string1, std::string string2);

// int main(){

//     std::string firstName = "Edwin"; 
//     std::string lastName = "Hasannudin"; 
//     std::string fullName = concatStrings(firstName, lastName);

//     std::cout << "Hello " << fullName; 

//     return 0; 
// }

// std::string concatStrings(std::string string1, std::string string2){
//     return string1 + " " + string2; 
// }

// #include <iostream>

// void bakePizza(); 
// void bakePizza(std::string topping1); 
// void bakePizza(std::string topping1, std::string topping2); 

// int main(){

    // bakePizza(); 
    // bakePizza("pepperoni"); 
//     bakePizza("pepperoni", "mushrooms"); 

//     return 0; 
// }

// void bakePizza(){
//     std::cout << "Here is your pizza!\n"; 
// }

// void bakePizza(std::string topping1){
//     std::cout << "Here is your " << topping1 << " pizza!\n"; 
// }

// void bakePizza(std::string topping1, std::string topping2){
//     std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n"; 
// }

// #include <iostream>

//     int myNum = 3; 

// void printNum(int myNum); 
// void printNum(); 

// int main(){

//     int myNum = 1; 

    // std::cout << myNum; 
    // printNum(myNum); 
    // printNum(); 
    // std::cout << myNum << '\n'; 
    // std::cout << ::myNum << '\n'; 

//     return 0; 
// }

// void printNum(int myNum){
//     std::cout << myNum; 
// }

// void printNum(){
//     int myNum = 2; 
    // std::cout << myNum << '\n'; 
//     std::cout << ::myNum << '\n'; 
// }

// #include <iostream>
// #include <iomanip> 

// void showBalance(double balance);
// double deposit(); 
// double withdraw(double balance);

// int main(){

    // double balance = 123.01; 
    // double balance = 0; 
    // int choice = 0; 

//     do{
//         std::cout << "********************\n";    
//         std::cout << "Enter your choice : \n";    
//         std::cout << "********************\n";    
//         std::cout << "1. Show Balance\n";    
//         std::cout << "2. Deposit Money\n";    
//         std::cout << "3. Withdraw Money\n";    
//         std::cout << "4. Exit\n";    
//         std::cin >> choice; 

//         std::cin.clear(); 
//         fflush(stdin); 

//         switch (choice){
//             case 1: showBalance(balance); 
//                     break;
//             case 2: balance += deposit(); 
//                     showBalance(balance); 
//                     break; 
//             case 3: balance -= withdraw(balance); 
//                     showBalance(balance); 
//                     break; 
//             case 4: std::cout << "Thanks for visiting!\n"; 
//                     break;      
//             default: std::cout << "Invalid choice\n"; 
//         }
//     } while (choice != 4); 

//     return 0; 
// }

// void showBalance(double balance){
//     std::cout << "Your balance is : $ " << std::setprecision(2) << std::fixed << balance << '\n'; 
// }

// double deposit(){

//     double amount = 0; 

//     std::cout << "Enter amount to be deposited : "; 
//     std::cin >> amount; 

//     if(amount > 0){
//         return amount; 
//     } else {
//         std::cout << "That's not a valid amount : \n";
//         return 0; 
//     }
// }

// double withdraw(double balance){

//     double amount = 0; 

//     std::cout << "Enter amount to be withdrawn : "; 
//     std::cin >> amount; 

//     if (amount > balance){
//         std::cout << "insufficient funds\n"; 
//         return 0; 
//     } else if (amount < 0){
//         std::cout << "That's not a valid amount\n"; 
//         return 0; 
//     } else {
//         return amount; 
//     }
// }

// #include <iostream>
// #include <ctime>

// char getUserChoice(); 
// char getComputerChoice(); 
// void showChoice(char choice); 
// void chooseWinner(char player, char computer); 

// int main(){

//     char player; 
//     char computer; 

//     player = getUserChoice(); 
//     std::cout << "You choice : "; 
//     showChoice(player); 

//     computer = getComputerChoice(); 
//     std::cout << "Computer's choice : "; 
//     showChoice(computer); 

//     chooseWinner(player, computer); 

//     return 0; 
// }

// char getUserChoice(){
    
//     char player; 
//     std::cout << "Rock-Paper-Scissors Game!\n"; 

//     do {
//         std::cout << "Choose one of the following\n";
//         std::cout << "*************************\n";
//         std::cout << "'r' for rock\n"; 
//         std::cout << "'p' for paper\n"; 
//         std::cout << "'s' for scissors\n"; 
//         std::cin >> player; 
//     } while (player != 'r' && player != 'p' && player != 's'); 

//     return player; 
// }

// char getComputerChoice(){

//     srand(time(0)); 
//     int num = rand() % 3 + 1; 

//     switch(num){
//         case 1: return 'r';  
//         case 2: return 'p'; 
//         case 3: return 's'; 
//     }

//     return 0; 
// }

// void showChoice(char choice){
     
//     switch (choice){
//         case 'r': std::cout << "Rock\n"; 
//                   break; 
//         case 'p': std::cout << "Paper\n"; 
//                   break; 
//         case 's': std::cout << "Scissors\n"; 
//                   break; 
//     }
// } 

// void chooseWinner(char player, char computer){

//     switch(player){
//         case 'r': if(computer == 'r'){
//                     std::cout << "It's a tie!\n"; 
//                   } else if(computer == 'p'){
//                     std::cout << "You lose!\n"; 
//                   } else {
//                     std::cout << "You win!\n"; 
//                   } break; 
        
//         case 'p': if(computer == 'r'){
//                     std::cout << "You win!\n"; 
//                   } else if(computer == 'p'){
//                     std::cout << "It's a tie!\n"; 
//                   } else {
//                     std::cout << "You lose!\n"; 
//                   } break; 
       
//         case 's': if(computer == 'r'){
//                     std::cout << "You lose!\n"; 
//                   } else if(computer == 'p'){
//                     std::cout << "You win!\n"; 
//                   } else {
//                     std::cout << "It's a tie!\n"; 
//                   } break; 
//     }
// }

// #include <iostream>

// int main(){

    // std::string cars[] = {"Corvette", "Mustang", "Camry"};
    // std::string cars[3];

//     cars[0] = "Camaro"; 
//     cars[1] = "Mustang"; 
//     cars[2] = "Camry"; 

//     std::cout << cars[0] << '\n';  
//     std::cout << cars[1] << '\n';  
//     std::cout << cars[2] << '\n';  

//     return 0; 
// }

// #include <iostream>

// int main(){

//     double prices[] = {5.00, 7.50, 9.99, 15.00};

//     std::cout << prices[0] << '\n';
//     std::cout << prices[1] << '\n';
//     std::cout << prices[2] << '\n';
//     std::cout << prices[3] << '\n';

//     return 0; 
// }

// #include <iostream>

// int main(){

//     std::string name = "Edwin Hasannudin is awesome"; 
//     double gpa = 2.5; 
//     char grade = 'F'; 
//     bool student = true; 
//     char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'}; 
//     std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"}; 

    // std::cout << sizeof(gpa) << " bytes\n"; 
    // std::cout << sizeof(double) << " bytes\n"; 
    // std::cout << sizeof(name) << " bytes\n"; 
    // std::cout << sizeof(grade) << " bytes\n"; 
    // std::cout << sizeof(student) << " bytes\n"; 
    // std::cout << sizeof(grades) << " bytes\n"; 
    // std::cout << sizeof(grades) / sizeof(char) << " elements\n"; 
//     std::cout << sizeof(students) / sizeof(std::string) << " elements\n"; 

//     return 0; 
// }

// #include <iostream>

// int main(){

    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"}; 
    // char grades[] = {'A', 'B', 'C', 'D', 'F'}; 

    // std::cout << students[0] << '\n'; 
    // std::cout << students[1] << '\n'; 
    // std::cout << students[2] << '\n'; 

    // for(int i = 0;i < 4; i++){
    //     std::cout << students[i] << '\n'; 
    // }

    // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
    //     std::cout << students[i] << '\n'; 
    // }

//     for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
//         std::cout << grades[i] << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream>

// int main(){

    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"}; 
    // int grades[] = {65, 72, 81, 93}; 

    // for(std::string students : students){
    //     std::cout << students << '\n'; 
    // }   

//     for(int grade : grades){
//         std::cout << grade << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream>

// double getTotal(double prices[], int size); 

// int main(){
    
//     double prices[] = {49.99, 15.05, 75, 9.99};
//     int size = sizeof(prices)/sizeof(prices[0]);
//     double total = getTotal(prices, size); 

//     std::cout << "$ " << total;

//     return 0;   
// }

// double getTotal(double prices[], int size){
//     double total = 0; 

//     for(int i = 0; i < size; i++){
//         total += prices[i]; 
//     }

//     return total; 
// }

// #include <iostream>

// int searchArray(std::string array[], int size, std::string element); 

// int main(){

    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    // std::string foods[] = {"pizza", "hamburger", "hotdog"}; 
    // int size = sizeof(numbers)/sizeof(numbers[0]); 
    // int size = sizeof(foods)/sizeof(foods[0]); 
    // int index; 
    // int myNum; 
    // std::string myfoods; 

    // std::cout << "Enter element to search for : " << '\n'; 
    // std::cin >> myNum; 
    // std::getline(std::cin, myfoods);  
    
    // index = searchArray(numbers, size, myNum); 
    // index = searchArray(foods, size, myfoods); 

    // if(index != -1){
        // std::cout << myNum << " is at index " << index; 
        // std::cout << myfoods << " is at index " << index; 
    // } else {
        // std::cout << myNum << " is not in the array"; 
    //     std::cout << myfoods << " is not in the array"; 
    // }

//     return 0; 
// }

// int searchArray(int array [], int size, int element){
// int searchArray(std::string array [], int size, std::string element){

//     for(int i = 0; i < size; i++){
//         if(array[i] == element){
//             return i; 
//         }
//     }
//     return -1; 
// }

// #include <iostream>

// void sort(int array [], int size); 

// int main(){

//     int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
//     int size = sizeof(array)/sizeof(array[0]); 

//     sort(array, size); 

//     for (int element : array){
//         std::cout << element << " "; 
//     }

//     return 0; 
// }

// void sort(int array[], int size){

//     int temp; 
//     for (int i = 0; i < size - 1; i++){
//         for(int j = 0; j < size - i - 1; j++){
            // if(array[j] > array[j + 1]){
//             if(array[j] < array[j + 1]){
//                 temp = array[j]; 
//                 array[j] = array[j + 1]; 
//                 array[j + 1] = temp; 
//             }
//         }
//     }
// }

// #include <iostream>

// int main(){

    // std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    // std::string foods[100]; 
    // const int SIZE = 100; 
    // const int SIZE = 99; 
    // std::string foods[SIZE]; 

    // fill(foods, foods + 100, "pizza"); 
    // fill(foods, foods + SIZE, "pizza"); 
    // fill(foods, foods + (SIZE/3), "pizza"); 
    // fill(foods + (SIZE/3), foods + (SIZE/3) * 2, "hamburgers"); 
    // fill(foods + (SIZE/3) * 2, foods + SIZE, "hotdog"); 

//     for(std::string food : foods){
//         std::cout << food << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream>

// int main(){

//     std::string foods[5];
//     int size = sizeof(foods)/sizeof(foods[0]);
//     std::string temp;  

//     for (int i = 0; i < size; i++){
//         std::cout << "Enter a food you like or 'q' to quit # " << i  + 1 << ": "; 
        // std::getline(std::cin, foods[i]); 
        // std::getline(std::cin, temp); 
        // if(foods[i] == "q"){
    //     if(temp == "q"){
    //         break; 
    //     } else {
    //         foods[i] = temp; 
    //     }
    // }

    // std::cout << "You like the following food : \n"; 

    // for (std::string food : foods){
//     for (int i = 0; !foods[i].empty(); i++){
//         std::cout << foods[i] << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream>

// int main(){

//     std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
//                             {"Corvette", "Equinox", "Silverado"}, 
//                             {"Challenger", "Durango", "Ram 1500"}}; 

    // std::cout << cars[0][0] << " "; 
    // std::cout << cars[0][1] << " "; 
    // std::cout << cars[0][2] << "\n"; 
    // std::cout << cars[1][0] << " "; 
    // std::cout << cars[1][1] << " "; 
    // std::cout << cars[1][2] << "\n"; 
    // std::cout << cars[2][0] << " "; 
    // std::cout << cars[2][1] << " "; 
    // std::cout << cars[2][2] << "\n"; 

    // int rows = sizeof(cars)/sizeof(cars[0]); 
    // int columns = sizeof(cars[0])/sizeof(cars[0][0]); 

    // for (int i = 0; i < rows; i++){
        // std::cout << cars[i] << '\n'; 
//         for (int j = 0; j < columns; j++){
//             std::cout << cars[i][j] << " "; 
//         }
//         std::cout << '\n'; 
//     }

//     return 0; 
// }

// #include <iostream>

// int main(){

//     std::string questions[] {"1. What year was C++ created ? : ", 
//                              "2. Who invented C++ ? : ", 
//                              "3. What is the predecessor of C++ ? : ", 
//                              "4. Is the Earth flat ? : "}; 

//     std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"}, 
//                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"}, 
//                                {"A. C", "B. C+", "C. C--", "D. B++"}, 
//                                {"A. yes", "B. no", "C. sometimes", "D. What's Earth ?"}};  

//     char answerKey[] = {'C', 'B', 'A', 'B'}; 

//     int size = sizeof(questions)/sizeof(questions[0]); 
//     char guess; 
//     int score; 

//     for (int i = 0; i < size; i++){
//         std::cout << "**************************\n";
//         std::cout << questions[i] << '\n'; 
//         std::cout << "**************************\n";

//         for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
//             std::cout << options[i][j] << '\n'; 
//         }

//         std::cin >> guess; 
//         guess = toupper(guess); 

//         if(guess == answerKey[i]){
//             std::cout << "CORRECT\n"; 
//             score++; 
//         } else {
//             std::cout << "WRONG!\n"; 
//             std::cout << "Answer : " << answerKey[i] << '\n'; 
//         }
//     }

//     std::cout << "**************************\n";
//     std::cout << "*         RESULTS        *\n"; 
//     std::cout << "**************************\n";
//     std::cout << "CORRECT GUESSES : " << score << '\n'; 
//     std::cout << "# of QUESTIONS : " << size << '\n'; 
//     std::cout << "SCORE : " << (score/(double)size) * 100 << " %\n"; 
 
//     return 0; 
// }

// #include <iostream>

// int main(){

//     std::string name = "Edwin"; 
//     int age = 19; 
//     bool student = true; 

//     std::cout << &name << '\n'; 
//     std::cout << &age << '\n'; 
//     std::cout << &student << '\n'; 

//     return 0; 
// }

// #include <iostream> 

// void swap(std::string x, std::string y); 
// void swap(std::string &x, std::string &y); 

// int main(){

//     std::string x = "Kool-Aid"; 
//     std::string y = "Water"; 
    
//     swap (x, y); 

//     std::cout << "X : " << &x << '\n'; 
//     std::cout << "Y : " << &y << '\n';  

//     return 0; 
// }

// void swap (std::string x, std::string y){
// void swap (std::string &x, std::string &y){
    // std::string temp; 

    // temp = x; 
    // x = y; 
    // y = temp; 

//     std::cout << "X : " << &x << '\n'; 
//     std::cout << "Y : " << &y << '\n';  
// }

// #include <iostream>

// void printInfo(std::string name, int age);
// void printInfo(const std::string name, const int age); 

// int main(){

//     std::string name = "Edwin"; 
//     int age = 19; 

//     printInfo(name, age); 

//     return 0; 
// }

// void printInfo(std::string name, int age){
// void printInfo(const std::string name, const int age){
//     name = " ";
//     age = 0; 
//     std::cout << name << '\n'; 
//     std::cout << age << '\n'; 
// }

// #include <iostream>

// int getDigit(const int number); 
// int sumOddDigits(const std::string cardNumber); 
// int sumEvenDigits(const std::string cardNumber); 

// int main(){

//     std::string cardNumber; 
//     int result = 0; 

//     std::cout << "Enter a credit card # : "; 
//     std::cin >> cardNumber; 

//     result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber); 

//     if(result % 10 == 0){
//         std::cout << cardNumber << " is valid"; 
//     } else {
//         std::cout << cardNumber << " is not valid"; 
//     }

//     return 0;     
// }

// int getDigit(const int number){

//     return number % 10 + (number / 10 % 10); 
// } 

// int sumOddDigits(const std::string cardNumber){
    
//     int sum = 0; 

//     for(int i = cardNumber.size() -1; i >= 0; i -= 2){
//         sum += cardNumber[i] - '0'; 
//     }

//     return sum; 
// }

// int sumEvenDigits(const std::string cardNumber){
    
//     int sum = 0; 

//     for(int i = cardNumber.size() -2; i >= 0; i -= 2){
//         sum += getDigit((cardNumber[i] - '0') * 2); 
//     }

//     return sum; 
// }

// #include <iostream>

// int main(){

//     std::string name = "Edwin"; 
//     int age = 19; 
//     std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"}; 

//     std::string *pName = &name; 
//     int *pAge = &age; 
//     std::string *pFreePizzas = freePizzas; 

    // std::cout << pName; 
    // std::cout << *pName << '\n'; 
    // std::cout << *pAge << '\n'; 
    // std::cout << *freePizzas << '\n'; 

//     return 0; 
// }

// #include <iostream>

// int main(){

//     int *pointer = nullptr; 
//     int x = 123; 

    // pointer = &x; 

    // if(pointer == nullptr){
    //     std::cout << "address was not assigned!\n"; 
    //     std::cout << *pointer; 
    // } else { 
    //     std::cout << "address was assigned!\n"; 
        // std::cout << *pointer; 
//     }

//     return 0; 
// }

// #include <iostream>
// #include <ctime>

// void drawBoard(char *spaces); 
// void playerMove(char *spaces, char player); 
// void computerMove(char *spaces, char computer); 
// bool checkWinner(char *spaces, char player, char computer); 
// bool checkTie(char *spaces); 

// int main(){

//     char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; 
//     char player = 'X'; 
//     char computer = 'O'; 
//     bool running = true; 

//     drawBoard(spaces); 

//     while (running){
//         playerMove(spaces, player); 
//         drawBoard(spaces); 
//         if(checkWinner(spaces, player, computer)){
//             running = false; 
//             break; 
//         } else if(checkTie(spaces)){
//             running = false; 
//             break; 
//         }

//         computerMove(spaces, computer); 
//         drawBoard(spaces); 
//         if(checkWinner(spaces, player, computer)){
//             running = false; 
//             break; 
//         } else if(checkTie(spaces)){
//             running = false; 
//             break; 
//         }
//     }
//     std::cout << "Thanks for playing!\n"; 

//     return 0; 
// }

// void drawBoard(char *spaces){
//     std::cout << '\n';
//     std::cout << "     |     |     " << '\n'; 
//     std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n'; 
//     std::cout << "_____|_____|_____" << '\n'; 
//     std::cout << "     |     |     " << '\n'; 
//     std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n'; 
//     std::cout << "_____|_____|_____" << '\n'; 
//     std::cout << "     |     |     " << '\n'; 
//     std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n'; 
//     std::cout << "     |     |     " << '\n'; 
//     std::cout << '\n';
// } 

// void playerMove(char *spaces, char player){
//     int number; 

//     do{
//         std::cout << "Enter a spot to place a marker (1-9) : "; 
//         std::cin >> number; 
//         number--; 

//         if(spaces[number] == ' '){
//             spaces[number] = player; 
//             break; 
//         }
//     } while(!number > 0 || !number < 8);
// }

// void computerMove(char *spaces, char computer){
//     int number; 
//     srand (time(0)); 

//     while (true){
//         number = rand() %  9; 
//         if(spaces[number] == ' '){
//             spaces[number] = computer; 
//             break; 
//         }
//     }
// } 

// bool checkWinner(char *spaces, char player, char computer){

//     if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
//         spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
//         spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
//         spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
//         spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
//         spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
//         spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
//         spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
//         spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; 
//     } else {
//         return false; 
//     }

//     return true; 
// } 

// bool checkTie(char *spaces){

//     for(int i = 0; i < 9; i++){
//         if(spaces[i] == ' '){
//             return false; 
//         }
//     }

//     std::cout << "IT'S A TIE!\n"; 
//     return true; 
// } 

// #include <iostream>

// int main(){

    // int *pNum = NULL; 

    // pNum = new int; 

    // *pNum = 19; 

    // std::cout << "address : " << pNum << '\n'; 
    // std::cout << "value : " << *pNum << '\n'; 

    // delete pNum; 

    // char *pGrades = NULL; 
    // int size; 

    // std::cout << "How many grades to enter in ? : "; 
    // std::cin >> size; 

    // pGrades = new char[size];

    // for (int i = 0; i < size; i++){
    //     std::cout << "Enter grade # " << i + 1 << " : "; 
    //     std::cin >> pGrades[i];  
    // } 

    // for (int i = 0; i < size; i++){
    //     std::cout << pGrades[i] << " "; 
    // }

    // delete[] pGrades; 

//     return 0; 
// }

// #include <iostream>

// void walk (int steps); 

// int factorial(int num); 

// int main (){

    // walk(100); 
    // std::cout << factorial(10); 

//     return 0; 
// }

// void walk(int steps){
    // for (int i = 0; i < steps; i++){
//     if(steps > 0){
//         std::cout << "You take a step!\n"; 
//         walk(steps - 1); 
//     }
// }

// int factorial(int num){
    // int result = 1; 

    // for(int i = 1; i <= num; i++){
    //     result = result * i; 
    // }

    // if(num > 1){
    //     return num * factorial(num - 1); 
    // } else {
    //     return 1; 
    // }

    // return result; 
// }

// #include <iostream>
// template <typename T> 
// template <typename T, typename U> 

// int max(int x, int y){
//     return (x > y) ? x : y; 
// }

// double max(double x, double y){
//     return (x > y) ? x : y; 
// }

// char max(char x, char y){
//     return (x > y) ? x : y; 
// }

// T max (T x, T y){
//     return (x > y) ? x : y; 
// }

// T max (T x, U y){
//     return (x > y) ? x : y; 
// }

// auto max (T x, U y){
//     return (x > y) ? x : y; 
// }

// int main(){

    // std::cout << max(1, 2) << '\n';
    // std::cout << max(1.1, 2.1) << '\n';
    // std::cout << max('1', '2') << '\n';
//     std::cout << max(1, 2.1) << '\n';

//     return 0; 
// }

// #include <iostream>

// struct student{
//     std::string name; 
//     double gpa;
//     bool enrolled;  
// };  

// int main(){

//     student student1; 
//     student1.name = "Spongebob"; 
//     student1.gpa = 3.2; 
//     student1.enrolled = true; 

//     student student2; 
//     student2.name = "Patrick"; 
//     student2.gpa = 2.1; 
//     student2.enrolled = true;

//     student student3; 
//     student3.name = "Squidward"; 
//     student3.gpa = 1.5; 
//     student3.enrolled = false; 

//     std::cout << student1.name << '\n'; 
//     std::cout << student1.gpa << '\n'; 
//     std::cout << student1.enrolled << '\n'; 
    
//     std::cout << student2.name << '\n'; 
//     std::cout << student2.gpa << '\n'; 
//     std::cout << student2.enrolled << '\n'; 
    
//     std::cout << student3.name << '\n'; 
//     std::cout << student3.gpa << '\n'; 
//     std::cout << student3.enrolled << '\n'; 

//     return 0; 
// }

// #include <iostream>

// struct Car{
//     std::string model; 
//     int year; 
//     std::string color; 
// }; 

// void printCar(Car car); 
// void printCar(Car &car); 
// void paintCar(Car &car, std::string color); 
// void paintCar(Car car, std::string color); 

// int main(){

//     Car car1; 
//     Car car2; 

//     car1.model = "Mustang"; 
//     car1.year = 2023; 
//     car1.color = "red"; 

//     car2.model = "Corvette"; 
//     car2.year = 2024; 
//     car2.color = "blue"; 

//     paintCar(car1, "silver"); 
//     paintCar(car2, "gold"); 

    // std::cout << &car1 << '\n'; 
//     printCar(car1);
//     printCar(car2);

//     return 0; 
// }

// void printCar(Car car){
// void printCar(Car &car){
//     std::cout << &car << '\n'; 
//     std::cout << car.model << '\n';
//     std::cout << car.year << '\n';
//     std::cout << car.color << '\n';
// }

// void paintCar(Car &car, std::string color){
// void paintCar(Car car, std::string color){
//     car.color = color; 
// }

// #include <iostream>

// enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, 
//           thursday = 4, friday = 5, saturday = 6};

// enum Flavor {vanilla, chocolate, strawberry, mint}; 

// enum Color {red, orange, yellow, green, blue, purple}; 

// enum Planet {mercury = 4880, venus = 12104, earth = 12756, 
//              mars = 6794, jupiter = 142984, saturn = 108728, 
//              uranus = 51118, neptune = 49532, pluto = 2320}; 

// int main(){

    // std::string today = "sunday"; 
    // Day today = sunday; 
    // Day today = friday; 

    // switch(today){
        // case sunday: std::cout << "It is Sunday!\n"; 
        //              break;
        // case 0: std::cout << "It is Sunday!\n"; 
        //              break;
        // case monday: std::cout << "It is Monday!\n"; 
        //              break;
        // case 1: std::cout << "It is Monday!\n"; 
        //              break;
        // case tuesday: std::cout << "It is Tuesday!\n"; 
        //              break;
        // case 2: std::cout << "It is Tuesday!\n"; 
        //              break;
        // case wednesday: std::cout << "It is Wednesday!\n"; 
        //              break;
        // case 3: std::cout << "It is Wednesday!\n"; 
        //              break;
        // case thursday: std::cout << "It is Thursday!\n"; 
        //              break;
        // case 4: std::cout << "It is Thursday!\n"; 
        //              break;
        // case friday: std::cout << "It is Friday!\n"; 
        //              break;
        // case 5: std::cout << "It is Friday!\n"; 
        //              break;
        // case saturday: std::cout << "It is Saturday!\n"; 
        //                break;
        // case 6: std::cout << "It is Saturday!\n"; 
        //                break;
                       
//     }

//     return 0; 
// }

// #include <iostream>

// class Human{
//     public:
//         std::string name = "Rick"; 
//         std::string occupation = "scientist";     
//         int age = 70; 

//         void eat(){
//             std::cout << "This person is eating\n"; 
//         }
//         void drink(){
//             std::cout << "This person is driking\n"; 
//         }
//         void sleep(){
//             std::cout << "This person is sleeping\n"; 
//         }
// }; 

// class Car{
//     public: 
//         std::string make; 
//         std::string model; 
//         int year; 
//         std::string color; 

//         void accelerate(){
//             std::cout << "You step on the gas!\n"; 
//         }
//         void brake(){
//             std::cout << "You step on the brakes!\n"; 
//         }
// }; 

// int main(){

    // Human human1; 
    // Human human2; 

    // human1.name = "Rick"; 
    // human1.occupation = "scientist"; 
    // human1.age = 70;

    // human2.name = "Morty"; 
    // human2.occupation = "student"; 
    // human2.age = 15; 

    // std::cout << human1.name << '\n';
    // std::cout << human1.occupation << '\n';
    // std::cout << human1.age << '\n';

    // std::cout << human2.name << '\n';
    // std::cout << human2.occupation << '\n';
    // std::cout << human2.age << '\n';

    // human1.eat(); 
    // human1.drink(); 
    // human1.sleep();

    // human2.eat(); 
    // human2.drink(); 
    // human2.sleep(); 

//     Car car1; 
//     Car car2; 

//     car1.make = "Ford"; 
//     car1.model = "Mustang"; 
//     car1.year = 2023; 
//     car1.color = "silver"; 

//     std::cout << car1.make << '\n'; 
//     std::cout << car1.model << '\n'; 
//     std::cout << car1.year << '\n'; 
//     std::cout << car1.color << '\n'; 

//     car1.accelerate(); 
//     car1.brake(); 

//     return 0; 
// }

// #include <iostream>

// class Student{
//     public:
//         std::string name; 
//         int age; 
//         double gpa; 

    // Student(std::string name, int age, double gpa){
    // Student(std::string x, int y, double z){
        // this->name = name; 
        // this->age = age; 
        // this->gpa = gpa; 

//         name = x; 
//         age = y; 
//         gpa = z; 

//     }
// }; 

// class Car{
//     public:
//         std::string make; 
//         std::string model; 
//         int year; 
//         std::string color; 
    
//     Car(std::string make, std::string model, int year, std::string color){
//         this->make = make; 
//         this->model = model; 
//         this->year = year; 
//         this->color = color; 
//     }
// }; 

// int main(){

    // Student student1("Spongebob", 25, 3.2); 
    // Student student2("Patrick", 40, 1.5); 
    // Student student3("Sandy", 21, 4.0); 

    // std::cout << student1.name << '\n';
    // std::cout << student1.age << '\n';
    // std::cout << student1.gpa << '\n';

    // std::cout << student2.name << '\n';
    // std::cout << student2.age << '\n';
    // std::cout << student2.gpa << '\n';

    // std::cout << student3.name << '\n';
    // std::cout << student3.age << '\n';
    // std::cout << student3.gpa << '\n';

//     Car car1("Chevy", "Corvette", 2022, "blue"); 
//     Car car2("Ford", "Mustang", 2023, "red"); 

//     std::cout << car1.make << '\n'; 
//     std::cout << car1.model << '\n'; 
//     std::cout << car1.year << '\n'; 
//     std::cout << car1.color << '\n'; 

//     std::cout << car2.make << '\n'; 
//     std::cout << car2.model << '\n'; 
//     std::cout << car2.year << '\n'; 
//     std::cout << car2.color << '\n'; 

//     return 0; 
// }

// #include <iostream>

// class Pizza{
//     public: 
//         std::string topping1; 
//         std::string topping2; 

//     Pizza(){

//     }

//     Pizza(std::string topping1){
//         this->topping1 = topping1; 
//     }

//     Pizza(std::string topping1, std::string topping2){
//         this->topping1 = topping1; 
//         this->topping2 = topping2; 
//     }
// }; 

// int main(){

//     Pizza pizza1("pepperoni"); 
//     Pizza pizza2("mushrooms", "peppers"); 
//     Pizza pizza3;

//     std::cout << pizza1.topping1 << '\n'; 
 
//     std::cout << pizza2.topping1 << '\n'; 
//     std::cout << pizza2.topping2 << '\n'; 

//     return 0; 
// }

// #include <iostream>

// class Stove{
    // public: 
//     private: 
//         int temperature = 0; 
//     public: 
//     Stove(int temperature){
//         setTemperature(temperature);  
//     }
//     int getTemperature(){
//         return temperature; 
//     }

//     void setTemperature(int temperature){
//         if(temperature < 0){
//             this->temperature = 0; 
//         } else if(temperature >= 10){
//             this->temperature = 10; 
//         } else {
//             this->temperature = temperature; 
//         }
//     }
// }; 

// int main(){

    // Stove stove; 
    // Stove stove(0); 

    // stove.temperature = 1000000;
    // stove.setTemperature(1000000); 
    // stove.setTemperature(5); 

    // std::cout << "The temperature setting is : " << stove.temperature; 
    // std::cout << "The temperature setting is : " << stove.getTemperature(); 

    // return 0; 
// }

// #include <iostream>

// class Animal{
//     public: 
//         bool alive = true; 
    // void eat(){
    //     std::cout << "This animal is eating\n"; 
    // }
// }; 

// class Dog : public Animal{
// class Dog {
//     public: 
//         bool alive = true; 
//     void bark(){
//         std::cout << "The dog goes woof!\n"; 
//     }
//     void eat(){
//         std::cout << "NOM NOM NOM\n"; 
//     }
// }; 

// class Cat : public Animal {
// class Cat {
//     public: 
//         bool alive = true; 
//     void meow(){
//         std::cout << "The cat goes meow!\n"; 
//     }
//     void eat(){
//         std::cout << "NOM NOM NOM\n"; 
//     }
// }; 

// int main(){

//     Dog dog; 
//     Cat cat; 

    // std::cout << dog.alive << '\n'; 
    // std::cout << cat.alive << '\n'; 
    // dog.eat(); 
    // cat.eat(); 
    // dog.bark(); 
    // cat.meow(); 

//     return 0; 
// }

// #include <iostream>

// class Shape{
//     public:
//         double area; 
//         double volume; 
// }; 

// class Cube : public Shape{
//     public:
//         double side;
//     Cube(double side){
//         this->side = side; 
//         this->area = side * side * 6; 
//         this->volume = side * side * side; 
//     } 
// }; 

// class Sphere : public Shape{
//     public: 
//         double radius; 
//     Sphere(double radius){
//         this->radius = radius; 
//         this->area = 4 * 3.14159 * (radius * radius);
//         this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);  
//     }
// }; 

// int main(){

//     Cube cube(10); 
//     Sphere sphere(5); 

//     std::cout << "Area : " << cube.area << " cm\n";
//     std::cout << "Volume : " << cube.volume << " cm\n";
    
//     std::cout << "Area : " << sphere.area << " cm\n";
//     std::cout << "Volume : " << sphere.volume << " cm\n";

//     return 0; 
// }

#include <iostream>
#include <stdlib.h>
using namespace std;

// preparasi
string username;
int dompet, pilihan, taruhan;
int opsi[3]; // array
int yesNo = 1;

// deklarasi prosedur
void uangKurang();
void inputTaruhan();
void generateOpsi();
void tampilkanOpsi();
// deklarasi fungsi
string winLose();

int main()
{
  cout << "\t\t\t---------------" << endl;
  cout << "\t\t\t| JUDI GEMING |" << endl;
  cout << "\t\t\t---------------" << endl;
  cout << endl;
  cout << "Masukan Username : ";
  getline(cin, username);
  cout << "Masukan Uang : ";
  cin >> dompet;

  while (yesNo)
  {
    cout << "\n--------------------------------------------------------------------------------" << endl;
    cout << "Username: " << username << "\t\t\tUang: Rp. " << dompet;
    cout << "\n--------------------------------------------------------------------------------" << endl;
    inputTaruhan();
    cout << "\nPilih Yang Menurut Anda Memiliki Nilai Terbesar" << endl;
    cout << "1) *\t2) *\t3) *" << endl;
    cout << "\nMasukan Pilihan: ";
    cin >> pilihan;
    cout << endl;
    generateOpsi();
    tampilkanOpsi();
    cout << winLose();
    cout << "\n--------------------------------------------------------------------------------" << endl;
    cout << "Username: " << username << "\t\t\tUang: Rp. " << dompet;
    cout << "\n--------------------------------------------------------------------------------" << endl;
    cout << "\nApakah Anda Ingin Bermain Lagi?\n1) Ya\n2) Tidak" << endl;
    cin >> yesNo;
    if (yesNo != 1)
    {
      break;
    }
  }
}

void inputTaruhan()
{
  cout << "Masukan Taruhan Anda : ";
  cin >> taruhan;
  if (taruhan > dompet)
  {
    uangKurang();
  }
}
void uangKurang()
{
  cout << "Uang Anda Kurang Untuk Taruhan" << endl;
  inputTaruhan();
}
void generateOpsi()
{
  for (int i = 0; i < 3; i++)
  {
    int angka = rand() % 9; // 0-9 (2)
    opsi[i] = angka;
  }
}
void tampilkanOpsi()
{
  for (int i = 0; i < 3; i++)
  {
    cout << i + 1 << ") " << opsi[i] << "\t";
  }
  cout << endl;
}
string winLose()
{
  int terbesar = opsi[0]; // 1 7 9
  string result;
  for (int i = 0; i < 3; i++)
  {
    if (opsi[i] > terbesar)
    {
      terbesar = opsi[i];
    }
  }
  cout << "\nNilai Terbesar Adalah : " << terbesar << endl;
  cout << "Pilihan Anda adalah : " << opsi[pilihan - 1];
  if (opsi[pilihan - 1] == terbesar)
  {
    dompet = dompet + taruhan;
    result = "\nKamu Menang";
  }
  else
  {
    dompet = dompet - taruhan;
    result = "\nKamu Kalah";
  }
  return result; 
}