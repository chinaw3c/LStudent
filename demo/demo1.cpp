/*************************************************************************
	> File Name: demo1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Feb 2019 04:25:04 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void asd(char (& data)[3]){
    strcpy(data, "ab");
}

int main(void){
    char data1[3];
    asd(data1);
    cout << data1 << endl;


    return 0;

}
