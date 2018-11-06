FROM ubuntu:16.04

RUN apt-get update && apt-get install -y cmake clang libgtest-dev
WORKDIR /usr/src/gtest
RUN cmake CMakeLists.txt
RUN make
RUN cp *.a /usr/lib

COPY . /sources
RUN mkdir -p /sources/build
WORKDIR /sources/build
RUN cmake ..
RUN make test_add
