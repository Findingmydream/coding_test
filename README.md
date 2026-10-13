# Coding Test

C++로 작성한 코딩 테스트 풀이와 알고리즘 연습 기록입니다.

## 디렉토리 구조

```text
coding_test/
├── README.md
├── .gitignore
├── algorithm/                  # 알고리즘 개념과 연습 코드
│   └── graph/
│       └── dfs_bfs.cpp
└── programmers/                # 프로그래머스 문제 풀이
    ├── lv1/
    ├── lv2/
    └── lv3/
```

## 정리 규칙

- 문제 풀이는 `플랫폼/난이도/문제_이름.cpp`에 저장합니다.
- 파일명은 문제 이름을 사용하고, 공백은 밑줄(`_`)로 바꿉니다.
- 같은 문제의 다른 풀이는 `_bfs`, `_floyd_warshall`처럼 풀이 방식을 붙입니다.
- 알고리즘 개념과 연습 코드는 `algorithm/유형/`에 저장합니다.
- 알고리즘 유형과 풀이 상태는 아래 표에서 관리합니다.
- 편집기 복구 파일과 빌드 결과는 Git에 올리지 않습니다.

## 풀이 상태

`검증 필요`는 제출 통과 여부를 확인하지 않은 코드, `작성 중`은 미완성 코드,
`수정 필요`는 코드에서 확인한 수정 사항이 있는 파일입니다.
프로그래머스에서 통과를 확인한 뒤 `풀이 완료`로 변경합니다.

### 프로그래머스 Level 1

| 문제 | 코드 | 유형 | 상태 | 메모 |
| --- | --- | --- | --- | --- |
| 가운데 글자 가져오기 | [코드](programmers/lv1/가운데_글자_가져오기.cpp) | 문자열 | 검증 필요 | |
| 두 정수 사이의 합 | [코드](programmers/lv1/두_정수_사이의_합.cpp) | 반복문 | 수정 필요 | 한 파일에 동일한 `solution` 함수가 두 개 있어 풀이 분리 필요 |
| 모의고사 | [코드](programmers/lv1/모의고사.cpp) | 완전탐색 | 검증 필요 | |
| 최대공약수와 최소공배수 | [코드](programmers/lv1/최대공약수와_최소공배수.cpp) | 수학 | 수정 필요 | `answer` 중복 선언 제거 필요, `gcd`·`lcm`은 C++17 사용 |
| 노란불 (임시 파일명) | [코드](programmers/lv1/노란불.cpp) | 미분류 | 작성 중 | `te`만 작성되어 있어 문제명과 내용 확인 필요 |

### 프로그래머스 Level 2

| 문제 | 코드 | 유형 | 상태 | 메모 |
| --- | --- | --- | --- | --- |
| 게임 맵 최단거리 | [코드](programmers/lv2/게임_맵_최단거리.cpp) | BFS | 검증 필요 | |
| 과제 진행하기 | [코드](programmers/lv2/과제_진행하기.cpp) | 스택·시뮬레이션 | 작성 중 | 시간 변환 함수와 풀이 구현 필요 |
| 광물 캐기 | [코드](programmers/lv2/광물_캐기.cpp) | 그리디·정렬 | 검증 필요 | |

### 프로그래머스 Level 3

| 문제 | 코드 | 유형 | 상태 | 메모 |
| --- | --- | --- | --- | --- |
| 가장 먼 노드 | [코드](programmers/lv3/가장_먼_노드.cpp) | BFS | 검증 필요 | |
| 순위 | [BFS](programmers/lv3/순위_bfs.cpp) | BFS | 작성 중 | 탐색 구현과 `solution` 함수 작성 필요 |
| 순위 | [Floyd–Warshall](programmers/lv3/순위_floyd_warshall.cpp) | 플로이드 워셜 | 검증 필요 | |

### 알고리즘 연습

| 주제 | 코드 | 상태 | 메모 |
| --- | --- | --- | --- |
| DFS·BFS | [코드](algorithm/graph/dfs_bfs.cpp) | 수정 필요 | DFS의 `if (!visited[y]);`에서 세미콜론 제거 및 방문 조건 처리 필요 |

## 로컬 확인

프로그래머스 풀이 파일은 `solution` 함수 형태이므로, 실행하려면 테스트용 `main` 함수가 필요합니다.
문법만 확인할 때는 다음 명령을 사용할 수 있습니다.

```bash
g++ -std=c++17 -Wall -Wextra -fsyntax-only programmers/lv2/게임_맵_최단거리.cpp
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
