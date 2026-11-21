#include<iostream>
#include<vector>
#include<string>
#include <cstdlib>
#include <cerrno>

class WELCOME
{
    public:
    void GUI_OUT()
    {
        std::cout <<" ____________________________ " << std::endl;
        std::cout <<"|                            |" << std::endl;
        std::cout <<"|      FULL AUTO SORTER      |" << std::endl;
        std::cout <<"|____________________________|" << std::endl;
        std::cout <<"|         V 0.01 Beta        |" << std::endl;
        std::cout <<"|____________________________|" << std::endl;
        std::cout <<"[Help] command to display the help information " << std::endl;
    }

};

int main ()
{
    bool Mode = 0;
    WELCOME welcome;
    welcome.GUI_OUT();
    std::vector<float> In_Put;
    std::string cache;
    while (true)
    {
        std::cin >> cache;
        if (cache == "[Help]" || cache == "[help]" || cache == "[HELP]" || cache == "Help" || cache == "help" || cache == "HELP")
        {   std::cout <<" ________________________________________________ " << std::endl;
            std::cout <<"|______________________Help______________________|" << std::endl;
            std::cout <<"|         This is a auto-sorter program.         |" << std::endl;
            std::cout <<"|  you can input numbers and they will be sorted |" << std::endl;
            std::cout <<"|                 as sequentially                |" << std::endl;
            std::cout <<"|------------------------------------------------|" << std::endl;
            std::cout <<"|              [Done]: Finish input              |" << std::endl;
            std::cout <<"|------------------------------------------------|" << std::endl;
            std::cout <<"|              [Exit]: Exit program              |" << std::endl;
            std::cout <<"|------------------------------------------------|" << std::endl;
            std::cout <<"|        [Reverse]: Use reverse sorting          |" << std::endl;
            std::cout <<"|------------------------------------------------|" << std::endl;
            std::cout <<"|      [License]: View license information       |" << std::endl;
            std::cout <<"|------------------------------------------------|" << std::endl;
            std::cout <<"|________________FULL AUTO SORTER________________|" << std::endl;
            continue;
        }

        if (cache == "[Exit]" || cache == "[exit]" || cache == "[EXIT]" || cache == "Exit" || cache == "exit" || cache == "EXIT")
            {
                return 0;
            }

        if (cache == "[Reverse]" || cache == "[reverse]" || cache == "[REVERSE]" || cache == "Reverse" || cache == "reverse" || cache == "REVERSE")
            {
                Mode = 1;
                continue;
            }
        if (cache == "[License]" || cache == "[license]" || cache == "[LICENSE]" || cache == "License" || cache == "license" || cache == "LICENSE")
            {
            std::cout << " ________________________________________________ " << std::endl;
            std::cout << "|_____________________License____________________|" << std::endl;
            std::cout << "|         FULL AUTO SORTER  V 0.01 Beta          |" << std::endl;
            std::cout << "|            Copyright (c) 2026 [Lee]            |" << std::endl;
            std::cout << "|------------------------------------------------|" << std::endl;
            std::cout << "| This project is licensed under the MIT License.|" << std::endl;
            std::cout << "|                                                |" << std::endl;
            std::cout << "|   You may use, copy, modify, merge, publish,   |" << std::endl;
            std::cout << "|   distribute, sublicense, and/or sell copies   |" << std::endl;
            std::cout << "|   of this software, subject to the conditions  |" << std::endl;
            std::cout << "|              of the MIT License.               |" << std::endl;
            std::cout << "|                                                |" << std::endl;
            std::cout << "|    The copyright notice and this permission    |" << std::endl;
            std::cout << "|    notice must be included in all copies or    |" << std::endl;
            std::cout << "|      substantial portions of the Software.     |" << std::endl;
            std::cout << "|                                                |" << std::endl;
            std::cout << "|   THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT    |" << std::endl;
            std::cout << "|             WARRANTY OF ANY KIND.              |" << std::endl;
            std::cout << "|                                                |" << std::endl;
            std::cout << "|    See LICENSE.txt for the full MIT License.   |" << std::endl;
            std::cout << "|________________________________________________|" << std::endl;
            continue;
            }
        if (cache == "[Done]" || cache == "[done]" || cache == "[DONE]" || cache == "Done" || cache == "done" || cache == "DONE")
            {
            break;
            }

        char* end = NULL;
        errno = 0;
        float val = std::strtof(cache.c_str(), &end);

        if (end == cache.c_str() || *end != '\0' || errno == ERANGE)
        {
            std::cout << "Unknown command or invalid number: " << cache << std::endl;
            continue;
        }
        In_Put.push_back(val);
        std::cout << "-----\n";
    }

    int Num = In_Put.size();
    if (Mode == 0){
        for (int j = 0 ; j < Num ; j++)
        {
            for (int i = 0 ; i< Num-1 ; i++)
            {
                if (In_Put[i] > In_Put[i+1])
                {
                 std::swap ( In_Put[i] , In_Put[i+1]); 
                }
            }
        }
    }
    else
    { 
        for (int j = 0 ; j < Num ; j++)
        {
            for (int i = 0 ; i< Num-1 ; i++)
            {
                if (In_Put[i] < In_Put[i+1])
                {
                 std::swap ( In_Put[i] , In_Put[i+1]); 
                }
            }
        }
    }

    std::cout <<"-----------------------------------------------------------"<< std::endl;
    for (int i = 0 ; i< Num ; i++)
    {
        std::cout << In_Put[i] << std::endl;
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}