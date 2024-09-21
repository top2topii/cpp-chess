# This Project

- cpp를 사용한다
- 체스 게임을 만든다
- 외부 체스 엔진 사용을 고려한다
- 클라이언트 서버 구조로 만든다

## 클라이언트 서버 구조에 대한 아이디어

- 체스 게임 엔진을 서버가 담당한다
- 여러명의 클라이언트를 지원한다
- 유저간 또는 유저와 체스엔진간 게임을 지원한다

## 개발 환경

- 클라이언트는 윈도우10이상의 환경 지원
- 렌더링 엔진은 SDL2를 고려-> Unreal Engine 사용으로 변경

## 개발 문서 정리 방법

- notion을 연동하여 문서화

### 참조

- [SDL2](https://www.libsdl.org/)
- [SDL2 Tutorial](https://lazyfoo.net/tutorials/SDL/index.php)
- [sample code for chess SDL2](https://github.com/Candyris/Chess_SDL2-linux)
- [Chess SDL2 C++](https://www.youtube.com/watch?v=39hWcYu-0vY)

### Stockfish Engine download

- Releases: (<https://github.com/official-stockfish/Stockfish/releases>)
- Windows: (<https://github.com/official-stockfish/Stockfish/releases/download/sf_17/stockfish-windows-x86-64-avx2.zip>)
- Linux: (<https://github.com/official-stockfish/Stockfish/releases/stockfish-ubuntu-x86-64-avx2.tar>)

### GUI

- (<https://github.com/cucumberbolts/Chess>)
