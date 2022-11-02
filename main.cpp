#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

int num, age, height, weight;
string name, text, word, city;

cout << "If you wanna activate me enter random number" << endl;
cin >> num;
cout << "Robot was activated!" << endl;
 cout << "Hello! my name's Bob :) and i'm your friend! " << endl;
 cout << "What's your name?" << endl;
 cin >> name;

 cout << name << " how old are you?" << endl;
 cin >> age;

 cout << name << " do you wanna be my friend?" << endl;
 cin >> word;

 if (word == "No" || word == "Maybe later" || word == "idk")
 {
     cout << "Ok if you wanna disactivate me enter random number." << endl;
     cin >> num;
     cout << "Robot was disactivated!" << endl;
 }
 if (word == "Yes" || word == "Ok" || word == "Maybe")
 {
     cout << "Hooray! So what's going on? " << name << endl;
     cin >> word;
 }
 if (word == "Normal" || word == "Good" || word == "Better than yesterday" || word == "Great" || word == "Exellent")
 {
    cout << "That's good " << name << " what is your favourite hobby? :)" << endl;
    cin >> text;
 }
 if (word == "Bad" || word == "Worst than yesterday" || word == "Not good")
 {
    cout << "What happened " << name << "?" << endl;
    cin >> word;
 }
 if (word == "I'm depressed")
 {
    cout << "That's bad, so what is your favourite hobby? :)" << endl;
    cin >> text;
 }
 if (text == "programming" || text == "playing in command type of sport" || text == "learn a foreign languages")
 {
    cout << "Great, but i'm robot and your friend what's your favourite programming language?:)" << endl;
    cin >> text;
 }
 if (text == "C++" || text == "python" || text == "C" || text == "C#" || text == "Java" || text == "basic")
 {
    cout << "Good, so what is your height" << endl;
    cin >> height;
 }
 if (height > 180 || height == 180)
 {
    cout << "You taller than my owner." << endl;
    cout << "And what is your weight?" << endl;
    cin >> weight;
 }
 if (height < 180 || height == 180)
 {
    cout << "You smaller than my owner." << endl;
    cout << "And what is your weight?" << endl;
    cin >> weight;
 }
 if (weight > 60 || weight == 60)
 {
    cout << "You bigger than my owner." << endl;
    cout << "It's so interesting for me Ok so where do you live " << name << " ?" << endl;
    cin >> city;
    cout << "Do you wanna start analyse your personality?" << endl;
    cin >> word;
 }
 if (weight < 60 || weight == 60)
 {
    cout << "Your weight is less than my owner." << endl;
    cout << "It's so interesting for me Ok so where do you live " << name << " ?" << endl;
    cin >> city;
    cout << "Do you wanna start analyse your personality?" << endl;
    cin >> word;
 }
 if (city == "Kyiv")
 {
    cout << "My owner live in Kyiv." << endl;
    cout << "Do you wanna start analyse your personality?" << endl;
    cin >> word;
 }
 if (word == "No") {
    cout << "Ok so if you wanna turn off me enter random number." << endl;
    cin >> num;
    cout << "Robot was disactivated!" << endl;
 }
 else if (word == "Yes") {
    cout << "So i'm starting analyse your personality." << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "if you wanna disactivate me enter random number " << name << endl;
    cin >> num;
 }
 return 0;
}
