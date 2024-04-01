#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to represent a task
struct Task {
    string name;
    string time;
};

// Function to add a task to the daily routine
void addTask(vector<Task>& routine) {
    Task task;
    cout << "Enter task name: ";
    cin >> task.name;
    cout << "Enter time: ";
    cin >> task.time;
    routine.push_back(task);
    cout << "Task added successfully!\n";
}

// Function to remove a task from the daily routine
void removeTask(vector<Task>& routine) {
    if (routine.empty()) {
        cout << "Routine is empty. No tasks to remove.\n";
        return;
    }
    cout << "Enter index of task to remove (0-" << routine.size() - 1 << "): ";
    int index;
    cin >> index;
    if (index < 0 || index >= routine.size()) {
        cout << "Invalid index.\n";
        return;
    }
    routine.erase(routine.begin() + index);
    cout << "Task removed successfully!\n";
}

// Function to view the daily routine
void viewRoutine(const vector<Task>& routine) {
    if (routine.empty()) {
        cout << "Routine is empty.\n";
        return;
    }
    cout << "Daily Routine:\n";
    for (int i = 0; i < routine.size(); ++i) {
        cout << i << ". " << routine[i].name << " at " << routine[i].time << endl;
    }
}

int main() {
    vector<Task> dailyRoutine;

    // Menu loop
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. Remove Task\n";
        cout << "3. View Routine\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(dailyRoutine);
                break;
            case 2:
                removeTask(dailyRoutine);
                break;
            case 3:
                viewRoutine(dailyRoutine);
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
