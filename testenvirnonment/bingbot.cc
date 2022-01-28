#include <windows.h>
#include <shellapi.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <fstream>
#include <iostream>


using namespace std;

int main() {

    
    string baseUrl = "http://bing.de/search?q=";
    string search;
    string openUrl; 
    int i = 0;
    string line;
    vector<string> lines;
    srand(time(0));
    int total_lines=0;


    ifstream file("bingbotlist.txt");
    while (getline(file, line))
    {
        total_lines++;
        lines.push_back(line);
    }
    
    
    
    while (i<10)
    {   
        int random_number=rand()%total_lines;
        search = lines[random_number];
        openUrl = baseUrl + search;


        ShellExecuteA(0, "open",  openUrl.c_str(), 0, 0, SW_SHOWNORMAL);
        i++;
    }
    
    
    
    return 0;
}