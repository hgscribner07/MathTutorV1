
/***********************************************************************************************************************
* Title......: Math Tutor V1
* Programmers: Hannah Scribner, Muhammad Bilal, Isiaha Black-Marhslek
* Date.......: 2025.09.5
* Github Repo: https://github.com/hgscribner07/MathTutorV1
* Description: An easy math tutor. designed to help young children with their math abilites. It displays the programs
*  intro, asks for the users name, shows simple questions, and then displays an end-of-program message.
***********************************************************************************************************************/
#include <iostream>
using namespace std;

int main() {
cout << R"( .--------------------------------------------------------------------------------------------------------.
|  _____ _____ _____ __  __            __  __       _______ _    _   _______ _    _ _______ ____  _____  |
| / ____|_   _/ ____|  \/  |   /\     |  \/  |   /\|__   __| |  | | |__   __| |  | |__   __/ __ \|  __ \ |
|| (___   | || |  __| \  / |  /  \    | \  / |  /  \  | |  | |__| |    | |  | |  | |  | | | |  | | |__) ||
| \___ \  | || | |_ | |\/| | / /\ \   | |\/| | / /\ \ | |  |  __  |    | |  | |  | |  | | | |  | |  _  / |
| ____) |_| || |__| | |  | |/ ____ \  | |  | |/ ____ \| |  | |  | |    | |  | |__| |  | | | |__| | | \ \ |
||_____/|_____\_____|_|  |_/_/    \_\ |_|  |_/_/    \_\_|  |_|  |_|    |_|   \____/   |_|  \____/|_|  \_\|
'--------------------------------------------------------------------------------------------------------')" << endl;

string userName = "unknown";
int leftNum = 3;
int rightNum = 5;
int userAnswer = 0;




cout << "Math Tutor V1" << endl;
cout << "SIGMA Maths Jokes" << endl;
cout << "A Math jock: Why was the equal sign so humble? Because it realized it wasnt < or > anyone else." << endl;
cout << endl;
cout << "Why doesn't anybody talk to circles? Because there is no point." <<endl;
cout << "------------------------------------------------------------------------------------------------" << endl;

cout << endl;
cout << "What's your name: "<< endl;
cin >> userName;
cout << userName << ", welcome to Sigma Math Tutor!" << endl;
cout << "------------------------------------------------------------------------------------------------" << endl;

cout << endl;
cout << userName << ", what is " << leftNum << "+" << rightNum << "=" << endl;
cin >> userAnswer;
cout << "------------------------------------------------------------------------------------------------" <<endl;

cout << "Sorry this is all the project does right now." << endl;
cout << "Come back later..." << endl;
cout << "Good Bye" << endl;\







return 0;
}