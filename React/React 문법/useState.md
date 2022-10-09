<h1>useState</h1>

<h3>useState를 사용해야하는 이유</h3>

1. useState는 State 와 setState 로 나뉘어있다 State는 변수이고 setState는 State의 값을 변경해준다<br/>
   근데 왜 구지 useState 를 써야하냐면 바로 setState로 값을 바꾸면 바로 리렌더링이 바로 일어나기 때문이다

<h3>useState 사용 예제</h3>

1. State와 setState는 어떻게 사용되는지 보자
```
  const [state, setState] = useState(default 값 지정);

  // 기존에 값을 바꾸던것처럼 state부분 = 1; 이런식으로 바꾸면 안돼고 setState를 이용해 바꿔줘야한다
  setState(1) // 이런식으로 바꾸면 정상적으로 state의 값은 1로 바뀐다
  
  console.log(state) // 1출력
```