cmake_minimum_required(VERSION 3.6)
project(GenericDictionary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Dictionary.h KeyValue.h Container.h)
add_executable(GenericDictionary main.cpp ${SOURCE_FILES})

set(TEST_FILES
        Testing/TestingDictionary.cpp Testing/TestingDictionary.h Testing/TestingKeyValue.cpp Testing/TestingKeyValue.h Testing/testMain.cpp)
add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})