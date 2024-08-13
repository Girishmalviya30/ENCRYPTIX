#include<iostream>
#include<vector>
#include<string>

using namespace std;


struct task{
    string description;
    bool compeleted;
};

vector<task> tasks;

void addtask(){
    cout<<"enter your task description:"<<endl;
    string sec;
    cin.ignore();
    getline(cin, sec);
    tasks.push_back({sec, false});
    cout<<"yout task added succesfully !"<<endl;
}

void tasksview(){
    if(tasks.empty()){
        cout<<"no task to show"<<endl;
       
    }
    cout<<"tasks:"<<endl;
    for(size_t i = 0; i < tasks.size(); ++i){
        cout<< i + 1 <<". "<<tasks[i].description<< " [" << (tasks[i].compeleted ? "compeleted" : "Pending") << "]" << endl;
    }
}

void markstaskAsCompeleted(){
    cout<<"enter the number of task to mark as a compeleted:";
    size_t tasknum;
    cin>>tasknum;
    if(tasknum>0 && tasknum<=tasks.size()){
            tasks[tasknum - 1].compeleted = true;
        cout << "Task marked as completed!" << endl;
    }else{
        cout<<"invalid task number"<<endl;
    }
}

void removethetask(){
    cout<<"enter the number of the task to remove:";
    size_t tasknum;
    cin>>tasknum;
      if (tasknum > 0 && tasknum <= tasks.size()) {
        tasks.erase(tasks.begin() + tasknum - 1);
        cout <<"task remove successfully!"<< endl;
    } else {
        cout <<"invalid task number!" << endl;
    }
}

int main(){
    int choice;

    do{ 
        cout<<endl;
        cout << "To-Do List Managers" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
            addtask();
            break;
            case 2:
            tasksview();
            break;
            case 3:
            markstaskAsCompeleted();
            break;
            case 4:
            removethetask();
            break;
            case 5:
            cout <<"exiting"<< endl;
            break;
            default:
            cout<<"invalid choice try again"<<endl;
            break;
        }

    }while (choice!=5);
   return 0;
    
}
