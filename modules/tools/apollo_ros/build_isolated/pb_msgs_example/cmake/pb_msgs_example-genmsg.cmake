# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "pb_msgs_example: 0 messages, 0 services, 1 protos")

set(MSG_I_FLAGS "-Istd_msgs:/home/tmp/ros/share/std_msgs/cmake/../msg")
find_package(Protobuf REQUIRED)
  list(APPEND PROTO_I_FLAGS -I=/apollo/modules/tools/apollo_ros/src/topic_forward/proto)
  list(APPEND PROTO_I_FLAGS -I=/home/tmp/ros/share/pb_msgs/cmake/../proto)

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(pb_msgs_example_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services

### Generating proto
      _generate_proto_cpp(pb_msgs_example
      "/apollo/modules/tools/apollo_ros/src/topic_forward/proto/chatter.proto"
      "${PROTO_I_FLAGS}"
      ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pb_msgs_example
      CC_FILE
    )
    list(APPEND SRC_ ${CC_FILE})
    
### Generating Module File
_generate_module_cpp(pb_msgs_example
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pb_msgs_example
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(pb_msgs_example_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(pb_msgs_example_generate_messages pb_msgs_example_generate_messages_cpp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(pb_msgs_example_gencpp)
add_dependencies(pb_msgs_example_gencpp pb_msgs_example_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pb_msgs_example_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services

### Generating proto
  
### Generating Module File
_generate_module_lisp(pb_msgs_example
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pb_msgs_example
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(pb_msgs_example_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(pb_msgs_example_generate_messages pb_msgs_example_generate_messages_lisp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(pb_msgs_example_genlisp)
add_dependencies(pb_msgs_example_genlisp pb_msgs_example_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pb_msgs_example_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services

### Generating proto

      if(pb_msgs_example EQUAL "pb_msgs")
      set(PB_PY_OUT_DIR ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pb_msgs)
    else()
      set(PB_PY_OUT_DIR $ENV{ROS_ROOT}/../../${PYTHON_INSTALL_DIR}/pb_msgs)
    endif()
    _generate_proto_py(pb_msgs_example
      "/apollo/modules/tools/apollo_ros/src/topic_forward/proto/chatter.proto"
      "${PROTO_I_FLAGS}"
      # All pb msgs should be in package pb_msgs
      ${PB_PY_OUT_DIR}
    )
    
### Generating Module File
_generate_module_py(pb_msgs_example
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pb_msgs_example
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(pb_msgs_example_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(pb_msgs_example_generate_messages pb_msgs_example_generate_messages_py)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(pb_msgs_example_genpy)
add_dependencies(pb_msgs_example_genpy pb_msgs_example_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pb_msgs_example_generate_messages_py)


include_directories(include ${CATKIN_INCLUDE_DIRS} ${PROTOBUF_INCLUDE_DIR})
  find_package(pb_msgs)
  include_directories(${pb_msgs_INCLUDE_DIR})
add_library(${PROJECT_NAME}_proto ${SRC_})
target_link_libraries(${PROJECT_NAME}_proto
  LINK_INTERFACE_LIBRARIES
    ${pb_msgs_LIBRARIES}
    ${PROTOBUF_LIBRARY}
)

install(
  TARGETS ${PROJECT_NAME}_proto
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)


if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pb_msgs_example)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pb_msgs_example
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(pb_msgs_example_generate_messages_cpp pb_msgs_generate_messages_cpp)
add_dependencies(pb_msgs_example_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pb_msgs_example)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pb_msgs_example
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(pb_msgs_example_generate_messages_lisp pb_msgs_generate_messages_lisp)
add_dependencies(pb_msgs_example_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pb_msgs_example)
  install(CODE "execute_process(COMMAND \"/usr/local/miniconda2/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pb_msgs_example\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pb_msgs_example
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(pb_msgs_example_generate_messages_py pb_msgs_generate_messages_py)
add_dependencies(pb_msgs_example_generate_messages_py std_msgs_generate_messages_py)
