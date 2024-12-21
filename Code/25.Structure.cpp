#include <iostream>
#include <string>
using namespace std;

// 1. Define a structure
// A structure is a user-defined data type that allows grouping related variables of different types.
struct Person {
    string name;    // Name of the person (string type)
    int age;        // Age of the person (integer type)
    float height;   // Height of the person in meters (float type)
};

int main() {
    // 2. Declare a structure variable
    // Here we create a variable `person1` of type `Person`.
    Person person1;

    // 3. Access and assign values to structure members
    // We use the dot operator (.) to access and modify structure members.
    person1.name = "Alice";       // Assign "Alice" to the `name` member
    person1.age = 25;             // Assign 25 to the `age` member
    person1.height = 1.65;        // Assign 1.65 to the `height` member

    // 4. Display the structure data
    cout << "Person 1:" << endl;
    cout << "Name: " << person1.name << endl;     // Access and print `name`
    cout << "Age: " << person1.age << endl;       // Access and print `age`
    cout << "Height: " << person1.height << " meters" << endl; // Access and print `height`

    // 5. Declare and initialize a structure variable in one step
    // You can directly initialize the structure when declaring it.
    Person person2 = {"Bob", 30, 1.8};  // `name` = "Bob", `age` = 30, `height` = 1.8

    // Display the second person's data
    cout << "\nPerson 2:" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Height: " << person2.height << " meters" << endl;

    // 6. Using an array of structures
    // Structures can be stored in arrays to manage multiple records.
    Person people[2];  // Create an array of two `Person` structures

    // Assign values to the first element
    people[0].name = "Charlie";
    people[0].age = 22;
    people[0].height = 1.7;

    // Assign values to the second element
    people[1].name = "Diana";
    people[1].age = 28;
    people[1].height = 1.6;

    // Display data from the array of structures
    cout << "\nArray of People:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Person " << i + 1 << ":" << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Height: " << people[i].height << " meters" << endl;
    }

    return 0;
}