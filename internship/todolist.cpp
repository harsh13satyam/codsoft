#include <iostream>
#include <cstring>

using namespace std;

const int MAX_TASKS = 5;
char tasks[MAX_TASKS][100];
bool done[MAX_TASKS];
int count = 0;

int main() {
    int option;

    cout << "Welcome to your basic To-Do List!\n";

    do {
        cout << "\nMenu:\n";
        cout << "1. Add a task\n";
        cout << "2. View tasks\n";
        cout << "3. Mark task as done\n";
        cout << "4. Delete task\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> option;

        if (option == 1) {
            if (count < MAX_TASKS) {
                cout << "Enter task: ";
                cin.ignore();
                cin.getline(tasks[count], 100);
                done[count] = false;
                count++;
                cout << "Task added.\n";
            } else {
                cout << "List is full.\n";
            }
        }
        else if (option == 2) {
            if (count == 0)
                cout << "No tasks added yet.\n";
            else {
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << tasks[i] << " [" << (done[i] ? "Done" : "Pending") << "]\n";
                }
            }
        }
        else if (option == 3) {
            int n;
            cout << "Which task number is done? ";
            cin >> n;
            if (n >= 1 && n <= count) {
                done[n - 1] = true;
                cout << "Marked as done.\n";
            } else {
                cout << "Invalid task number.\n";
            }
        }
        else if (option == 4) {
            int n;
            cout << "Which task number to delete? ";
            cin >> n;
            if (n >= 1 && n <= count) {
                for (int i = n - 1; i < count - 1; i++) {
                    strcpy(tasks[i], tasks[i + 1]);
                    done[i] = done[i + 1];
                }
                count--;
                cout << "Task deleted.\n";
            } else {
                cout << "Invalid task number.\n";
            }
        }
        else if (option == 5) {
            cout << "Goodbye! Stay productive.\n";
        }
        else {
            cout << "Please choose a valid option.\n";
        }

    } while (option != 5);

    return 0;
}