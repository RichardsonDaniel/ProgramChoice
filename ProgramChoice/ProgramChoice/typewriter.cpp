//#include <iostream>
//#include <string>
//#include <thread>
//#include <chrono>
//
//// Name space resolutions
//using std::cout;
//using std::flush;
//using std::string;
//using std::this_thread::sleep_for;
//using std::chrono::milliseconds;
//
//// Forward declare the slow_print function
//void slow_print(const string&, unsigned int);
//
//// Main function
//int main()
//{
//	string message = "Lorem ipsum dolor sit amet, \nconsectetur adipisicing elit. Voluptatum, porro \nnesciunt laboriosam adipisci provident eum?\n";
//	slow_print(message, 30);
//
//	return 0;
//}
//
//// Implement the slow_print function
///**
// * Function to print each character in a string with a delay (a "typewriter" effect)
// * @param message         The string to print
// * @param millis_per_char Milliseconds to take to print each character
// */
//void slow_print(const string& message, unsigned int millis_per_char)
//{
//	// Range loops are "for each" constructs; here: for each character in the string
//	for (const char c : message)
//	{
//		// flush is used to make sure the buffer is emptied to the terminal immediately
//		cout << c << flush;
//
//		// Ask the thread to sleep for at least n millis.
//		sleep_for(milliseconds(millis_per_char));
//	}
//}