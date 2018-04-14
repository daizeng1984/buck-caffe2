#include<iostream>
#include<string>
#include "caffe2/core/init.h"
#include "caffe2/core/operator.h"
#include "caffe2/proto/caffe2.pb.h"
#include "caffe2/utils/proto_utils.h"
#include "caffe2/core/logging.h"

#include "caffe2/core/workspace.h"



int main(int argc, char **argv)
{
    caffe2::NetDef trainingInitializationNetworkDefinition;

    if(!ReadProtoFromFile("./test.prototxt", &trainingInitializationNetworkDefinition)) {
        std::cout << "test!" << std::endl;
    }

    std::cout << "end of test!" << std::endl;
}

