# Coding Test

C++로 작성한 코딩 테스트 풀이와 알고리즘 연습 기록입니다.

## 디렉토리 구조

```text
coding_test/
├── README.md
├── .gitignore
├── algorithm/
│   └── graph/
│       └── dfs_bfs.cpp
└── programmers/
    ├── lv1/
    │   ├── string/
    │   ├── math/
    │   ├── brute_force/
    │   └── stack_queue/
    ├── lv2/
    │   ├── bfs_dfs/
    │   ├── stack_queue/
    │   └── greedy/
    └── lv3/
        └── graph/
```

## 정리 규칙

- 문제 풀이는 `플랫폼/난이도/알고리즘_유형/문제_이름.cpp`에 저장합니다.
- 파일명은 문제 이름을 사용하고, 공백은 밑줄(`_`)로 바꿉니다.
- 같은 문제의 다른 풀이는 `_bfs`, `_floyd_warshall`처럼 풀이 방식을 붙입니다.
- 알고리즘 개념과 연습 코드는 `algorithm/유형/`에 저장합니다.
- 프로그래머스 고득점 Kit의 공식 알고리즘 분류를 우선합니다. 같은 문제의 다른 풀이도 같은 유형 폴더에 둡니다.
- 공식 알고리즘 분류가 없는 연습문제는 문제 설명을 바탕으로 분류합니다. 문제를 확인할 수 없으면 `unclassified/`에 둡니다.
- 알고리즘 유형과 풀이 상태는 아래 표에서 관리합니다.
- 편집기 복구 파일과 빌드 결과는 Git에 올리지 않습니다.

## 풀이 상태

`검증 필요`는 제출 통과 여부를 확인하지 않은 코드, `작성 중`은 미완성 코드,
`수정 필요`는 코드에서 확인한 수정 사항이 있는 파일입니다.
프로그래머스에서 통과를 확인한 뒤 `풀이 완료`로 변경합니다.

### 프로그래머스 Level 1

| 문제 | 코드 | 유형 | 상태 | 메모 |
| --- | --- | --- | --- | --- |
| 가운데 글자 가져오기 | [코드](programmers/lv1/string/가운데_글자_가져오기.cpp) | 문자열 | 검증 필요 | |
| 두 정수 사이의 합 | [코드](programmers/lv1/math/두_정수_사이의_합.cpp) | 수학 | 수정 필요 | 한 파일에 동일한 `solution` 함수가 두 개 있어 풀이 분리 필요 |
| 모의고사 | [코드](programmers/lv1/brute_force/모의고사.cpp) | 완전탐색 | 검증 필요 | |
| 최대공약수와 최소공배수 | [코드](programmers/lv1/math/최대공약수와_최소공배수.cpp) | 수학 | 수정 필요 | `answer` 중복 선언 제거 필요, `gcd`·`lcm`은 C++17 사용 |
| 노란불 신호등 | [코드](programmers/lv1/brute_force/노란불_신호등.cpp) | 완전탐색·수학 | 작성 중 | `te`만 작성되어 있어 풀이 구현 필요 |
| 같은 숫자는 싫어 | [코드](programmers/lv1/stack_queue/같은_숫자는_싫어.cpp) | 스택/큐 | 검증 필요 | |

### 프로그래머스 Level 2

| 문제 | 코드 | 유형 | 상태 | 메모 |
| --- | --- | --- | --- | --- |
| 게임 맵 최단거리 | [코드](programmers/lv2/bfs_dfs/게임_맵_최단거리.cpp) | DFS/BFS | 검증 필요 | |
| 과제 진행하기 | [코드](programmers/lv2/stack_queue/과제_진행하기.cpp) | 스택·시뮬레이션 | 작성 중 | 시간 변환 함수와 풀이 구현 필요 |
| 광물 캐기 | [코드](programmers/lv2/greedy/광물_캐기.cpp) | 그리디·정렬 | 검증 필요 | |
| 기능개발 | [코드](programmers/lv2/stack_queue/기능개발.cpp) | 스택/큐 | 수정 필요 | 동일한 solution 함수가 두 개 있어 오답 예제와 풀이 분리 필요 |
| 다리를 지나는 트럭 | [코드](programmers/lv2/stack_queue/다리를_지나는_트럭.cpp) | 스택/큐 | 검증 필요 | |
| 올바른 괄호 | [코드](programmers/lv2/stack_queue/올바른_괄호.cpp) | 스택/큐 | 작성 중 | 괄호 처리와 반환 구현 필요, 함수명 soltuion 확인 필요 |
| 주식가격 | [코드](programmers/lv2/stack_queue/주식가격.cpp) | 스택/큐 | 작성 중 | 빈 파일, 풀이 구현 필요 |
| 프로세스 | [코드](programmers/lv2/stack_queue/프로세스.cpp) | 스택/큐 | 검증 필요 | |

