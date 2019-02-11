cmake_minimum_required (VERSION 2.8)

project(studentsystem)

# 查找源文件
aux_source_directory (../src/ DIR_SOURCES)

# 生成目标文件
add_executable(studentsys ${DIR_SOURCES})
