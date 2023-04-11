#!/bin/bash 

git commit -m "
    [VersionNO.]:G3 master SDM
    [FeatureID]: PRS_SDM_00001
    [BugID.]:"$2"
    [Description]: "$1"
    [TestCase]:"$3"
    [Impact]:"$4"
    "
    
# git push origin HEAD:refs/for/master%submit
# OCZLXwFH/PzS+Rr2X67/EETHerbC50VayuGt/FtECw
#git push origin HEAD:refs/for/G3_9.0%submit
