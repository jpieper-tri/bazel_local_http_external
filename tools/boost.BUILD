# -*- python -*-
# Copyright 2016 Toyota Research Institute.  All rights reserved.

cc_library(
    name = "boost",
    hdrs = glob(["include/boost/**"]),
    includes = ["include/boost"],
    linkopts = [
        "-lboost_system",
        "-lboost_program_options",
        "-lboost_serialization",
        "-lboost_filesystem",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "boost_python",
    hdrs = glob(["include/boost/**",
                 "include/python2.7/**"]),
    includes = ["include/boost", "include/python2.7"],
    linkopts = [
        "-lboost_python",
        "-lpython2.7",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "boost_test",
    defines = ["BOOST_TEST_DYN_LINK"],
    linkopts = [
        "-lboost_unit_test_framework",
    ],
    visibility = ["//visibility:public"],
)
