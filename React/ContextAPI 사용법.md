<h1>Context API 사용법</h1>
내가 실제 개인프로젝트때 적용한 코드를 예시로 설명하겠다.<br/>

<h3>Context API 란?</h3>
보통 우리가 props 로 데이터를 전달할때는 부모 컴포넌트에서 자식 컴포넌트로 props 를 통해 전달이 된다<br/>
하지만 이렇게 일일이 부모에서 자식으로 전달하게되면 복잡해지고 개발자 입장에서 힘들어진다.<br/>
그래서 Context API 를 사용하게 되면 일일이 넘겨 받지 않고 편하게 원하는 컴포넌트에 값을 넘길수있음.
<h3>Context</h3>
먼저 Context API를 사용하려면 Context 를 생성해야한다.<br/>
Context API는 React 에서 제공해주기 때문에 따로 설치 과정이 필요없다.

```
    import { createContext } from "react";

    export const DataContext = createContext(null);
```
이런식으로 Context를 생성할때는 모듈화를 시켜서 불러오는 방식으로 진행한다.

<h3>Provider</h3>

```
    import { DataContext } from './context/DataContext';
    export default function App() {
        const [grade, setGrade] = useState(1);
        const [Class, setClass] = useState(1);

        return (
            <DataContext.Provider value={{grade,setGrade, Class,setClass}}>
                <SurveyForm />
            </DataContext.Provider>
        )
    }
```
이런식으로 아까 생성한 Context 파일명.Provider 로 감싸면 안에 있는 하위 컴포넌트 에게 Value Props 를 전달한다.

<h3>useContext</h3>
```
    import { useContext } from "react";
    import { DataContext } from "../../context/DataContext";

    const { grade, setGrade, Class, setClass } = useContext(DataContext);
```
사용할때는 useContext 를 사용하여 불러와서 자유롭게 사용하면 끝 !