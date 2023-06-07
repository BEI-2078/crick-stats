#include <iostream>
#include<fstream>
#include <string>
#include<vector>
#include<iomanip>

using namespace std;
void showcover(){
     cout<<"\n";
    cout<<"  ***************   *****.**********     ***     ******************   \n";
    cout<<"  ***************   *****.**********    *****    ******************   \n";
    cout<<"  ***************   *****.      ****     ***     ******************   \n";
    cout<<"  *****             *****.      ****             *****             \n";
    cout<<"  *****             *****.      ****    *****    *****             \n";
    cout<<"  *****             *****.**********    *****    *****             \n";
    cout<<"  *****             *****.**********    *****    *****             \n";
    cout<<"                                                                    \n";
    cout<<"  *****             *****.  ****        *****    *****             \n";
    cout<<"  *****             *****.   ****       *****    *****             \n";
    cout<<"  ***************   *****.    ****      *****    *******************   *****************         ***         *****************   ***************\n";
    cout<<"  ***************   *****.     ****     *****    *******************   *****************        *****        *****************   ***************\n";
    cout<<"  ***************   *****.      ****    *****    *******************   *****************       *** ***       *****************   ***************\n";
    cout<<"                                                     ******                  *****            ***   ***            *****         ******\n";
    cout<<"                                                     ******                  *****           ***     ***           *****         ******\n";
    cout<<"                                                     ******                  *****          ***       ***          *****         ******\n";
    cout<<"                                                     ***************         *****          **************         *****         ***************\n";
    cout<<"                                                     ***************         *****          **************         *****         ***************\n";
    cout<<"                                                     ***************         *****          **************         *****         ***************\n";
    cout<<"                                                              ******         *****          ***        ***         *****                  ******\n";
    cout<<"                                                              ******         *****          ***        ***         *****                  ******\n";
    cout<<"                                                              ******         *****          ***        ***         *****                  ******\n";
    cout<<"                                                     ***************         *****          ***        ***         *****         ***************\n";
    cout<<"                                                     ***************         *****          ***        ***         *****         ***************\n";
    cout<<"                                                     ***************         *****          ***        ***         *****         ***************\n";
    cout<<"                                                      ___________________________________________________________________________________________\n";
    cout<<"                                                      -------------------------------------------------------------------------------------------\n";
   
   cout<<"\n\n\n";
    cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<endl<<endl<<endl<<endl<<endl;
}

class Player {
public:
    Player(){};
    string name,role,country;
    int age,odiMatches,t20Matches,odiRuns,t20Runs,odiWickets,t20Wickets,odiTopScore,t20TopScore;
    float odiBatAvg,t20BatAvg,odiEconomy,t20Economy,odiStrikeRate,t20StrikeRate;

     Player(const string& name,const string& role,const string& country, int age, int omatches, int tmatches, int oruns, int truns, int odiwcks,
           int t20wcks, int otscore, int ttscore, float obtav, float tbtav, float oec, float tec,
           float ostr, float tstr)
        : name(name),role(role),country(country), age(age), odiMatches(omatches), t20Matches(tmatches), odiRuns(oruns),
          t20Runs(truns), odiWickets(odiwcks), t20Wickets(t20wcks) , odiTopScore(otscore),
          t20TopScore(ttscore), odiBatAvg(obtav), t20BatAvg(tbtav), odiEconomy(oec),
          t20Economy(tec), odiStrikeRate(ostr), t20StrikeRate(tstr) {}

