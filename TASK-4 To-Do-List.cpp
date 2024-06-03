#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoListManager {
private:
    vector<string> tasks;

public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task '" << task << "' added." << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks available." << endl;
        } else {
            cout << "To-Do List:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    }

    void deleteTask(size_t taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            string removedTask = tasks[taskNumber - 1];
            tasks.erase(tasks.begin() + taskNumber - 1);
            cout << "Task '" << removedTask << "' deleted." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }

    void run() {
        while (true) {
            cout << "\nTo-Do List Manager" << endl;
            cout << "1. Add Task" << endl;
            cout << "2. View Tasks" << endl;
            cout << "3. Delete Task" << endl;
            cout << "4. Exit" << endl;

            int choice;
            cout << "Choose an option: ";
            cin >> choice;
            cin.ignore();  // Clear the newline character from the input buffer

            if (choice == 1) {
                string task;
                cout << "Enter the task: ";
                getline(cin, task);
                addTask(task);
            } else if (choice == 2) {
                viewTasks();
            } else if (choice == 3) {
                size_t taskNumber;
                cout << "Enter the task number to delete: ";
                cin >> taskNumber;
                deleteTask(taskNumber);
            } else if (choice == 4) {
                cout << "Exiting To-Do List Manager." << endl;
                break;
            } else {
                cout << "Invalid choice. Please choose a valid option." << endl;
            }
        }
    }
};

int main() {
    ToDoListManager manager;
    manager.run();
    return 0;
}

