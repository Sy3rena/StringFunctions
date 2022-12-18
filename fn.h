#ifndef FN
#define FN

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

class fn
{
    public:
        std::vector<std::string> split(std::string str, char splitter)
        {
            std::vector<std::string> tokens;
            std::string::iterator lts = str.begin();

            for(std::string::iterator i = str.begin(); i < str.end(); ++i)
            {
                if(*i == splitter)
                {
                    tokens.push_back(std::string(lts, i));
                    lts = ++i;
                }
            }

            if(lts != str.begin()) tokens.push_back(std::string(lts, str.end()));

            return tokens;
        }

        std::string join(std::vector<std::string> arr, std::string splitter)
        {
            std::string str = "";

            for(std::vector<std::string>::iterator i = arr.begin(); i < arr.end(); ++i)
            {
                str += *i += splitter;
            }

            if(splitter != "") str.pop_back();

            return str;
        }

        std::string trim(std::string str, char DeleteChars)
        {
            std::string FullString = "";

            for(int i = 0; i != str.length(); i++)
            {
                if(str[i] == DeleteChars) 
                {
                    continue;
                }

                else
                {
                    FullString += str[i];
                }
            }

            return FullString;
        }
};

#endif