  void saveToFile(ofstream& file) const {
        file << name << "\n";
        file <<  age << "\n";
        file<<country<<"\n";
        file<<role<<"\n";
        file  << odiMatches << "\n";
        file  << t20Matches << "\n";
        file << odiRuns << "\n";
        file << t20Runs << "\n";
        file <<odiWickets << "\n";
        file << t20Wickets << "\n";
        file <<  odiTopScore << "\n";
        file << t20TopScore << "\n";
        file  << odiBatAvg << "\n";
        file << t20BatAvg << "\n";
        file <<  odiEconomy << "\n";
        file <<  t20Economy << "\n";
        file  << odiStrikeRate << "\n";
        file << t20StrikeRate << "\n\n";
    }
  
void inputter(){
     int numPlayers;
            cout << "Enter the number of players: ";
            cin >> numPlayers;
            // cin.ignore(); // Ignore the newline character

        ofstream outFile("nepal.txt");
        if (!outFile) {
            cerr << "Failed to create/open the file." << endl;
            // Exit the program with an error code
        }

        for (int i = 0; i < numPlayers; i++) {
            string name, role, country;
            int age, omatches, tmatches, oruns, truns, odiwcks, t20wcks, otscore, ttscore;
            float obtav, tbtav, oec, tec, ostr, tstr;

            cin.ignore(); // Ignore the newline character from the previous input
            cout << "Enter Player " << (i + 1) << " details:" << endl;
            cout << "Name: ";
            getline(cin, name);
            cout << "Age: ";
            cin >> age;
            cin.ignore();
            cout << "Country: ";
            getline(cin, country);
            cout << "Role: ";
            getline(cin, role);

            
    cout << "Matches in ODI: ";
    cin >> omatches;

    cout << "Matches in T20: ";
    cin >> tmatches;

    cout << "Runs in ODI: ";
    cin >> oruns;

    cout << "Runs in T20: ";
    cin >> truns;

    cout << "Wickets in ODI: ";
    cin >> odiwcks;

    cout << "Wickets in T20: ";
    cin >> t20wcks;

    cout << "Top score in ODI: ";
    cin >> otscore;

    cout << "Top score in T20: ";
    cin >> ttscore;

    cout << "Batting average in ODI: ";
    cin >> obtav;

    cout << "Batting average in T20: ";
    cin >> tbtav;

    cout << "Economy in ODI: ";
    cin >> oec;

    cout << "Economy in T20: ";
    cin >> tec;

    cout << "Strike rate in ODI: ";
    cin >> ostr;

    cout << "Strike rate in T20: ";
    cin >> tstr;

            Player player(name, role, country, age, omatches, tmatches, oruns, truns, odiwcks, t20wcks,
                          otscore, ttscore, obtav, tbtav, oec, tec, ostr, tstr);
            player.saveToFile(outFile);
        }
             outFile.close();
cout<<"Data saved to file successfully"<<endl;
}

void outputter() {

  ifstream inFile("nepal.txt");
    if (!inFile) {
        cerr << "Failed to open the file." << endl;
    }

    vector<Player> players;
    string line;
    while (getline(inFile, line)) {
        string name = line, role, country;
        int age, omatches, tmatches, oruns, truns, odiwcks, t20wcks, otscore, ttscore;
        float obtav, tbtav, oec, tec, ostr, tstr;

        inFile >> age;
        inFile.ignore();
        getline(inFile, country);
        getline(inFile, role);
        inFile >> omatches >> tmatches >> oruns >> truns >> odiwcks >> t20wcks >> otscore >> ttscore
               >> obtav >> tbtav >> oec >> tec >> ostr >> tstr;
        inFile.ignore();

        Player player(name, role, country, age, omatches, tmatches, oruns, truns, odiwcks, t20wcks,
                      otscore, ttscore, obtav, tbtav, oec, tec, ostr, tstr);
        players.push_back(player);
        inFile.ignore(); // Ignore the empty line after each player's data
    }
    // Search for a player
    string searchName;
    cout << "Enter the name of the player to search: ";cin.ignore(); // Ignore the newline character
    getline(cin, searchName);

    bool found = false;
    for (const Player& player : players) {
        if (player.name == searchName) {
            player.displayPlayerData();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Player not found in the database." << endl;
    }
}

void displayPlayerData() const {
            cout << "\nName: "<<name<< endl;
            cout << "Age: "<<age<< endl;
            cout<<"Country: "<<country<<endl;
            cout<<"Role: "<<role<<endl<<endl;

            
   
   
    cout << "\t\t----STATISTICS----- " << endl<<endl;
    cout <<"|" << setw(20) << left << " Competition" << setw(5) << "|" << setw(10) << right << "ODI" << setw(5) << "|" << setw(10) << right << "T20" << setw(7) << "|" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout <<"| Matches            |" << setw(9) << right<<odiMatches <<setw(9)<< "|" << setw(9) <<right<< t20Matches << setw(9)<<"|"<< endl;
    cout << "| Runs scored        |" << setw(9) << right<<odiRuns << setw(9)<<"|" << setw(9) << right<<t20Runs << setw(9)<<"|" << endl;
    cout << "| Strike Rate        |" << setw(9) <<right<< odiStrikeRate << setw(9)<<"|" << setw(9) << right<<t20StrikeRate<<setw(9)<< "|"<< endl;
    cout << "| Batting average    |" << setw(9) << right<<odiBatAvg<< setw(9)<<"|" << setw(9) << right<<t20BatAvg <<setw(9)<< "|"<< endl;
    cout << "| Top score          |" << setw(9) << right<<odiTopScore << setw(9)<<"|" << setw(9) << right<<t20TopScore <<setw(9)<< "|" << endl;
    cout << "| Wickets            |" << setw(9) << right<<odiWickets << setw(9)<<"|" << setw(9) << right<<t20Wickets << setw(9)<<"|"<< endl;
    cout << "| Economy            |" << setw(9) << right<<odiEconomy << setw(9)<<"|" << setw(9) << right<<t20Economy << setw(9)<<"|" << endl;
       
    }

};

class User : public Player {
protected:
    string username;
    string password;
public:
    User(const string& u, const string& p, const string& name, const string& role, const string& country, int age, int omatches, int tmatches, int oruns, int truns, int odiwcks, int t20wcks, int otscore, int ttscore, float obtav, float tbtav, float oec, float tec, float ostr, float tstr)
    : Player(name, role, country, age, omatches, tmatches, oruns, truns, odiwcks, t20wcks, otscore, ttscore, obtav, tbtav, oec, tec, ostr, tstr),
      username(u), password(p) {}

