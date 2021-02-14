test: main.cpp laryer.pb.cc
	g++ -std=c++11 -g -I/usr/include main.cpp laryer.pb.cc -lprotobuf -o test
