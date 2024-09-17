# stockfish에 대해 알아봄

- chess engine
- opensource
- 소스코드 및 바이너리 존재
- UCI 프로토콜을 사용

## gemini가 알려준 UCI 사용법

- Stockfish 엔진과 통신하는 프로토콜에 대한 자세한 설명
- Stockfish 엔진과 같은 체스 엔진은 일반적으로 **UCI (Universal Chess Interface)**라는 표준 프로토콜을 사용하여 다른 프로그램과 통신합니다. UCI는 체스 엔진과 GUI (Graphical User Interface) 프로그램 간의 상호 작용을 위한 텍스트 기반의 명령어 집합입니다.
- UCI 프로토콜의 주요 기능
  엔진 초기화: 엔진을 시작하고 설정을 변경합니다.
  포지션 설정: 체스판의 초기 상태를 설정하고, 수를 두어 포지션을 변경합니다.
  분석 요청: 엔진에게 특정 포지션을 분석하도록 요청하고, 결과를 얻습니다.
  엔진 설정 변경: 엔진의 검색 깊이, 시간 제한 등 다양한 설정을 변경합니다.

```txt
UCI 명령어 예시
isready: 엔진이 명령을 처리할 준비가 되었는지 확인합니다.
ucinewgame: 새로운 게임을 시작합니다.
position: 체스판의 초기 상태를 설정합니다.
go: 엔진에게 분석을 시작하도록 명령합니다.
stop: 엔진의 분석을 중단합니다.
ponderhit: 엔진이 생각 중인 동안 수가 두어졌음을 알립니다.
quit: 엔진을 종료합니다.
UCI 통신 예시
GUI: ucinewgame
Engine: readyok
GUI: position fen rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1
GUI: go depth 20
Engine: bestmove e2e4
위 예시에서 GUI는 새로운 게임을 시작하고, 초기 상태를 설정한 후, 엔진에게 깊이 20까지 분석하도록 요청합니다. 엔진은 가장 좋은 수로 e2e4를 제시합니다.
```

## UCI 프로토콜

- Chessprogramming wiki: UCI 프로토콜에 대한 상세한 설명과 예시를 제공합니다. (<https://www.chessprogramming.org/UCI>)
- UCI 프로토콜 스펙: Shredder Chess에서 제공하는 UCI 프로토콜 스펙입니다. (<https://backscattering.de/chess/uci/>)

### UCI 정보

- (<https://www.youtube.com/watch?v=vuvTFNreykk>)
