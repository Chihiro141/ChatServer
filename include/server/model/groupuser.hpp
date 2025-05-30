#ifndef GROUPUSER_H
#define GROUPUSER_H
#include "user.hpp"

//群组用户，多添加了一个role角色信息，从User类继承，复用User中其他信息
class GroupUser : public User {
public:
    void setRole(string role) {this->role = role;}
    string getRole() {return this->role;}
private:
    string role; //群组中的角色，管理员/普通成员
};

#endif