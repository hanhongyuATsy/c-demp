#!/bin/bash

SDK_PATH="/home/hhy/Work/sdk/x86/toolchain/sysroots/core2-64-poky-linux/"
UTEST_BIN=Gtest_ExtensionLib
CurDir=`pwd`	
TestName=`basename ${CurDir}`
RunDir="${CurDir}/../build/${TestName}/"

RunTest()
{

	echo ${RunDir}	
	cp elf.py ${RunDir}  
	cd ${RunDir}
	mkdir Result
	find ./ -name *.gcno |xargs -i cp {} ./Result/


	chmod +x elf.py
	
	echo "######################[begin change link]########################"

	./elf.py ${UTEST_BIN} ${SDK_PATH}/lib/libc.so.6 ${SDK_PATH}/lib/ld-linux-x86-64.so.2 ${UTEST_BIN}

	export LD_LIBRARY_PATH="${SDK_PATH}/usr/lib/"

	#ldd ${UTEST_BIN}  

	echo "######################[Set Env PATH] ############################"

	export GCOV_PREFIX=${RunDir}     
	export GCOV_PREFIX_STRIP=6

	echo "######################[ Run ] ############################"
	./${UTEST_BIN}
	#ls 

	find ./ -name *.gcda |xargs -i cp {} ./Result/ 

	# del 生成代码

}

CreateReport()
{
	cd ${RunDir}

	echo "######################[ Create Report] ############################"
	lcov --rc lcov_branch_coverage=1 -d  . -t SDM_GTest -o  ./test.info -b  . -c

	echo "######################[ ] ############################"
	lcov -r ./test.info "/usr/include/*"  "/usr/lib/*"  -o  ./test.info
	lcov -r ./test.info "./ara/*"  "/c++/*" "/boost/*"  -o  ./test.info

	echo "######################[ html ] ############################"
	genhtml --rc lcov_branch_coverage=1  ./test.info --output-directory "$CurDir/cov_report/" --title sdm

}

main()
{
	RunTest
	CreateReport
}

main

#find ../../build/ -name *.gcno |xargs -i cp {} ./sdm/
#
#
#find ./SDM/ -name *.gcda |xargs -i cp {} ./sdm/
##scp root@10.1.0.79:/containers/gtest/* sdm/
#
#./elf.py  ExtensionLib_GTest /home/hhy/Work/sdk/toolchain/sysroots/x86_64-pokysdk-linux/usr/lib    /home/hhy/Work/sdk/toolchain/sysroots/x86_64-pokysdk-linux/lib/ld-linux-x86-64.so.2 ExtensionLib_GTest
#
#./elf.py  /home/hhy/Work/sdk/toolchain/sysroots/cortexa53-crypto-poky-linux/usr/lib/libc.so      
#/home/hhy/Work/sdk/toolchain/sysroots/cortexa53-crypto-poky-linux/lib/libc.so.6
#/home/hhy/Work/sdk/x86/toolchain/sysroots/core2-64-poky-linux/lib/libc.so.6
#/home/hhy/Work/sdk/x86/toolchain/sysroots/core2-64-poky-linux/lib/ld-linux-x86-64.so.2
#
#
#
#lcov --rc lcov_branch_coverage=1 -d  . -t SDM_GTest -o  ./test.info -b  . -c
#./elf.py SDM_GTest /home/hhy/Work/sdk/x86/toolchain/sysroots/core2-64-poky-linux/lib/libc.so.6 /home/hhy/Work/sdk/x86/toolchain/sysroots/core2-64-poky-linux/lib/ld-linux-x86-64.so.2 SDM_GTest
#
#
#export LD_LIBRARY_PATH=/home/hhy/Work/sdk/x86/toolchain/sysroots/core2-64-poky-linux/usr/lib/
#
#export GCOV_PREFIX="/home/hhy/Work/git/SDM/code/UnitTest/"      
#export GCOV_PREFIX_STRIP=4
#
#
#genhtml --rc lcov_branch_coverage=1 --no-source ./test.info --output-directory ../report --title sdm
#lcov --rc lcov_branch_coverage=1 -d  . -t SDM_GTest -o  ./test.info -b  . -c
#lcov -r GTEST.info "/usr/include/*"  "/usr/lib/*"  -o newgtest.info
#lcov --rc lcov_branch_coverage=1 --extract  ./test.info '*/crypto/*' -o  ./test.info
#
#
##lcov -d . -t demo -o GTEST.info -b . -c lcov_branch_coverage=1 
##genhtml -o result GTEST.info
