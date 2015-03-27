package(
    default_visibility = [
        "//:__subpackages__",
    ],
)

licenses(["notice"])  # Google 

cc_library(
  name = 'gunit',
  srcs = [ 'src/gtest-all.cc', ],
  hdrs = [ 'include/gtest/internal/gtest-internal.h' ],
  includes = [ 'include', '.' ],
)

cc_library(
  name = 'gunit_main',
  srcs = [ 'src/gtest-all.cc', 'src/gtest_main.cc' ],
  hdrs = [ 'include/gtest/internal/gtest-internal.h' ],
  includes = [ 'include', '.' ],
)