### 프로그래머스 Level 3

| 문제 | 코드 | 유형 | 상태 | 메모 |
| --- | --- | --- | --- | --- |
| 가장 먼 노드 | [코드](programmers/lv3/graph/가장_먼_노드.cpp) | 그래프 (BFS) | 검증 필요 | |
| 순위 | [BFS](programmers/lv3/graph/순위_bfs.cpp) | 그래프 (BFS) | 작성 중 | 탐색 구현과 `solution` 함수 작성 필요 |
| 순위 | [Floyd–Warshall](programmers/lv3/graph/순위_floyd_warshall.cpp) | 그래프 (플로이드 워셜) | 검증 필요 | |

### 알고리즘 연습

| 주제 | 코드 | 상태 | 메모 |
| --- | --- | --- | --- |
| DFS·BFS | [코드](algorithm/graph/dfs_bfs.cpp) | 수정 필요 | DFS의 `if (!visited[y]);`에서 세미콜론 제거 및 방문 조건 처리 필요 |

## 분류 근거

- [스택/큐](https://school.programmers.co.kr/learn/courses/30/parts/12081): 같은 숫자는 싫어, 올바른 괄호, 기능개발, 프로세스, 다리를 지나는 트럭, 주식가격
- [DFS/BFS](https://school.programmers.co.kr/learn/courses/30/parts/12421): 게임 맵 최단거리
- [완전탐색](https://school.programmers.co.kr/learn/courses/30/parts/12230): 모의고사
- [그래프](https://school.programmers.co.kr/learn/courses/30/parts/14393): 가장 먼 노드, 순위
- 아래 문제는 공식 알고리즘 태그가 아닌 문제 설명에 따른 분류입니다.
  - [과제 진행하기](https://school.programmers.co.kr/learn/courses/30/lessons/176962): 중단한 과제를 최근 순으로 재개하므로 스택·시뮬레이션
  - [광물 캐기](https://school.programmers.co.kr/learn/courses/30/lessons/172927): 5개 단위의 채굴 비용을 비교하는 그리디·정렬 (DFS 풀이도 가능)
  - [가운데 글자 가져오기](https://school.programmers.co.kr/learn/courses/30/lessons/12903): 문자열
  - [두 정수 사이의 합](https://school.programmers.co.kr/learn/courses/30/lessons/12912), [최대공약수와 최소공배수](https://school.programmers.co.kr/learn/courses/30/lessons/12940): 수학
- [노란불 신호등](https://school.programmers.co.kr/learn/courses/30/lessons/468371): 신호 주기의 최소공배수 범위에서 시간을 확인하는 완전탐색·수학 (문제 설명에 따른 분류)

## 로컬 확인

프로그래머스 풀이 파일은 `solution` 함수 형태이므로, 실행하려면 테스트용 `main` 함수가 필요합니다.
문법만 확인할 때는 다음 명령을 사용할 수 있습니다.

```bash
g++ -std=c++17 -Wall -Wextra -fsyntax-only programmers/lv2/bfs_dfs/게임_맵_최단거리.cpp
```

작성 중이거나 수정이 필요한 파일은 문법 검사를 통과하지 않을 수 있습니다.

## 변경 내용 올리기

저장소 루트(`coding_test/`)에서 실행합니다.

```bash
git status
git add README.md .gitignore algorithm/ programmers/
git commit -m "Add or update problem solutions"
git push origin main
```

터미널에서 푸시하려면 GitHub HTTPS 인증이 설정되어 있어야 합니다.
