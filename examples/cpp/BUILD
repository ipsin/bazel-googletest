cc_library(name='adder',
           srcs=['adder.cc'],
           hdrs=['adder.h'],
)


cc_test(name='adder_test',
        srcs=['adder_test.cc'],
        deps=[':adder',
              '//third_party/gunit:gunit_main'],
)
