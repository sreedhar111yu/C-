#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct User {
    string username;
    string password;
    double height; // in meters
    double weight; // in kilograms
};

struct FoodItem {
    string name;
    double price;
};

unordered_map<string, User> users;
vector<FoodItem> foodCatalog;

void registerUser();
void loginUser();
void inputHeightAndWeight(User& user);
double calculateBMI(double height, double weight);
void suggestMeal(double bmi);
void addToCart(vector<FoodItem>& cart, const FoodItem& item);
void displayCart(const vector<FoodItem>& cart);

int main() {
    // Initialize food catalog
    foodCatalog.push_back({"Avocado", 2.5});
    foodCatalog.push_back({"Nuts", 3.0});
    foodCatalog.push_back({"Lean meats", 5.0});
    foodCatalog.push_back({"Whole grains", 1.5});
    foodCatalog.push_back({"Dairy products", 4.0});
    foodCatalog.push_back({"Fruits", 2.0});
    foodCatalog.push_back({"Vegetables", 1.0});
    foodCatalog.push_back({"Leafy greens", 1.5});

    bool isRunning = true;
    while (isRunning) {
        int choice;
        cout << "1. Register\n2. Login\n3. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                isRunning = false;
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (users.find(username) != users.end()) {
        cout << "Username already exists. Please choose a different one." << endl;
        return;
    }

    User newUser;
    newUser.username = username;
    newUser.password = password;
    inputHeightAndWeight(newUser); // Input height and weight
    users[username] = newUser;
    cout << "Registration successful!" << endl;
}

void inputHeightAndWeight(User& user) {
    cout << "Enter height (in meters): ";
    cin >> user.height;
    cout << "Enter weight (in kilograms): ";
    cin >> user.weight;
}

void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (users.find(username) == users.end()) {
        cout << "User not found. Please register first." << endl;
        return;
    }

    if (users[username].password == password) {
        cout << "Login successful! Welcome, " << username << "!" << endl;
        double bmi = calculateBMI(users[username].height, users[username].weight);
        suggestMeal(bmi);
    } else {
        cout << "Incorrect password. Please try again." << endl;
    }
}

double calculateBMI(double height, double weight) {
    return weight / (height * height);
}

void suggestMeal(double bmi) {
    vector<FoodItem> cart;
    cout << "Based on your BMI, we suggest the following meal: " << endl;
    if (bmi < 18.5) {
        cout << "Underweight: Increase calorie intake with nutrient-dense foods.\n";
        addToCart(cart, {"Avocado", 2.5});
        addToCart(cart, {"Nuts", 3.0});
        addToCart(cart, {"Lean meats", 5.0});
        addToCart(cart, {"Whole grains", 1.5});
        addToCart(cart, {"Dairy products", 4.0});
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Normal weight: Maintain a balanced diet.\n";
        addToCart(cart, {"Fruits", 2.0});
        addToCart(cart, {"Vegetables", 1.0});
        addToCart(cart, {"Lean meats", 5.0});
        addToCart(cart, {"Whole grains", 1.5});
    } else {
        cout << "Overweight: Control portion sizes and focus on nutrient-rich foods.\n";
        addToCart(cart, {"Leafy greens", 1.5});
        addToCart(cart, {"Vegetables", 1.0});
        addToCart(cart, {"Fruits", 2.0});
        addToCart(cart, {"Whole grains", 1.5});
    }
    displayCart(cart);
}

void addToCart(vector<FoodItem>& cart, const FoodItem& item) {
    cart.push_back(item);
}

void displayCart(const vector<FoodItem>& cart) {
    cout << "Your cart:" << endl;
    double totalPrice = 0.0;
    for (const auto& item : cart) {
        cout << item.name << " - $" << item.price << endl;
        totalPrice += item.price;
    }
    cout << "Total Price: $" << totalPrice << endl;
}