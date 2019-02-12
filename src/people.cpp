/*************************************************************************
	> File Name: people.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Feb 2019 03:54:44 PM CST
 ************************************************************************/

#include "people.h"

People::People(){
    init_data();
}

bool People::init_data(){
    input("请输入姓名:", name);
    input("请输入年龄:", age);
    input("请输入身高:", height);
    input("请输入血型:", blood_group);
    input("请输入性别:", sex);
    input("请输入电话号码:", tel);
    input("请输入家庭住址", address);

    return true;
}

