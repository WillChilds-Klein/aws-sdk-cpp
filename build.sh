

BUILD_DIR=$(realpath ./build)
INSTALL_DIR=$(realpath ./install)

mkdir -p $BUILD_DIR

pushd $BUILD_DIR

cmake \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_PREFIX_PATH=$INSTALL_DIR \
    -DCMAKE_INSTALL_PREFIX=$INSTALL_DIR \
    -DBUILD_ONLY="sts" \
    -DBUILD_DEPS=ON \
    -DUSE_CRT_HTTP_CLIENT=ON \
    -DUSE_OPENSSL=OFF \
    ..

cmake --build . --config=Debug

cmake --install . --config=Debug


popd #BUILD_DIR
