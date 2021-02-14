#include <iostream>
#include <fcntl.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/text_format.h>
#include <fstream>  // NOLINT(readability/streams)
#include <unistd.h>
#include "laryer.pb.h"

using google::protobuf::io::FileInputStream;
using google::protobuf::io::FileOutputStream;
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::ZeroCopyOutputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::Message;

int main() {

    laryer::LayerTest proto;
    int fd = open("/home/zhbxlm/Desktop/workspace/proto_test/laryer.prototxt", O_RDONLY);
    FileInputStream* input = new FileInputStream(fd);
    bool success = google::protobuf::TextFormat::Parse(input, &proto);
    std::cout << proto.name() << std::endl;
    std::cout << proto.DebugString() << std::endl;
    for (auto i = 0; i != proto.data_size(); i++) {
        // std::cout << proto.data()[i] << std::endl;
        std::cout << proto.data(i) << std::endl;
    }
    delete input;
    close(fd);
    return 0;
}