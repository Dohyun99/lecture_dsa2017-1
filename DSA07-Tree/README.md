# data structure and algorithm



## Depth 와 Degree 의 차이는?

어느 분야든 마찬가지이겠지만, tree라고 하는 자료구조는 선택된 노드에 따라 역할과 관계가 바뀌기 때문에 용어를 정확히 이해하는 것이 중요하다. Depth는 선택된 노드로 부터 트리의 루트 노드까지의 edge의 수이다. 이 때 루트 노드의 depth 는 0이다. Depth와 대비되서 이해해야 하는 용어는 height이다. height는 루트 노드에서 가장 먼 leaf 노드까지의 edge의 수이다.  

Degree는 노드에서의 정의와 트리에서의 정의로 나눠 생각할 수있다. 노드의 degree는 해당 노드의 child의 수로 정의 된다.  트리에 포함된 모든 노드들 중 degree가 가장 큰 노드의 값이 트리의 degree이다.  



## 책에서는 full tree 에서 모든 가지가 자신이 가질 수 있는 모든 자식을 가지고 있는 것이라 했는데, ppt에서는 full binary tree가 모든 가지가 2개 또는 0개의 자식을 가지고 있는 것이라고 나타나 있다. 다른 것인가요?

Tree와 binary tree는 서로 다르지만 트리에서 사용했던 용어들을 binary tree에서도 똑같이 적용할 수 있다. Binary  tree의 경우 자식이 없더라도 binary tree라고 부른다. full binary tree도 같은 식으로 이해할 수 있다. 각 binary tree의 노드가 자식이 2개가 있거나 하나도 없다면 그것은 full binary tree이다. k-ary tree로 개념을 확장하더라도 동일하다. 각 노드가 k개의 자식이 있거나 하나도 없다면 full k-ary tree이다. 노드에 자식이 없는 경우, 다시 말하면 leaf 노드는 자식이 없는 노드를 뜻하는데, Full tree 에서 0개의 자식을 갖고 있는 경우를 명시하지 않는다면 트리의 height가 무한이 될 것이다. 





## complete tree가 가지는 의미는 ? 굳이 명명하는 이유와 반드시 왼쪽부터 채워져야 하는 이유는? (유사질문) complete tree 에서 맨 마지막 leaf 사이에 하나만 비면 이 경우 성립하는 이유가 무엇인가요? (유사 질문) Complete binary tree를 정의할 때 deepest level의 빈 노드의 위치를 구분 짓는 이유는 (왼쪽 or 오른쪽) (유사질문) 이진 트리에서 complete tree와 full tree를 구별하는 방법 (유사질문) complete tree 와 full tree 구별 방법과 차이점



Full tree는 모든 노드가 최대 자식의 수만큼 갖고 있거나 하나도 없는 경우라고 정의를 하였다. complete tree도 동일한 정의를 갖고 있으나 거기에 한가지 조건이 더 추가 되었다. 마지막 노드의 경우에는 child를 왼쪽에서부터 채워져야 한다는 조건이다. Complete tree의 정의의 문제이다. 모든 노드들이 순서대로 좌측에서 우측까지 정렬이 되어 있다. N번 째 노드 이후에 N+2번째의 노드가 있다면 complete tree의 조건에 위배된다. 





## sub tree 는 child가 존재할 때 사용하는 용어인가요?

Child가 있는 경우만 subtree가 존재할 수 있다.  



## sibling에서 child가 자신이면 이것을 sibling으로 치나요? (유사질문) sibling이 하나만 존재할 때도 성립하는가?



Sibling 은 같은 부모를 둔 자식들이 하나 초과일 때 사용할 수 있는 용어다. 





## 하나의 노드는 데이터를 하나만 가질 수 있다는 말은 틀렸는데, 그렇다면 데이터를 하나도 가지고 있지 않거나, 여러개를 가진다면 갯수가 유한한지

