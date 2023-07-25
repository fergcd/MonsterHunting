# MonsterHunting
제작자의 근성과 센스를 보여주는 C언어 기반 게임으로, 게임 속 주인공이 되어 10마리의 각기 다른 몬스터들을 모두 쓰러트리는 것이 목표입니다.

콘솔에서 게임이 구동되며 그래픽은 각종 특수문자들과 글자색의 조합으로 이루어져 있습니다.

록맨 시리즈에서 스테이지를 선택하듯이 상대할 몬스터를 선택하여 싸웁니다.

전투 방식은 포켓몬스터의 전투와 같이 턴제로 진행되며, 인터페이스도 포켓몬스터와 유사합니다.

약한 몬스터부터 잡으며 주인공의 능력을 강화시키고 기술들을 습득하여 모든 몬스터들을 쓰러트려 봅시다!

절대 클리어할 수 없을 것 같지만 공략법이 반드시 존재하며 플레이어는 이를 찾아내야 합니다.



<개발환경>

OS : Windows 7

IDE : Microsoft Visual Studio 2019



<특수문자 겹침 현상 해결책>

다음과 같이 메세지창의 '￣'와 같은 특수문자가 원래 콘솔에서 두 칸을 차지해야 하는데

그렇지 않고 서로 한 칸씩 겹쳐져서 메세지창이나 몬스터가 깨져보이는 현상이 있을 땐

레거시 콘솔을 사용해야 한다.

![01_new_console](https://github.com/fergcd/MonsterHunting/assets/13186723/6b11ada3-6f79-4943-9b0b-9ece0e48e766)


![02_properties](https://github.com/fergcd/MonsterHunting/assets/13186723/7f5fd0ca-30da-4710-8920-b92b935bd3fa)


레거시 콘솔 사용 체크 후 몹잡기를 껐다가 다시 실행한다.

![03_legacy_console_check](https://github.com/fergcd/MonsterHunting/assets/13186723/a419639c-d069-4945-a393-8aeffb0ec0aa)


이제 정상적으로 보인다.

![04_legacy_console](https://github.com/fergcd/MonsterHunting/assets/13186723/775c6191-3326-45da-9805-7469a9dbb77b)


※ C → C++(OOP) 로 리팩토링한 버전을 저장소 'MonsterHunting_OOP'에 올림(https://github.com/fergcd/MonsterHunting_OOP.git)
