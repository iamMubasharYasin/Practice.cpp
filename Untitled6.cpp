#include <iostream>
#include <string>
using namespace std;

class Hostel
{
protected:
    int roomNo;
    string name, fatherName, phoneNumber;
    int age;

public:
   virtual void reserveRoom() {
        system("cls"); // Clear the screen before taking inputs
        cout << "\nEnter Room Number: ";
        cin >> roomNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Father's Name: ";
        getline(cin, fatherName);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Phone Number: ";
        getline(cin, phoneNumber);
        cout << "\nRoom Reserved Successfully!\n";
    }

    void displayRoomDetails() const {
        if (roomNo == 0) {
            cout << "No data available for this room.\n";
            return;
        }
        cout << "\nRoom Number: " << roomNo
             << "\nName: " << name
             << "\nFather's Name: " << fatherName
             << "\nAge: " << age
             << "\nPhone Number: " << phoneNumber << endl;
    }

    void deleteRoom() {
        roomNo = 0;
        name = "";
        fatherName = "";
        phoneNumber = "";
        age = 0;
        cout << "\nRoom data deleted successfully!\n";
    }

    int getRoomNo() const {
        return roomNo;
    }
};

class Student : public Hostel {
public:
    void menu() {
        int choice;
        Student rooms[10]; // Array for storing room data
        int roomCount = 0;

        do {
            system("cls"); // Clear the screen before showing the menu
            cout << "\n\n\t\tHostel Accommodation System\n";
            cout << "\t1. Reserve a Room\n";
            cout << "\t2. Search Room Data\n";
            cout << "\t3. Delete Room Data\n";
            cout << "\t4. View All Rooms\n";
            cout << "\t5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                if (roomCount < 10) {
                    rooms[roomCount].reserveRoom();
                    roomCount++;
                } else {
                    system("cls");
                    cout << "\nAll rooms are reserved. Cannot add more data.\n";
                }
                cout << "Press any key to continue...\n";
                cin.ignore();
                cin.get();
                break;
            }
            case 2: {
                system("cls");
                int searchRoomNo, found = 0;
                cout << "\nEnter Room Number to Search: ";
                cin >> searchRoomNo;

                for (int i = 0; i < roomCount; i++) {
                    if (rooms[i].getRoomNo() == searchRoomNo) {
                        cout << "\nRoom Data Found:";
                        rooms[i].displayRoomDetails();
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    cout << "\nRoom Number not found!\n";
                }
                cout << "Press any key to continue...\n";
                cin.ignore();
                cin.get();
                break;
            }
            case 3: {
                system("cls");
                int deleteRoomNo, found = 0;
                cout << "\nEnter Room Number to Delete: ";
                cin >> deleteRoomNo;

                for (int i = 0; i < roomCount; i++) {
                    if (rooms[i].getRoomNo() == deleteRoomNo) {
                        rooms[i].deleteRoom();
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    cout << "\nRoom Number not found!\n";
                }
                cout << "Press any key to continue...\n";
                cin.ignore();
                cin.get();
                break;
            }
            case 4: {
                system("cls");
                cout << "\nDisplaying All Room Details:\n";
                for (int i = 0; i < roomCount; i++) {
                    if (rooms[i].getRoomNo() != 0) {
                        rooms[i].displayRoomDetails();
                        cout << "-------------------------\n";
                    }
                }
                cout << "Press any key to continue...\n";
                cin.ignore();
                cin.get();
                break;
            }
            case 5:
                system("cls");
                cout << "\nExiting System. Thank you!\n";
                break;
            default:
                system("cls");
                cout << "\nInvalid choice! Try again.\n";
                cout << "Press any key to continue...\n";
                cin.ignore();
                cin.get();
            }
        } while (choice != 5);
    }
};

int main() {
    Student hostelSystem;  // Creates an object of `Student`
    hostelSystem.menu();   // Calls the menu function
    return 0;
}