노드는 정의하기에 따라 데이터를 하나만 또는 하나도 갖고 있지 않을 수도 있고 메모리가 허용하는 한 많은 멤버 변수들을 갖을 수가 있다. 그 선택은 사용자의 프로그램의 목적에 따라 정의되어야 한다. 



## 레벨은 루트에서 시작할 때 루트를 1로 둘지 2로 둘지 선택하는데, 어떤 것을 선택해도 상관없는지

루트 노드의 레벨은 0 또는 1로 정의한다. 기준이 사용하는 사람마다 다를 수 있기 때문에 혼돈을 피하기 위해 루트노드의 레벨을 명시하고 나서 트리의 전체 레벨을 표현하는 것이 좋다. 



## 이진 트리에서 왼쪽 skewed 트리와 오른쪽 skewed 트리에서 사용된 차수, 레벨 깊이 루트 등이 같은데 오른쪽 공백과 왼쪽 공백을 가진 것만으로 다르다고 하는 것인지

skewed tree는 왼쪽 또는 오른쪽으로만 자식이 추가되는 경우의 트리의 상태를 표현하는 용어이다. 왼쪽으로만 추가되는 경우는 left skewed tree그리고 오른쪽으로만 추가되는 경우를 right skewed tree이다. 



## 편향 트리와 완전 이진 트리는 어떤 용도로 다르게 사용되는지 궁금합니다.

트리의 장점 중 하나는 모든 노드들의 루트로부터의 접근 거리가 일정하다는 것이다. Skewed 트리의 경우 한쪽으로 쏠려있기 때문에 루트에서 마지막 노드에 대한 접근 거리가 linked list와 같게 되어 이득이 전혀 없어진다. 그러한 경우 트리의 노드들을 재배치하는 작업이 필요하다. binary tree의 경우 노드의 값들이 크기를 비교하여 왼쪽 또는 오른쪽에 배치하기 때문에 left skewed 또는 right skewed 에 따라 재배치 알고리즘이 변형되어야 한다. 

Complete binary tree의 경우 모든 노드들이 순서대로 연속적으로 배치되어 있다는 성질을 갖고 있다. 그 성질을 이용하여 루트 노드에 항상 최대 값 또는 최소 값을 배치하는 Max heap과 Mean heap으로 활용할 수가 있다. 





## NODE는 데이터 주소(포인터)를 가지는데 주소가 어떻게 edge가 어떻게 되는지

포인터는 프로그래밍 수준에서 하나의 노드와 다른 노드를 연결한다. 논리적으로 하나의 노드와 다른 노드의 연결을 edge라고 부른다.



## 부모가 가르키는 자식을 부모가 자식을 포인팅하는 거라고 하였는데 자식도 부모를 가르키지 않는지

자료 구조의 정의에 따라 부모만 자식을 포인팅하는 구조를 갖을 수도 있고 자식도 부모를 포인팅하도록 만들 수 있다. 하지만 그렇게 만들기 위해서는 먼저 목적과 비용에 대해 생각해보고 결정해야 한다.





## linked list representation 에서 sibling은 표기 하지않을 때 sibling을 어떻게 구분할 수 있을가?

* sibling은 표기하지 않는다 (따로 표기하는 약식이 없으므로) 따라서 그냥 같은 parent를 가진 노드이면 그냥 sibling으로 보면 된다





## Binary tree 는 왜 tree의 부분 집합이 아닌지? (유사질문) binary tree와 tree의 차이점에서 leaf node 수 (N0) 와 차수 2(N2)의 node 수 사이의 관계  N0= N2+1이 무엇을 의미하는지

Tree는 노드들의 순서에 상관이 없는 반면에 binary tree는 노드들 간의 순서와 크기의 차이가 있으며 노드의 값에 따라 재배치가 일어날 수 있다. 그러므로 tree와 binary tree는 서로 전혀 다르다.  

