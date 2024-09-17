#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Stockfish 엔진을 표준 출력을 파이프로 리디렉션하여 실행
  // system("/mnt/e/Works/stockfish/stockfish-windows-x86-64-avx2.exe");
  FILE *pipe = popen("./stockfish/stockfish-ubuntu-x86-64-avx2", "r");
  if (!pipe) {
    perror("popen");
    return 1;
  }

  // 엔진에 명령 전송 및 결과 수신
  string command;
  char buffer[1024];

  while (true) {
    cout << "Enter command: ";
    getline(cin, command);

    // 명령을 파이프에 쓰기
    fprintf(pipe, "%s\n", command.c_str());
    fflush(pipe);

    // 엔진의 응답 읽기
    while (fgets(buffer, sizeof(buffer), pipe)) {
      cout << buffer;
    }

    // "quit" 명령 입력 시 종료
    if (command == "quit") {
      break;
    }
  }

  pclose(pipe);
  return 0;
}
