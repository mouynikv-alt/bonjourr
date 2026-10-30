#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_name, email, password;
    
    cout << "\n========== Register ==========>\n\n";
    
    cout << "Enter Name: ";
    getline(cin, user_name);
    
    if (user_name == "Dara Poy") {
        cout << "Enter Email: ";
        cin >> email;
        
        if (email == "Dara007@gmail.com") {
            cout << "Enter Password: ";
            cin >> password;
            
            if (password == "Dara007@168") {
                cout << "Login Successfully!\n";
            } else {
                cout << "Invalid Password!\n";
            }
        } else {
            cout << "Invalid Email!\n";
        }
    } else {
        cout << "Invalid User Name!\n";
    }
    
    return 0;
}