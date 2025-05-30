#定义一个SRC_LIST，包含该目录下的所有源文件
aux_source_directory(. SRC_LIST)

#指定生成可执行文件
add_executable(ChatClient ${SRC_LIST} )

#指定依赖库
target_link_libraries(ChatClient pthread)