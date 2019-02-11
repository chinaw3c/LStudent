/*************************************************************************
	> File Name: people.h
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Feb 2019 03:51:04 PM CST
 ************************************************************************/

#ifndef _PEOPLE_H
#define _PEOPLE_H

#include <string>
#include <iostream>

namespace LPeople {
    typedef unsigned int u_int;
    using std::string;
}

class People{
public:
    People();
    ~People();
    bool init_data();
private:
    char blood_group[3]; //血型
    char sex;            //性别
    LPeople::u_int height;//身高
    LPeople::u_int age;   //年龄
    LPeople::string name; //姓名
    LPeople::string tel;  //电话号码
    LPeople::string address; //家庭住址

private:
    inline void input(const char *in_str, LPeople::string & out_data){
        std::cout << in_str;
        std::cin >> out_data;
    }

    inline void input(const char *in_str, LPeople::u_int & out_data){
        std::cout << in_str;
        std::cin >> out_data;
    }

    inline void input(const char *in_str, char & out_data){
        std::cout << in_str;
        std::cin >> out_data;
    }

    inline void input(const char *in_str, char* out_data){
        std::cout << in_str;
        std::cin >> out_data;
    }


}; //class People


#endif
