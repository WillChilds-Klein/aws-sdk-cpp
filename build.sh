#!/bin/bash

set -ex

BUILD_DIR=$(realpath ./build)
INSTALL_DIR=$(realpath ./install)

mkdir -p $BUILD_DIR

pushd $BUILD_DIR

git submodule update --init --recursive

cmake \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_PREFIX_PATH=$INSTALL_DIR \
    -DCMAKE_INSTALL_PREFIX=$INSTALL_DIR \
    -DBUILD_ONLY="sts;s3-crt" \
    -DUSE_S2N=ON \
    -DFIPS=OFF \
    -DS2N_NO_PQ=OFF \
    -DS2N_FIPS=OFF \
    -DS2N_INTERN_LIBCRYPTO=OFF \
    -DFIPS=OFF \
    -DBUILD_DEPS=ON \
    -DENABLE_TESTING=OFF \
    -DUSE_CRT_HTTP_CLIENT=ON \
    -DUSE_OPENSSL=OFF \
    ..

cmake --install ./crt/aws-crt-cpp/crt/aws-lc --config=Debug

cmake --build . --config=Debug

cmake --install . --config=Debug


popd #BUILD_DIR
