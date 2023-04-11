cmake_minimum_required(VERSION 3.2)
set(CMAKE_VERBOSE_MAKEFILE on)

# Common Library--------------------------------------------------------------
if ("$ENV{OECORE_TARGET_ARCH}")
    set(OECORE_TARGET_ARCH "$ENV{OECORE_TARGET_ARCH}")
else()
    set(OECORE_TARGET_ARCH "aarch64")
endif()
set(OECORE_TARGET_ARCH "aarch64")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(ara-log REQUIRED)

################################################################################
file(GLOB_RECURSE userdata_srcs ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE userdata_c_srcs ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
file(GLOB_RECURSE userdata_hdrs ${CMAKE_CURRENT_SOURCE_DIR}/includes/*.h)
file(GLOB_RECURSE userdata_hpp_hdrs ${CMAKE_CURRENT_SOURCE_DIR}/includes/*.hpp)
################################################################################

# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/jsoncpp LIBS_JSONCPP)
# add_library(JSONCPP STATIC ${LIBS_JSONCPP})

set(ARA_LIBRARIES ara::log log_wrapper)
if( QNX OR QNXNTO )
  LIST(APPEND ARA_LIBRARIES socket)
endif()
##################生成Gest时，打开。EXE和库注销############################
#file(GLOB_RECURSE userdata_gtest_srcs ${CMAKE_CURRENT_SOURCE_DIR}/Gtest/src/*.cpp)
########################################################################
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes/)

message (OECORE_TARGET_ARCH output: '${OECORE_TARGET_ARCH}') 
if(${OECORE_TARGET_ARCH} STREQUAL "aarch64")
    link_directories(${CMAKE_CURRENT_SOURCE_DIR}/output/lib/s32g)
elseif(${OECORE_TARGET_ARCH} STREQUAL "x86")
    link_directories(${CMAKE_CURRENT_SOURCE_DIR}/output/lib/x86)
else()
    link_directories(${CMAKE_CURRENT_SOURCE_DIR}/output/lib/x64)
endif()
########################################################################

#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/jsoncpp LIBS_JSONCPP)
##add_library(JSONCPP STATIC ${LIBS_JSONCPP})
#set(XP_DEST ${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/xpack)
#
#file(GLOB_RECURSE xp_hdrs ${XP_DEST}/*.h)
#file(GLOB_RECURSE xp_TP_RJ_hdrs ${XP_DEST}/thirdparty/rapidjson/*.h)
#file(GLOB_RECURSE xp_TP_RJ_Er_hdrs ${XP_DEST}/thirdparty/rapidjson/error/*.h)
#file(GLOB_RECURSE xp_TP_RJ_It_hdrs ${XP_DEST}/thirdparty/rapidjson/internal/*.h)
#file(GLOB_RECURSE xp_TP_RJ_MT_hdrs ${XP_DEST}/thirdparty/rapidjson/msinttypes/*.h)
#set(LIBS_XPACK
#        ${xp_hdrs}
#        ${xp_TP_RJ_hdrs}
#        ${xp_TP_RJ_Er_hdrs}
#        ${xp_TP_RJ_It_hdrs}
#        ${xp_TP_RJ_MT_hdrs}
#        ${LIBS_XPACK}
#        )
#add_library(XPACK STATIC ${LIBS_XPACK})
#set_target_properties(XPACK PROPERTIES LINKER_LANGUAGE CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/xpack/thirdparty/rapidjson/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/xpack/thirdparty/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/xpack/)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/)



# Application
set(ALL_COMPILE_SRC
    ${userdata_srcs}
    ${userdata_c_srcs}
    ${userdata_hdrs}
    ${userdata_hpp_hdrs}
    ${ALL_COMPILE_SRC}
)


# Build-------------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 14) 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC  -pthread -Wall -D_GLIBCXX_USE_NANOSLEEP -DLINUX  -lJSONCPP_SDM -lXPACK_SDM")

###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of Build Parameters >>        DO NOT CHANGE THIS COMMENT!
###################################################################################################################################
	
###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of Build Parameters >>          DO NOT CHANGE THIS COMMENT!
###################################################################################################################################


##################只有编译库打开，提交代码需要打开############################ 
#add_library(funcLib_shared SHARED ${ALL_COMPILE_SRC} ${LIBS_JSONCPP} ${LIBS_XPACK} )
#ADD_LIBRARY(sttc_lib STATIC ${ALL_COMPILE_SRC} ${LIBS_JSONCPP} ${LIBS_XPACK} )
set(ARA_LIBRARIES JSONCPP_SDM XPACK_SDM)
add_library(funcLib_shared SHARED ${ALL_COMPILE_SRC})
ADD_LIBRARY(sttc_lib STATIC ${ALL_COMPILE_SRC} )
#add_dependencies(funcLib_shared JSONCPP_SDM XPACK_SDM)

target_link_libraries(funcLib_shared  ${ARA_LIBRARIES})

set_target_properties(funcLib_shared PROPERTIES OUTPUT_NAME "sdm_wrapper")
set_target_properties(sttc_lib PROPERTIES OUTPUT_NAME "sdm_wrapper")

#file(GLOB_RECURSE  ${userdata_hdrs} ${CMAKE_CURRENT_SOURCE_DIR}/output/include/*.h)
#exec_program("cp ${userdata_hdrs} ${CMAKE_CURRENT_SOURCE_DIR}/ExtensionLib/include/")
EXECUTE_PROCESS(COMMAND cp  ${CMAKE_CURRENT_SOURCE_DIR}/includes/service_dynamic_discovery_supporter.h ${CMAKE_CURRENT_SOURCE_DIR}/output/include/sdm/extensionlib/)
EXECUTE_PROCESS(COMMAND cp  -r ${CMAKE_CURRENT_SOURCE_DIR}/output/include/sdm/  ${PROJECT_SOURCE_DIR}/ServiceDispatchingManagementDemo/includes/ )   
EXECUTE_PROCESS(COMMAND   git log -1 --pretty=format:"%h" RESULT_VARIABLE result_var OUTPUT_VARIABLE AppCurrentVersion) 
message(STATUS output: '${AppCurrentVersion}') 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DAPPCURRENTVERSION='${AppCurrentVersion}'")


if(${OECORE_TARGET_ARCH} STREQUAL "aarch64")
    set(CURRENT_PLATFORM "aarch64")
    set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/ExtensionLib/output/lib/s32g/)  
elseif(${OECORE_TARGET_ARCH} STREQUAL "x86")
   set(CURRENT_PLATFORM "x86")
   set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/ExtensionLib/output/lib/x86/)  
else()
   set(CURRENT_PLATFORM "x64")
   set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/ExtensionLib/output/lib/x64/)  
endif()

#EXECUTE_PROCESS(COMMAND cp  ${CMAKE_CURRENT_SOURCE_DIR}/output/lib/s32g/*  ${PROJECT_SOURCE_DIR}/ServiceDispatchingManagementDemo/includes/ )

set(NEUSAR_SDK_PATH "$ENV{SDKTARGETSYSROOT}")
message(STATUS NEUSAR_SDK_PATH: '${NEUSAR_SDK_PATH}') 
if (NEUSAR_SDK_PATH)
	install(FILES  ${CMAKE_CURRENT_SOURCE_DIR}/output/lib/s32g/libsdm_wrapper.a  DESTINATION ${NEUSAR_SDK_PATH}/usr/lib/)
    install(FILES  ${CMAKE_CURRENT_SOURCE_DIR}/output/lib/s32g/libsdm_wrapper.so DESTINATION ${NEUSAR_SDK_PATH}/usr/lib/)
endif()
###########################################################################  



