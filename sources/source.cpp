#include <Client.hpp>

int main(int argc, char* argv[]) {
  Client client(argc, argv);
  return client.Run();
}
//./cmake-build-debug/tests  http://localhost:8080/v1/api/suggest
//{\"input\":\"hel\"}
