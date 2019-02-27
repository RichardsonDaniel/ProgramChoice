#include <windows.h>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
int programChoice = 1;

// Name space resolutions
using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

string Openmessage{ R"(
///////////////////////////////////////////////////////// 
Please select program type to run:
1. PointTracker.
2. ObjectTracker
/////////////////////////////////////////////////////////

Please type number of selected program: )" };

string Fishing{ R"(
     ,%&& %&& %
   ,%&%& %&%& %&
  %& %&% &%&% % &%
 % &%% %&% &% %&%&,
 &%&% %&%& %& &%& %
%%& %&%& %&%&% %&%%&
&%&% %&% % %& &% %%&
&& %&% %&%& %&% %&%'
 '%&% %&% %&&%&%%'%
  % %& %& %&% &%%
    `\%%.'  /`%&'
      |    |            /`-._           _\\/
      |,   |_          /     `-._ ..--~`_
      |;   |_`\_      /  ,\\.~`  `-._ -  ^
      |;:  |/^}__..-,@   .~`    ~    `o ~
      |;:  |(____.-'     '.   ~   -    `    ~
      |;:  |  \ / `\       //.  -    ^   ~
      |;:  |\ /' /\_\_        ~. _ ~   -   //-
    \\/;:   \'--' `---`           `\\//-\\///
 )" };

string Mouse{ R"(
               _     __,..---""-._                 ';-,
        ,    _/_),-"`             '-.                `\\
       \|.-"`    -_)                 '.                ||
       /`   a   ,      LOADING...      \              .'/
       '.___,__/                 .-'    \_        _.-'.'
          |\  \      \         /`        _`""""""`_.-'
             _/;--._, >        |   --.__/ `""""""`
           (((-'  __//`'-......-;\      )
                (((-'       __//  '--. /
                          (((-'    __//
                                 (((-'
 )" };


void slow_print(const string& message, unsigned int millis_per_char)
{
	// Range loops are "for each" constructs; here: for each character in the string
	for (const char c : message)
	{
		// flush is used to make sure the buffer is emptied to the terminal immediately
		cout << c << flush;

		// Ask the thread to sleep for at least n millis.
		sleep_for(milliseconds(millis_per_char));
	}
}


VOID startup(LPCTSTR lpApplicationName)
{
	// additional information
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	// set the size of the structures
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	// start the program up
	CreateProcess(lpApplicationName,   // the path
		NULL,        // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si,            // Pointer to STARTUPINFO structure
		&pi             // Pointer to PROCESS_INFORMATION structure (removed extra parentheses)
	);
	// Close process and thread handles. 
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
}

int main(int argc, char** argv) {

	std::cout << Fishing;
	slow_print(Openmessage, 3);
	std::cin >> programChoice;

	switch (programChoice) {

	case 1:
		system("CLS");
		slow_print(Mouse, 1);
		startup("PointTrackerP/PointTracker.exe");
		break;
	case 2:
		system("CLS");
		slow_print(Mouse, 1);
		startup("ObjectTrackerP/ObjectTracker.exe");
		break;
	}
}