/*
Implement a Singleton class to create a single instance of a Logger that can be accessed globally.
The Logger class should have a static member function to get the instance.
*/

#include <iostream>
#include <string>

class Logger {
private:
    static Logger* instance;
    std::string logMessage;

    Logger() { logMessage = "Singleton Logger Initialized."; }

public:
    static Logger* getInstance();
    void log(const std::string& message);
    void displayLog() const;
};

Logger* Logger::instance =NULL;

Logger* Logger::getInstance() {
    if (!instance) {
        instance = new Logger();
    }
    return instance;
}

void Logger::log(const std::string& message) {
    logMessage += "\n" + message;
}

void Logger::displayLog() const {
    std::cout << logMessage << std::endl;
}

int main() {
    Logger* logger = Logger::getInstance();

    logger->log("Error: File not found.");
    logger->log("Info: Operation completed successfully.");

    logger->displayLog();

    return 0;
}

/*
This program demonstrates the Singleton design pattern.
The Logger class has a private static instance and a private constructor, so it cannot be instantiated directly.
Instead, it provides a static member function getInstance() that returns the single instance of the Logger.
Users can log messages using the log() method, and all the log messages are stored and displayed together using the displayLog() method.
*/


