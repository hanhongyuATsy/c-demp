cmake_minimum_required(VERSION 3.2)
set(CMAKE_VERBOSE_MAKEFILE on)

########################################################################

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/jsoncpp LIBS_JSONCPP)
set(XP_DEST ${CMAKE_CURRENT_SOURCE_DIR}/src/xpack)

file(GLOB_RECURSE xp_hdrs ${XP_DEST}/*.h)
file(GLOB_RECURSE xp_TP_RJ_hdrs ${XP_DEST}/thirdparty/rapidjson/*.h)
file(GLOB_RECURSE xp_TP_RJ_Er_hdrs ${XP_DEST}/thirdparty/rapidjson/error/*.h)
file(GLOB_RECURSE xp_TP_RJ_It_hdrs ${XP_DEST}/thirdparty/rapidjson/internal/*.h)
file(GLOB_RECURSE xp_TP_RJ_MT_hdrs ${XP_DEST}/thirdparty/rapidjson/msinttypes/*.h)

set(LIBS_XPACK
        ${xp_hdrs}
        ${xp_TP_RJ_hdrs}
        ${xp_TP_RJ_Er_hdrs}
        ${xp_TP_RJ_It_hdrs}
        ${xp_TP_RJ_MT_hdrs}
        ${LIBS_XPACK}
        )

add_library(JSONCPP STATIC ${LIBS_JSONCPP})
add_library(XPACK STATIC ${LIBS_XPACK})
set_target_properties(XPACK PROPERTIES LINKER_LANGUAGE CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/xpack/thirdparty/rapidjson/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/xpack/thirdparty/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/xpack/)



set(CMAKE_CXX_STANDARD 14) 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -fPIC -pthread -Wall -DLINUX")

###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of Build Parameters >>        DO NOT CHANGE THIS COMMENT!
###################################################################################################################################
	
###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of Build Parameters >>          DO NOT CHANGE THIS COMMENT!
###################################################################################################################################


##################只有编译库打开，提交代码需要打开############################ 


#EXECUTE_PROCESS(COMMAND cp  ${CMAKE_CURRENT_SOURCE_DIR}/includes/service_dynamic_discovery_supporter.h ${CMAKE_CURRENT_SOURCE_DIR}/output/include/sdm/extensionlib/)
#EXECUTE_PROCESS(COMMAND cp  -r ${CMAKE_CURRENT_SOURCE_DIR}/output/include/sdm/  ${PROJECT_SOURCE_DIR}/ServiceDispatchingManagementDemo/includes/ )   
#EXECUTE_PROCESS(COMMAND   git log -1 --pretty=format:"%h" RESULT_VARIABLE result_var OUTPUT_VARIABLE AppCurrentVersion) 

message(CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR}")
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/libs/)

EXECUTE_PROCESS(COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/libs/libJSONCPP.a ${CMAKE_CURRENT_SOURCE_DIR}/../AsfServiceDispatchingManagement/includes/libs/libJSONCPP_SDM.a)
EXECUTE_PROCESS(COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/libs/libXPACK.a ${CMAKE_CURRENT_SOURCE_DIR}/../AsfServiceDispatchingManagement/includes/libs/libXPACK_SDM.a)
EXECUTE_PROCESS(COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/libs/libJSONCPP.a ${CMAKE_CURRENT_SOURCE_DIR}/../ExtensionLib/includes/libs/libJSONCPP_SDM.a)
EXECUTE_PROCESS(COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/libs/libXPACK.a ${CMAKE_CURRENT_SOURCE_DIR}/../ExtensionLib/includes/libs/libXPACK_SDM.a)
EXECUTE_PROCESS(COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/src/jsoncpp/*.h ${CMAKE_CURRENT_SOURCE_DIR}/../AsfServiceDispatchingManagement/includes/libs/jsoncpp/ )
EXECUTE_PROCESS(COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/src/xpack/*.h ${CMAKE_CURRENT_SOURCE_DIR}/../AsfServiceDispatchingManagement/includes/libs/xpack/ )


###########################################################################  



