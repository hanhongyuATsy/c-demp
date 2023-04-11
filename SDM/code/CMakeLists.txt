######################################################################################################################
#   COPYRIGHT                                                                                                        #
#   -----------------------------------------------------------------------------------------------------------------#
#             This software is copyright protected and proprietary to Neusoft Reach.                                 #
#             Neusoft Reach grants to you only those rights as set out in the license conditions.                    #
#             All other rights remain with Neusoft Reach.                                                            #
#   -----------------------------------------------------------------------------------------------------------------#
# ####################################################################################################################
cmake_minimum_required(VERSION 3.2)

if(MANIFESTDIR)
    message(STATUS "MANIFESTDIR ${MANIFESTDIR}")
else()
    set(MANIFESTDIR ${CMAKE_SOURCE_DIR}/../manifest)
    message(STATUS "setting MANIFESTDIR ${MANIFESTDIR}")
endif()

install(DIRECTORY
    ${MANIFESTDIR}/etc
    DESTINATION .
)
if (CMAKE_INCLUDE_PATH)
    include_directories("${CMAKE_INCLUDE_PATH};$ENV{INCLUDES}")
endif()
if (CMAKE_LIBRARY_PATH)
    link_directories("${CMAKE_LIBRARY_PATH};$ENV{LIBRARYS}")
endif()


set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")
set(Boost_USE_STATIC_LIBS "ON")

add_subdirectory(ThirdPartyLIb)
add_subdirectory(AsfServiceDispatchingManagement)
add_subdirectory(ExtensionLib)
#add_subdirectory(ServiceDispatchingManagementDemo)
#add_subdirectory(UnitTest_Lib)
#add_subdirectory(UnitTest_SDM)
