#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User {
public:
    string username;
    string password;
    
};

class UserManager {
private:
    vector<User> users;

    // Find user by username
    int findUser(string name) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i].username == name) {
                return i;
            }
        }
        return -1;   // User not found
    }

public:

    // Register a new user
    void registerUser() {
        string name, pass;

        cout << "\nEnter Username: ";
        cin >> name;

        if (findUser(name) != -1) {
            cout << "Username already exists!\n";
            return;
        }

        cout << "Enter Password: ";
        cin >> pass;

        User newUser;
        newUser.username = name;
        newUser.password = pass;

        users.push_back(newUser);

        cout << "User registered successfully!\n";
    }

    // Login
    void login() {
        string name, pass;

        cout << "\nEnter Username: ";
        cin >> name;

        cout << "Enter Password: ";
        cin >> pass;

        int index = findUser(name);

        if (index != -1 && users[index].password == pass) {
            cout << "Login successful!\n";
        }
        else {
            cout << "Invalid username or password!\n";
        }
    }

    // Display all users
    void showUsers() {
        cout << "\n--- User List ---\n";

        if (users.empty()) {
            cout << "No users registered.\n";
            return;
        }

        for (int i = 0; i < users.size(); i++) {
            cout << i + 1 << ". " << users[i].username << endl;
        }
    }

    // Search user
    void searchUser() {
        string name;

        cout << "\nEnter Username to search: ";
        cin >> name;

        if (findUser(name) != -1) {
            cout << "User found!\n";
        }
        else {
            cout << "User not found!\n";
        }
    }

    // Delete user
    void deleteUser() {
        string name;

        cout << "\nEnter Username to delete: ";
        cin >> name;

        int index = findUser(name);

        if (index != -1) {
            users.erase(users.begin() + index);
            cout << "User deleted successfully!\n";
        }
        else {
            cout << "User not found!\n";
        }
    }
};


int main() {

    UserManager manager;
    int choice;
    char again;

    do {

        cout << "\n============================\n";
        cout << "       USER MANAGEMENT\n";
        cout << "============================\n";
        cout << "1. Register User\n";
        cout << "2. Login\n";
        cout << "3. Show Users\n";
        cout << "4. Search User\n";
        cout << "5. Delete User\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                manager.registerUser();
                break;

            case 2:
                manager.login();
                
                break;

            case 3:
                manager.showUsers();
                break;

            case 4:
                manager.searchUser();
                break;

            case 5:
                manager.deleteUser();
                break;

            case 6:
                cout << "Thank you!\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    return 0;
}
