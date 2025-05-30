# ChatServer
集群聊天服务器，基于muduo网络库实现并使用  redis  nginx进行负载均衡实现跨服务器聊天 使用Mysql进行用户的数据存储，通过使用第三方库json实现聊天过程中文字等内容的序列化传输以及反序列化显示，然后通过redis进行通道订阅以及信息推送服务到nginx负载均衡的网络端口中实现跨服务器聊天功能。


运行方法：
cd build
rm -rf *
cmake ..
make

所需环境：
redis
hiredis
nginx  TCP负载均衡的连接
