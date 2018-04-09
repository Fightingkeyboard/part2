#include <iostream>
#include <string>


//Comment Shariar Kabir
// This code is very readable.
// It checks until there is a character reached, and then returns
// The substring of everything after the charatcer
std::string removeLeadingSpaces(std::string line){
	for (int i = 0; i < line.size(); i++){
		if (!isspace(line[i])){
			std::string result = line.substr(i);
			return result;
		}
	}
}

// Just gets rid of all leading spaces
// One issue is that the last line will have a newline, when it should not
// Also, it makes more sense, to take in a line as a variable instead of cin
std::string unindent(std::string line){
	std::string result;
	result += removeLeadingSpaces(line) + "\n";
	return result;
}


// Easy to understand, adds to counter when a char appears
int countChar(std::string line, char c){
	int count = 0;
	for (int i = 0; i < line.size(); i++){
		if (line[i] == c){
			count += 1;
		}
	}
	return count;
}


// Why was openblocks counted first before closedblocks
std::string indent(){
	int tabs = 0;
	std::string result;
	std::string line;
	// Changed removeLeadingSpaces to unindent
	while (getline(std::cin, line)){
		line = unindent(line);
		tabs -= countChar(line, '}');
		// Before it was adding spaces, instead its eaier to add a tab
		for (int i = 0; i < tabs; i++){
			result += "\t";
		}
		//std::cout << tabs<< std::endl;
		result += line;
		tabs += countChar(line, '{');
	}
	return result;
}
