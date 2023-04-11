file(REMOVE_RECURSE
  "../../ThirdPartyLIb/libs/libXPACK.a"
  "../../ThirdPartyLIb/libs/libXPACK.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/XPACK.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
