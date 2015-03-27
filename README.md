A bare-bones repo containing a [bazel.io](https://bazel.io) repository and googletest.

The current build of bazel does not appear to include gunit.  The tests are
simply executables that exit with non-zero status.

This repo brings in gunit (googletest) as a third-party dependency.  The
actual file dependencies are not specified properly yet.

To see this working:

1. [Install bazel](http://bazel.io/docs/install.html)
1. Copy the "tools" directory from "bazel/base_workspace/tools"
1. bazel test //examples/cpp:adder_test
