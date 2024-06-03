#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
public:
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

class ToDoListManager {
private:
    vector<Task> tasks;

public:
    void addTask(string taskDesc) {
        tasks.push_back(Task(taskDesc));
        cout << "Task '" << taskDesc << "' added to the list." << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].description << " - " << (tasks[i].completed ? "Completed" : "Pending") << endl;
            }
        }
    }

    void markTaskCompleted(size_t taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            tasks[taskIndex - 1].completed = true;
            cout << "Task " << taskIndex << " marked as completed." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }

    void removeTask(size_t taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            string removedTaskDesc = tasks[taskIndex - 1].description;
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task '" << removedTaskDesc << "' removed from the list." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }
};

int main() {
    ToDoListManager manager;
    int choice;

    do {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskDesc;
                cout << "Enter the task: ";
                cin.ignore(); // clear input buffer
                getline(cin, taskDesc);
                manager.addTask(taskDesc);
                break;
            }
            case 2:
                manager.viewTasks();
                break;
            case 3: {
                size_t taskIndex;
                cout << "Enter the task number to mark as completed: ";
                cin >> taskIndex;
                manager.markTaskCompleted(taskIndex);
                break;
            }
            case 4: {
                size_t taskIndex;
                cout << "Enter the task number to remove: ";
                cin >> taskIndex;
                manager.removeTask(taskIndex);
                break;
            }
            case 5:
                cout << "Exiting To-Do List Manager." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
