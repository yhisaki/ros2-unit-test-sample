# Sample repository for ROS2 unit testing

DummyPR

[![codecov](https://codecov.io/gh/yhisaki/ros2-unit-test-sample/graph/badge.svg?token=8I9YGKOEVV)](https://codecov.io/gh/yhisaki/ros2-unit-test-sample)

[LCOV](https://yhisaki.github.io/ros2-unit-test-sample/index.html)

## Build

```sh
colcon build --symlink-install --cmake-args -DBUILD_TESTING=true -DCMAKE_CXX_FLAGS='-fprofile-arcs -ftest-coverage' -DCMAKE_C_FLAGS='-fprofile-arcs -ftest-coverage'
```

## Test

```sh
colcon lcov-result --initial
```

```sh
colcon test
```

```sh
colcon lcov-result
```