    User(string u, string p) {
        username = u;
        password = p;
    }
    virtual void login() {
        cout << "Please enter your username: ";
        string input_username;
        cin >> input_username;
        cout << "Please enter your password: ";
        string input_password;
        cin >> input_password;
        if (input_username == username && input_password == password) {
            cout << "Login successful!\n";
        } else {
            cout << "Invalid username or password. Please try again.\n\n";
        }
    }
};

class Admin : public User {
public:
    Admin(string u, string p) : User(u, p) {}
    void login() override {
        cout << "Please enter your admin username: ";
        string input_username;
        cin >> input_username;
        cout << "Please enter your admin password: ";
        string input_password;
        cin >> input_password;
        
        
        if (input_username == username && input_password == password) {
            cout << "\n\n\t\t-----Admin Mode-----\n";
            adminMenu();
        } else {
            cout << "Invalid admin username or password. Please try again.\n\n";
        }
    }
    

void adminMenu() {
        int options;
        
        cout <<"\n\nEnter your choice: \n\n";
        cout<<"     1. Add Data"<<setw(25)<<"2. Search data"<<endl;
        cout<<"     3. Exit\n"<<endl;
        cout<<"Your answer : ";
        cin >> options;
        switch (options) {
            case 1: 
                cout <<setw(20)<<"\n\n\t\t-----You've entered add mode------\n\n"<<endl;
                inputter();
                break;

            case 2:
                cout <<setw(20)<<"\n\n\t\t------You've entered search mode------\n\n"<<endl;
                outputter();
                break;

            case 3:
                cout <<"\nYou've exited the program.\n\n";
                break;

            default: 
                cout <<"You've entered the wrong choice:\n\n";
                break;
        }
    }
        

};

class Guest : public User {
public:
    Guest(string u) : User(u, "") {}
    void login() override {
        cout << "\n\n\t\t\t-----Guest Mode-----\n";
        guestMenu();
    }
    void guestMenu() {
        int options;
        cout <<"Enter your choice: \n\n";
        cout<<setw(9)<<"1. Search Data"<<setw(25)<<"2. Exit\n"<<endl;
       cout<<"Your answer : "; 
        cin >> options;
        switch (options) {

            case 1:
                cout <<setw(20)<<"\n\n\t\t------You've entered search mode.------\n\n"<<endl;
                outputter();
                break;

            case 2:
                cout <<"\nYou've exited the program.";
                break;

            default: 
                cout <<"You've entered the wrong choice:";
                break;
        }
    }
   

};    

int main() {
    showcover();
    Admin admin("admin", "project");
    Guest guest("guest_username");

    int choice;

    cout<<"\nEnter the mode \n"<<endl;
    cout<<"      1.Admin mode"<<setw(25)<<"     2.Guest mode\n"<<endl;
    cout<<"Your answer : ";
    cin >> choice;
    //cin.ignore(); // Clear the newline character from the input buffer

    if (choice == 1) {
        admin.login();
    } else if (choice == 2) {
        // cout << "Guest mode opened" << endl;
        guest.login();
    } else {
        cout << "Invalid choice.\n";
        return 1;  // Exit the program with an error code
    }
    return 0;
}


