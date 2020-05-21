#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
class Save {
public:
    vector <string> mas;
   void saveRead(){
    string line;
    string buffer="";
    ifstream in("goEx.txt");


    if (in.is_open())
    {
        while (getline(in, line))
        {
           for (int i=0;i<strlen(line.c_str());i++){
                if(line[i]==' '||line[i]=='\t'){
                   if(buffer!=" "&&buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                        }
                    continue;
                }
                buffer+=line[i];

           }
            if(buffer!=" "&&buffer!=""){
             mas.push_back(buffer);
             buffer="";
            }
        }
    }
    in.close();
    for(int i=0; i<mas.size(); i++){
        std::cout <<mas[i] << std::endl;
    }
    }
};
class Token {
    public:
    vector <string> mas;
     void lexer(){
       std::cout <<mas[0] << std::endl;

    };
   void lexRead(){
    string line;
    string buffer="";
    ifstream in("goEx.txt");


    if (in.is_open())
    {
        while (getline(in, line))
        {
           for (int i=0;i<strlen(line.c_str());i++){
                 switch(line[i]){
                case ' ':
                   if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                   }
                    continue;
                case '+':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";

                   }
                      if(line[i+1]=='+'){
                            buffer+=line[i];
                            buffer+=line[i+1];
                            i++;
                            mas.push_back(buffer);
                            buffer="";
                            continue;
                        }else{
                            buffer+=line[i];
                            mas.push_back(buffer);
                            buffer="";
                            continue;
                        }
                case '-':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";

                   }
                      if(line[i+1]=='-'){
                            buffer+=line[i];
                            buffer+=line[i+1];
                            i++;
                            mas.push_back(buffer);
                            buffer="";
                            continue;
                        }else{
                            buffer+=line[i];
                            mas.push_back(buffer);
                            buffer="";
                            continue;
                        }
                case '*':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                        }
                        buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;
                 case '/':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                        }
                        buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;

                case ',':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";

                   }
                        buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                 case ':':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                   }
                        if(line[i+1]=='='){
                            buffer+=line[i];
                            buffer+=line[i+1];
                            i++;
                            mas.push_back(buffer);
                            buffer="";
                            continue;
                        }else{
                            buffer+=line[i];
                            mas.push_back(buffer);
                            buffer="";
                            continue;
                        }
                   case '(':
                     if( buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                   }
                        buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;
                   case ')':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";

                   }
                    buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;

                   case '{':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                   }
                      buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;
                   case '}':
                     if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";

                   }
                    buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;
                    case '=':
                      if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";
                   }
                        buffer+=line[i];
                        mas.push_back(buffer);
                        buffer="";
                        continue;
                    case '"':{
                            if(buffer!=""){
                        mas.push_back(buffer);
                        buffer="";

                   }


                    buffer+=line[i];
                    i++;

                      for ( i; i<strlen(line.c_str());i++){

                            buffer+=line[i];

                            if(line[i]=='"'){
                                   mas.push_back(buffer);
                                    buffer="";
                            break;
                            }

                     }

                      }




                }
                    if(line[i]!='"'){
                         buffer+=line[i];
                    }


           }
            if(buffer!=" "&&buffer!=""){
             mas.push_back(buffer);
             buffer="";
            }
        }
    }
    in.close();
    for(int i=0; i<mas.size(); i++){
        std::cout <<mas[i] << std::endl;
    }
    }



};


