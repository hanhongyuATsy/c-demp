#!/bin/bash
echo "#############del##########"  
rm code/__genData/ -rf
rm code/AsfServiceDispatchingManagement/gen/ -rf
rm code/AsfServiceDispatchingManagement/GenData/ -rf
rm code/ServiceDispatchingManagementDemo/gen/ -rf
rm code/ServiceDispatchingManagementDemo/GenData/ -rf

rm ./manifest/* -rf

echo "#############cp##########"  

cp ../output/code/__genData/ ./code/ -r
cp ../output/code/AsfServiceDispatchingManagement/gen/ code/AsfServiceDispatchingManagement/ -r
cp ../output/code/AsfServiceDispatchingManagement/GenData/ code/AsfServiceDispatchingManagement/ -r
cp ../output/code/ServiceDispatchingManagementDemo/gen/ code/ServiceDispatchingManagementDemo/ -r
cp ../output/code/ServiceDispatchingManagementDemo/GenData/ code/ServiceDispatchingManagementDemo/ -r

cp ../output/manifest/ServiceDispatchingManagementDemo/ ./manifest/ -r
cp ../output/manifest/AsfServiceDispatchingManagement/ ./manifest/ -r
cp ../output/manifest/etc/ ./manifest/ -r

echo "############end###########"  








