cmake_minimum_required(VERSION 3.2)

set(UTEST_NAME ExtensionLib)
set(UTEST_NAME_BIN Gtest_ExtensionLib)

find_package(ara-exec REQUIRED)
find_package(AdaptivePlatform REQUIRED)
find_package(ara-log REQUIRED)
find_package(Threads REQUIRED)
find_package(ara-phm REQUIRED)

add_definitions(-DHAS_VSOMEIP_BINDING)
add_definitions(-DWITH_ARA_CLIENTID)
add_definitions(-DWITH_ARA_IAM)


find_package(ara-com REQUIRED) 
find_package(foonathan_memory REQUIRED)
find_package(e2e REQUIRED) 
find_package(e2exf REQUIRED)
find_package(ara-log REQUIRED)


set(TEST_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../${UTEST_NAME}/src)
set(TEST_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../${UTEST_NAME}/includes)


set(GEN_DEST ${TEST_SRC_DIR}/../gen/)
file(GLOB_RECURSE aragen_srcs ${GEN_DEST}/*.cpp)
file(GLOB_RECURSE aragen_hdrs ${GEN_DEST}/*.h)
set(GENDATA_DEST ${TEST_SRC_DIR}/../GenData)
file(GLOB_RECURSE aragendata_srcs ${GENDATA_DEST}/*.cpp)
file(GLOB_RECURSE aragendata_hdrs ${GENDATA_DEST}/*.h)

file(GLOB_RECURSE userdata_srcs ${TEST_SRC_DIR}/*.cpp)
file(GLOB_RECURSE userdata_c_srcs  ${TEST_SRC_DIR}/*.c)
file(GLOB_RECURSE userdata_hdrs ${TEST_INC_DIR}/*.h)
file(GLOB_RECURSE userdata_hpp_hdrs ${TEST_INC_DIR}/*.hpp)

include_directories(${TEST_INC_DIR})
include_directories(${GEN_DEST}/${UTEST_NAME}/includes)
include_directories(${GENDATA_DEST})
include_directories(../__genData)


set(XP_DEST ${TEST_INC_DIR}/libs/xpack)
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
#add_library(XPACK STATIC ${LIBS_XPACK})
#set_target_properties(XPACK PROPERTIES LINKER_LANGUAGE CXX)

include_directories(${XP_DEST}/thirdparty/rapidjson/)
include_directories(${XP_DEST}/thirdparty/)
include_directories(${XP_DEST}/libs/xpack/)



set(SDM_GTest_SRC)
list(APPEND SDM_GTest_SRC src/ExtensionLibGTest.cpp)

set(GTest_SDM_COMPILE_SRC
    ${GTest_SRC}
    ${userdata_srcs}
    ${userdata_c_srcs}
    ${userdata_hdrs}
    ${userdata_hpp_hdrs}
    ${aragen_srcs}
    ${aragen_hdrs}
    ${aragendata_srcs}
    ${aragendata_hdrs}
)

set(ARA_LIBRARIES ara::log log_wrapper ara_vsomeipbinding ${ara_phm_LIBS} ara_s2sbinding ara_com e2exf e2e foonathan_memory ara_crypto_api nap_crypto_c_api nap_cs_ipc_proto_cli nap_cs_ipc_com_cli nap_common crypto ara_iam ara_iam_ipc ara_iam_grant PocoFoundation ara_exec)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage -pthread -Wall -D_GLIBCXX_USE_NANOSLEEP -DLINUX -fno-access-control")
set (GTEST_LIBRARIES gtest gmock gcov )

aux_source_directory(${TEST_INC_DIR}/libs/jsoncpp LIBS_JSONCPP)

add_executable(${UTEST_NAME_BIN}  ${SDM_GTest_SRC} ${GTest_SDM_COMPILE_SRC} ${LIBS_JSONCPP} ${LIBS_XPACK})

target_link_libraries(${UTEST_NAME_BIN} ${CMAKE_THREAD_LIBS_INIT} ${ARA_LIBRARIES} ${ARAEXEC_LIBRARIES} ${ADAPTIVEPLATFORM_LIBRARIES}  ${GTEST_LIBRARIES} )
#install(TARGETS SDM_GTest RUNTIME DESTINATION opt/GTest/bin)



