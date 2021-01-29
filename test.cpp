/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2021-01-03
 * 
 * @copyright Copyright (c) 2021 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2021-01-03
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <iostream>

struct CHAR
{
    unsigned int ch   : 8;    //8位
    unsigned int font : 6;    //6位
    unsigned int size : 18;   //18位
};
struct CHAR ch1;

struct CHAR2
{
    unsigned char ch;    //8位
    unsigned char font;  //8位
    unsigned int  size;  //32位
};
struct CHAR2 ch2;

int main(int argc, char **argv)
{
    std::cout << "CHAR Len: " << sizeof(ch1) << std::endl;
    std::cout << "CHAR2 Len: " << sizeof(ch2) << std::endl;


    return 0;
}