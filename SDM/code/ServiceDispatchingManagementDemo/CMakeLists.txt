######################################################################################################################
#   COPYRIGHT                                                                                                        #
#   -----------------------------------------------------------------------------------------------------------------#
#             This software is copyright protected and proprietary to Neusoft Reach.                                 #
#             Neusoft Reach grants to you only those rights as set out in the license conditions.                    #
#             All other rights remain with Neusoft Reach.                                                            #
#   -----------------------------------------------------------------------------------------------------------------#
# ####################################################################################################################
cmake_minimum_required(VERSION 3.2)
set(CMAKE_VERBOSE_MAKEFILE on)
include(GNUInstallDirs)

# Common Library--------------------------------------------------------------
find_package(ara-exec REQUIRED)
find_package(AdaptivePlatform REQUIRED)
find_package(ara-log REQUIRED)
find_package(Threads REQUIRED)

###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of Common Library >>        DO NOT CHANGE THIS COMMENT!
###################################################################################################################################
	
###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of Common Library >>          DO NOT CHANGE THIS COMMENT!
###################################################################################################################################

# Application Related --------------------------------------------------
add_definitions(-DHAS_VSOMEIP_BINDING)
add_definitions(-DWITH_ARA_CLIENTID)
add_definitions(-DWITH_ARA_IAM)
find_package(ara-com REQUIRED) 
find_package(e2e REQUIRED) 
find_package(e2exf REQUIRED)
find_package(foonathan_memory REQUIRED)
#find_package(sdm_wrapper REQUIRED)
#find_package(log_wrapper REQUIRED)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -g3")

option(ASAN_CODE_CHECK_OPTION "asan check" OFF)
option(TSAN_CODE_CHECK_OPTION  "tsan check" OFF)
option(UBSAN_CODE_CHECK_OPTION  "ubsan check" OFF)

message(status "CODE_CHECK_TYPE:asan  $ASAN_CODE_CHECK_OPTION")
if(ASAN_CODE_CHECK_OPTION)
    message(status code_out: "CODE_CHECK_TYPE:asan")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize-recover=address -fno-omit-frame-pointer")
endif()
if(TSAN_CODE_CHECK_OPTION)
    message(status "CODE_CHECK_TYPE:tsan")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=pthread ")
endif()
if(UBSAN_CODE_CHECK_OPTION)
    message(status "CODE_CHECK_TYPE:ubsan")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined ")
endif()



set(ARA_LIBRARIES sdm_wrapper log_wrapper ara::log  ara_vsomeipbinding ara_s2sbinding ara_com e2exf e2e foonathan_memory ara_crypto_api nap_crypto_c_api nap_cs_ipc_proto_cli nap_cs_ipc_com_cli nap_common crypto ara_iam ara_iam_ipc ara_iam_grant PocoFoundation ara_exec)
#set(WRAPPER_LIBRARIES sdm_wrapper)


if( QNX OR QNXNTO )
  LIST(APPEND ARA_LIBRARIES socket)
endif()





####################################################################################
#  << start 3RD add-on area of linkLib >>     	 	 DO NOT CHANGE THIS COMMENT!
####################################################################################

####################################################################################
#  << end 3RD add-on area  of linkLib >>       	 	 DO NOT CHANGE THIS COMMENT!
####################################################################################


set(APP_NAME ServiceDispatchingManagementDemo)
set(MAIN_EXECUTABLE ServiceDispatchingManagementDemo)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Set Env----------------------------------------------------------------------
set(GEN_DEST ${CMAKE_CURRENT_SOURCE_DIR}/gen/)
file(GLOB_RECURSE aragen_srcs ${GEN_DEST}/*.cpp)
file(GLOB_RECURSE aragen_hdrs ${GEN_DEST}/*.h)
set(GENDATA_DEST ${CMAKE_CURRENT_SOURCE_DIR}/GenData)
file(GLOB_RECURSE aragendata_srcs ${GENDATA_DEST}/*.cpp)
file(GLOB_RECURSE aragendata_hdrs ${GENDATA_DEST}/*.h)
file(GLOB_RECURSE userdata_srcs ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE userdata_c_srcs ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
file(GLOB_RECURSE userdata_hdrs ${CMAKE_CURRENT_SOURCE_DIR}/includes/*.h)
file(GLOB_RECURSE userdata_hpp_hdrs ${CMAKE_CURRENT_SOURCE_DIR}/includes/*.hpp)
include_directories(${GEN_DEST}/${APP_NAME}/includes)
include_directories(GenData)
include_directories(../__genData)
include_directories(includes)

message(STATUS "GEN_DEST_PATH: ${GEN_DEST}")
message(STATUS "aragen_srcs: ${aragen_srcs}")

if(MANIFESTDIR)
    message(STATUS "MANIFESTDIR ${MANIFESTDIR}")
else()
    set(MANIFESTDIR ${CMAKE_CURRENT_SOURCE_DIR}/../../manifest)
    message(STATUS "setting MANIFESTDIR ${MANIFESTDIR}")
endif()


set(${MAIN_EXECUTABLE}_SRC)
list(APPEND ${MAIN_EXECUTABLE}_SRC ServiceDispatchingManagementDemo.cpp)

# Application
set(ALL_COMPILE_SRC
    ${${MAIN_EXECUTABLE}_SRC}
    ${aragen_srcs}
    ${aragen_hdrs}
    ${aragendata_srcs}
    ${aragendata_hdrs}
    ${userdata_srcs}
    ${userdata_c_srcs}
    ${userdata_hdrs}
    ${userdata_hpp_hdrs}
    ${ALL_COMPILE_SRC}
)

# Build-------------------------------------------------------------------------
#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes/libs/)
set(CMAKE_CXX_STANDARD 14) 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -pthread -Wall -D_GLIBCXX_USE_NANOSLEEP -DLINUX ")

###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of Build Parameters >>        DO NOT CHANGE THIS COMMENT!
###################################################################################################################################
	
###################################################################################################################################
# [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of Build Parameters >>          DO NOT CHANGE THIS COMMENT!
###################################################################################################################################
EXECUTE_PROCESS(COMMAND   git log -1 --pretty=format:"%h" RESULT_VARIABLE result_var OUTPUT_VARIABLE AppCurrentVersion)
message(STATUS output: '${AppCurrentVersion}') 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DAPPCURRENTVERSION='${AppCurrentVersion}'")


add_executable(ServiceDispatchingManagementDemo ${ALL_COMPILE_SRC})
target_link_libraries(ServiceDispatchingManagementDemo ${CMAKE_THREAD_LIBS_INIT} ${ARA_LIBRARIES} ${ARAEXEC_LIBRARIES} ${ADAPTIVEPLATFORM_LIBRARIES})

install(TARGETS ServiceDispatchingManagementDemo RUNTIME DESTINATION opt/ServiceDispatchingManagementDemo/bin)
set(NEUSAR_SDK_PATH "$ENV{SDKTARGETSYSROOT}")
if (NEUSAR_SDK_PATH)
	install(FILES ${NEUSAR_SDK_PATH}/usr/NeuSAR_ARA_Version PERMISSIONS OWNER_READ GROUP_READ WORLD_READ DESTINATION opt/ServiceDispatchingManagementDemo/etc)
endif()
install(DIRECTORY
    ${MANIFESTDIR}/ServiceDispatchingManagementDemo
    DESTINATION opt
    )


