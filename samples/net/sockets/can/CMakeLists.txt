cmake_minimum_required(VERSION 3.13.1)

macro(set_conf_file)
  if(EXISTS                 ${APPLICATION_SOURCE_DIR}/boards/${BOARD}.conf)
    set(CONF_FILE "prj.conf ${APPLICATION_SOURCE_DIR}/boards/${BOARD}.conf")
  else()
    set(CONF_FILE "prj.conf")
  endif()
endmacro()

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(sockets_can)

target_sources(app PRIVATE src/main.c)
