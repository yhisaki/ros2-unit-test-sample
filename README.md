# Sample repository for ROS2 unit testing and reporting using GitHub Actions

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