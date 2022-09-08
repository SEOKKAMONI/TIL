<h1>Context API 사용법</h1>
내가 실제 개인프로젝트때 적용한 코드를 예시로 설명하겠다.<br/>

1. Context
    - 먼저 Context API를 사용하려면 Context 를 생성해야한다.<br/>
      Context API는 React 에서 제공해주기 때문에 따로 설치 과정이 필요없다.
      ```
        import { createContext } from "react";

        export const DataContext = createContext(null);
      ```
      이런식으로 Context를 생성할때는 모듈화를 시켜서 불러오는 방식으로 진행한다.

2. Provider
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

3. useContext
    ```
        import { useContext } from "react";
        import { DataContext } from "../../context/DataContext";

        const { grade, setGrade, Class, setClass } = useContext(DataContext);
    ```
    사용할때는 useContext 를 사용하여 불러와서 자유롭게 사용하면 끝 !