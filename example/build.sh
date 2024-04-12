

BUILD_DIR=$(realpath ./build)

mkdir -p $BUILD_DIR

pushd $BUILD_DIR

cmake \
    -DCMAKE_INSTALL_PREFIX=../install \
    -DCMAKE_PREFIX_PATH=../install \
    ..

cmake --build . --config=Debug

popd #BUILD_DIR
