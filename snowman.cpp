#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
#include <string>
#include <array>
#include <stdexcept>
#include "snowman.hpp"
using namespace std;
using namespace ariel;


// class ariel{
    // public:
        std::string printHat(int x) {
            std::string str;
            if(x == 1) {str += "     \n _===_\n";}
            if(x == 2) {str += "  ___ \n .....\n";}
            if(x == 3) {str += "   _  \n  /_\\ \n";}
            if(x == 4) {str += "  ___ \n (_*_)\n";}
            //else //error
            return str;
        }
        std::string printNose(int x) {
            std::string str;
            if(x == 1) {str += ",";}
            if(x == 2) {str += ".";}
            if(x == 3) {str += "_";}
            if(x == 4) {str += "";}
            //else //error
            return str;
        }
        std::string printLeftEye(int x) {
            std::string str;
            if(x == 1) {str += "(.";}
            if(x == 2) {str += "(o";}
            if(x == 3) {str += "(o";}
            if(x == 4) {str += "(-";}
            //else //error
            return str;
        }
        std::string printRightEye(int x) {
            std::string str;
            if(x == 1) {str += ".)";}
            if(x == 2) {str += "o)";}
            if(x == 3) {str += "O)";}
            if(x == 4) {str += "-)";}
            //else //error
            return str;
        }
        std::string printLeftArm_1(int x) {
            std::string str;
            if(x == 1) {str += " ";}  
            if(x == 2) {str += "\\";}
            if(x == 3) {str += " ";}
            if(x == 4) {str += " ";}
            //else //error
            return str;
        }
        std::string printLeftArm_2(int x) {
            std::string str;
            if(x == 1) {str += "<";}
            if(x == 2) {str += " ";}
            if(x == 3) {str += "/";}
            if(x == 4) {str += " ";}
            //else //error
            return str;
        }
        std::string printRightArm_1(int x) {
            std::string str;
            if(x == 1) {str += " \n";}
            if(x == 2) {str += "/\n";}
            if(x == 3) {str += " \n";}
            if(x == 4) {str += " \n";}
            //else //error
            return str;
        }
        std::string printRightArm_2(int x) {
            std::string str;
            if(x == 1) {str += ">\n";}
            if(x == 2) {str += " \n";}
            if(x == 3) {str += "\\\n";}
            if(x == 4) {str += " \n";}
            //else //error
            return str;
        }
        std::string printTorso(int x) {
            std::string str;
            if(x == 1) {str += "( : )";}
            if(x == 2) {str += "(] [)";}
            if(x == 3) {str += "(> <)";}
            if(x == 4) {str += "(   )";}
            //else //error
            return str; 
        }
        std::string printBase(int x) {
            std::string str;
            if(x == 1) {str += " ( : )\n" ;}
            else if(x == 2) {str += " (\" \")\n";}
            else if(x == 3) {str += " (___)\n";}
            else if(x == 4) {str += " (   )\n";}
            //else //error
            return str;
        }
    


        //  0  ,  1   ,     2    ,      3    ,     4    ,     5     ,   6   ,  7
        // hat , nose , left eye , right eye , left arm , right arm , torso , base

        std::string ariel::snowman(int x) {
            if(x < 11111111 || x > 44444444) {
                // error!!
                throw std::invalid_argument("Exception");
                return "";
            }
            else{
                std::string str = "";
                std::array<int, 8> arr;
                int temp = x;
                for(int i = 0; i < 8; i++){ // puts the commands in an array
                    // cout << temp << " , ";

                    arr[7-i] = temp % 10;
                    
                    temp /= 10;

                    // cout << x << " , " << temp << " , ";

                    // cout << arr[7-i] << endl;
                }
                str += printHat(arr[0]);
                str += printLeftArm_1(arr[4]);
                str += printLeftEye(arr[2]);
                str += printNose(arr[1]);
                str += printRightEye(arr[3]);
                str += printRightArm_1(arr[5]);
                str += printLeftArm_2(arr[4]);
                str += printTorso(arr[6]);
                str += printRightArm_2(arr[5]);
                str += printBase(arr[7]);
                // cout << "==============" << endl << x;
                return str;
            }
            
        }

        // int main() {
        //     cout << snowman(11111111);
        //     cout << endl << snowman(11111112);
        //     cout << endl << snowman(11111113);
        //     cout << endl << snowman(11111114);
        //     cout << endl << snowman(11111121);
        //     cout << endl << snowman(11111122);
        //     cout << endl << snowman(11111123);
        //     cout << endl << snowman(11111124);
        //     cout << endl << snowman(11111131);
        //     cout << endl << snowman(11111132);
        //     cout << endl << snowman(11111133);
        //     cout << endl << snowman(11111134);
        //     cout << endl << snowman(11111141);
        //     cout << endl << snowman(11111142);
        //     cout << endl << snowman(11111143);
        //     cout << endl << snowman(11111144);

        //     cout << endl << snowman(11111211);
        //     cout << endl << snowman(11111212);
        //     cout << endl << snowman(11111213);
        //     cout << endl << snowman(11111214);
        //     cout << endl << snowman(11111221);
        //     cout << endl << snowman(11111222);
        //     cout << endl << snowman(11111223);
        //     cout << endl << snowman(11111224);
        //     cout << endl << snowman(11111231);
        //     cout << endl << snowman(11111232);
        //     cout << endl << snowman(11111233);
        //     cout << endl << snowman(11111234);
        //     cout << endl << snowman(11111241);
        //     cout << endl << snowman(11111242);
        //     cout << endl << snowman(11111243);
        //     cout << endl << snowman(11111244);

        //     cout << endl << snowman(11111311);
        //     cout << endl << snowman(11111312);
        //     cout << endl << snowman(11111313);
        //     cout << endl << snowman(11111314);
        //     cout << endl << snowman(11111321);
        //     cout << endl << snowman(11111322);
        //     cout << endl << snowman(11111323);
        //     cout << endl << snowman(11111324);
        //     cout << endl << snowman(11111331);
        //     cout << endl << snowman(11111332);
        //     cout << endl << snowman(11111333);
        //     cout << endl << snowman(11111334);
        //     cout << endl << snowman(11111341);
        //     cout << endl << snowman(11111342);
        //     cout << endl << snowman(11111343);
        //     cout << endl << snowman(11111344);

        //     cout << endl << snowman(11111411);
        //     cout << endl << snowman(11111412);
        //     cout << endl << snowman(11111413);
        //     cout << endl << snowman(11111414);
        //     cout << endl << snowman(11111421);
        //     cout << endl << snowman(11111422);
        //     cout << endl << snowman(11111423);
        //     cout << endl << snowman(11111424);
        //     cout << endl << snowman(11111431);
        //     cout << endl << snowman(11111432);
        //     cout << endl << snowman(11111433);
        //     cout << endl << snowman(11111434);
        //     cout << endl << snowman(11111441);
        //     cout << endl << snowman(11111442);
        //     cout << endl << snowman(11111443);
        //     cout << endl << snowman(11111444);



        //     cout << endl << snowman(11112111);
        //     cout << endl << snowman(11112112);
        //     cout << endl << snowman(11112113);
        //     cout << endl << snowman(11112114);
        //     cout << endl << snowman(11112121);
        //     cout << endl << snowman(11112122);
        //     cout << endl << snowman(11112123);
        //     cout << endl << snowman(11112124);
        //     cout << endl << snowman(11112131);
        //     cout << endl << snowman(11112132);
        //     cout << endl << snowman(11112133);
        //     cout << endl << snowman(11112134);
        //     cout << endl << snowman(11112141);
        //     cout << endl << snowman(11112142);
        //     cout << endl << snowman(11112143);
        //     cout << endl << snowman(11112144);

        //     cout << endl << snowman(11112211);
        //     cout << endl << snowman(11112212);
        //     cout << endl << snowman(11112213);
        //     cout << endl << snowman(11112214);
        //     cout << endl << snowman(11112221);
        //     cout << endl << snowman(11112222);
        //     cout << endl << snowman(11112223);
        //     cout << endl << snowman(11112224);
        //     cout << endl << snowman(11112231);
        //     cout << endl << snowman(11112232);
        //     cout << endl << snowman(11112233);
        //     cout << endl << snowman(11112234);
        //     cout << endl << snowman(11112241);
        //     cout << endl << snowman(11112242);
        //     cout << endl << snowman(11112243);
        //     cout << endl << snowman(11112244);

        //     cout << endl << snowman(11112311);
        //     cout << endl << snowman(11112312);
        //     cout << endl << snowman(11112313);
        //     cout << endl << snowman(11112314);
        //     cout << endl << snowman(11112321);
        //     cout << endl << snowman(11112322);
        //     cout << endl << snowman(11112323);
        //     cout << endl << snowman(11112324);
        //     cout << endl << snowman(11112331);
        //     cout << endl << snowman(11112332);
        //     cout << endl << snowman(11112333);
        //     cout << endl << snowman(11112334);
        //     cout << endl << snowman(11112341);
        //     cout << endl << snowman(11112342);
        //     cout << endl << snowman(11112343);
        //     cout << endl << snowman(11112344);

        //     cout << endl << snowman(11112411);
        //     cout << endl << snowman(11112412);
        //     cout << endl << snowman(11112413);
        //     cout << endl << snowman(11112414);
        //     cout << endl << snowman(11112421);
        //     cout << endl << snowman(11112422);
        //     cout << endl << snowman(11112423);
        //     cout << endl << snowman(11112424);
        //     cout << endl << snowman(11112431);
        //     cout << endl << snowman(11112432);
        //     cout << endl << snowman(11112433);
        //     cout << endl << snowman(11112434);
        //     cout << endl << snowman(11112441);
        //     cout << endl << snowman(11112442);
        //     cout << endl << snowman(11112443);
        //     cout << endl << snowman(11112444);

        //     return 0;
        // }
    // };
// };
