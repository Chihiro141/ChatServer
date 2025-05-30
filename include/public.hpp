#ifndef PUBLIC_H
#define PUBLIC_H
//server和client公共文件

enum EnMsgType
{
    LOGIN_MSG = 1 , //登陆消息
    LOGIN_MSG_ACK, //登陆响应消息
    REG_MSG,  //注册消息
    REG_MSG_ACK,  //注册响应消息
    ONE_CHAT_MSG, //私聊消息
    ADD_FRIEND_MSG, //添加好友消息

    CREATE_GROUP_MSG, //创建群组7
    ADD_GROUP_MSG, //加入群组8
    GROUP_CHAT_MSG, //群聊天9
    LOGINOUT_MSG,
};

#endif