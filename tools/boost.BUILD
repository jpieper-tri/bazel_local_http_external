# -*- python -*-
# Copyright 2016 Toyota Research Institute.  All rights reserved.

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "boost_headers",
    hdrs = glob(["boost_1_61_0/boost/**"]),
    includes = ["boost_1_61_0"],
)

cc_library(
    name = "boost_system",
    deps = [":boost_headers"],
    srcs = ["boost_1_61_0/libs/system/src/" + x for x in [
        "error_code.cpp",
        ]],
)

cc_library(
    name = "boost_program_options",
    deps = [":boost_headers"],
    srcs = ["boost_1_61_0/libs/program_options/src/" + x for x in [
        "cmdline.cpp",
        "config_file.cpp",
        "options_description.cpp",
        "parsers.cpp",
        "variables_map.cpp",
        "value_semantic.cpp",
        "positional_options.cpp",
        "utf8_codecvt_facet.cpp",
        "convert.cpp",
        "winmain.cpp",
        "split.cpp",
        ]],
)

cc_library(
    name = "boost_filesystem",
    deps = [":boost_headers"],
    srcs = ["boost_1_61_0/libs/filesystem/src/" + x for x in [
        "codecvt_error_category.cpp",
        "operations.cpp",
        "path.cpp",
        "path_traits.cpp",
        "portability.cpp",
        "unique_path.cpp",
        "utf8_codecvt_facet.cpp",
        "windows_file_codecvt.cpp",
        ]],
)

cc_library(
    name = "boost",
    deps = [
        ":boost_program_options",
        ":boost_system",
        ":boost_filesystem",
        ],
)

cc_library(
    name = "boost_test",
    defines = ["BOOST_TEST_DYN_LINK"],
    deps = [":boost_headers"],
    srcs = ["boost_1_61_0/libs/test/src/" + x for x in [
        "compiler_log_formatter.cpp",
        "debug.cpp",
        "decorator.cpp",
        "execution_monitor.cpp",
        "framework.cpp",
        "plain_report_formatter.cpp",
        "progress_monitor.cpp",
        "results_collector.cpp",
        "results_reporter.cpp",
        "test_tools.cpp",
        "test_tree.cpp",
        "unit_test_log.cpp",
        "unit_test_main.cpp",
        "unit_test_monitor.cpp",
        "unit_test_parameters.cpp",
        "xml_log_formatter.cpp",
        "xml_report_formatter.cpp",
    ]],
)

cc_library(
    name = "boost_python",
    deps = [":boost_headers",
            "@python//:python"],
    srcs = ["boost_1_61_0/libs/python/src/" + x for x in [
        "numeric.cpp",
        "list.cpp",
        "long.cpp",
        "dict.cpp",
        "tuple.cpp",
        "str.cpp",
        "slice.cpp",
        "converter/from_python.cpp",
        "converter/registry.cpp",
        "converter/type_id.cpp",
        "object/enum.cpp",
        "object/class.cpp",
        "object/function.cpp",
        "object/inheritance.cpp",
        "object/life_support.cpp",
        "object/pickle_support.cpp",
        "errors.cpp",
        "module.cpp",
        "converter/builtin_converters.cpp",
        "converter/arg_to_python_base.cpp",
        "object/iterator.cpp",
        "object/stl_iterator.cpp",
        "object_protocol.cpp",
        "object_operators.cpp",
        "wrapper.cpp",
        "import.cpp",
        "exec.cpp",
        "object/function_doc_signature.cpp",
        ]],
)

cc_library(
    name = "boost_serialization",
    deps = [":boost_headers"],
    hdrs = ["boost_1_61_0/libs/serialization/src/" + x for x in [
        "basic_xml_grammar.ipp",
        ]],
    srcs = ["boost_1_61_0/libs/serialization/src/" + x for x in [
        "basic_archive.cpp",
        "basic_iarchive.cpp",
        "basic_iserializer.cpp",
        "basic_oarchive.cpp",
        "basic_oserializer.cpp",
        "basic_pointer_iserializer.cpp",
        "basic_pointer_oserializer.cpp",
        "basic_serializer_map.cpp",
        "basic_text_iprimitive.cpp",
        "basic_text_oprimitive.cpp",
        "basic_xml_archive.cpp",
        "binary_iarchive.cpp",
        "binary_oarchive.cpp",
        "extended_type_info.cpp",
        "extended_type_info_typeid.cpp",
        "extended_type_info_no_rtti.cpp",
        "polymorphic_iarchive.cpp",
        "polymorphic_oarchive.cpp",
        "stl_port.cpp",
        "text_iarchive.cpp",
        "text_oarchive.cpp",
        "void_cast.cpp",
        "archive_exception.cpp",
        "xml_grammar.cpp",
        "xml_iarchive.cpp",
        "xml_oarchive.cpp",
        "xml_archive_exception.cpp",
        "codecvt_null.cpp",
        "utf8_codecvt_facet.cpp",
        "singleton.cpp",
        ]],
)
