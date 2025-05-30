#ifndef CHATSERVER_HPP
#define CHATSERVER_HPP

#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
using namespace muduo;
using namespace muduo::net;

//聊天服务器主类
class ChatServer
{
public:
    // 初始化聊天服务器对象
    ChatServer(EventLoop *loop,
               const InetAddress &listenAddr,
               const string &nameArg);
    // 启动服务
    void start();

private:
    // 回调上报链接状态
    void onConnection(const TcpConnectionPtr &);
    // 回调上报读写事件
    void onMessage(const TcpConnectionPtr &,
                   Buffer *,
                   Timestamp);

    TcpServer _server; // 组合muduo库，实现服务器
    EventLoop *_loop;  // 指向事件循环对象的指针
};

#endif