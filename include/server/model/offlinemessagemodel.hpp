#ifndef OFFLINEMESSAGEMODEL_H
#define OFFLINEMESSAGEMODEL_H

#include <vector>
#include <string>
using namespace std;

//提供离线消息表操作接口
class OfflineMsgModel
{ 
public:
    //存储用户离线消息
    void insert(int userid, string msg);

    //查询用户离线消息
    vector<string> query(int userid);

    //删除用户离线消息
    void remove(int userid);
};
#endif