질문의 상관 관계를 표현한 식의 설명은 다음과 같다. Relationship between the number of leaf nodes (n0) and  the number of nodes with degree 2 (n2) 라는 의미는 degree가 2인 어떤 노드와 leaf node들과의 관계를 말하고 있다. 즉 하나의 노드는 두개의 자식 또는 leaf node를 갖을 수 있으므로 총 노드의 수는 3개가 된다. Degree 의 수와 해당 노드들의 부모를 합한 값이다. 





## A는 parent이자 node 이다. 그렇다면 B 또한 parent 가 될 수 있는가?

— B는 child 이자 parent 이다. c는 child에만 해당한다



## 이진 트리의 개수를 알아볼 때 2^k-1과 2^{K+1}-1의 차이는?

Binary tree가 가질 수 있는 최대 노드의 갯수를 계산할 때 2^k-1을 사용한다. 이 때 k는 tree의 depth 이다. Depth를 deepest level의 노드로부터 루트까지의 edge의 수로 정의 하면 k+1, 노드의 수로 정의하면 k로 계산 할 수 있다. 정의의 기준에 따라 k또는 k+1로 표현될 수 있다.









## 리스트에서 current.val 이 아닌 current->val을 사용하는 이유는?

dot (.) operator는 structure의 member 변수를 접근 할 때 사용되는 operator이다. 예를 들어 다음과 같이 count라는 structure가 정의 되었다고 해보자.  

typedef struct count {

       int value

} count

이 때 count current라고 는 변수를 새로 정의하면 current 라는 변수의 member value를 접근하기 위해서는 current.value 라고 해야 그 값을 읽거나 변경할 수 있다. 

temp->val 에서는 ->라는 표기로 member 변수를 접근하고 있다. 차이가 있다면  포인터 변수인 temp가 current를 가리키고 있다는 것이다. 그 것을 표현하기 위해 ->가 사용된다. 





## 리스트에 테일이 존재하는 이유

리스트에는 헤드와 테일이 존재한다. Singly linked list의 경우 리스트의 임의의 노드에서 자신을 참조한 노드를 찾아 갈 방법이 없기 때문에 리스트의 시작 노드를 알지 못한다면 모든 노드들을 순회할 수 있는 방법이 없다.  그리고 \0으로 포인터가 더 이상 어떤 곳을 가리키지 못하도록 막아 둔 테일 노드를 정의해 놓지 않으면 마지막 노드의 포인터를 통해 임의의 주소공간을 접근하게 된다. 정의되어 있지 않은 공간이나 운영체제의 공간을 침범하게 되면 프로그램은 오동작을 하게 되고 치명적인 오류를 일으킬 수도 있다. 

 

## 트리 구조는 어떤 때 사용해야 하는지 (유사질문) 컴퓨터 프로그래밍으로써 이러한 트리가 어떤 부분에 주로 사용되는지 궁금합니다. (유사질문) 트리 구조를 사용할 때의 장단점은 무엇인지

트리의 장점은 배치가 잘되어 있다면 노드의 수가 많아지더라도 도달하는 데 드는 비용이 일정하다는 것이다. Skewed tree의 경우 재배치하는데 드는 비용이 있겠지만, 한번 균형이 잡히도록 재배치 해놓고 삽입할 때 균형을 잃지 않도록 유지 한다면 항상 접근 비용이 일정하게 유지할 수 있다. 이와 같은 성질을 이용하여 자료의 삽입과 탑색이 빈번한 데이터베이스에 사용될 수도 있다. 자료의 유지 관리하는 용도로 주로 쓰인다. 





## ancestor와 descendant 는 조상과 자손의 의미인데 교수님께서 git에 올려주신  pdf에는 조상과 자손에 본인도 포함된다고 되어 있습니다. 책엔 본인은 포함되지 않는다고 하는데, 어떤 것이 맞는 것인지 궁금합니다.

발표자료에 오해가 있게 작성이 되어 있어 수정이 필요하다. x의 descendant는 x와 그의 자식들의 관계를 표현한다. 설명에서 포함되는 것이지 실제 descendant 는 그 자식들이다. Ancestor도 마찬가지로 자식과 해당 자식의 parent와 grandparent등을 말하는 것이다. 




