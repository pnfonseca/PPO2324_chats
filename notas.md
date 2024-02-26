

## FP_02

### Problema 1


Links para os chats:
- Gemini: <https://g.co/gemini/share/1bcbe82b51ca>
- Chat GPT: <https://chat.openai.com/share/3446c822-286f-4973-b84d-b83734be6f8a>

Gemini é mais "relaxado": 
- código muitas vezes não faz inclusão de `<iostream>` nem de `<iomanip>`
- código gera warnings: `Declaration shadows a field of 'Time'`
``` cpp
    void setSeconds(int seconds) {
        if (seconds < 0 || seconds >= 60) {
            throw std::invalid_argument("Seconds must be between 0 and 59");
        }
        this->seconds = seconds;
    }
```
  O código do ChatGPT evita estes warnings (mas, por outro lado, não tem os testes de validade do valor, que é uma das razões para o uso de *setters*): 
  ``` cpp

    void setSeconds(int s) {
        seconds = s;
    }
  ```
- é preciso algum nível de interpretação do código, em comparação com o ChatGPT. Gemini muitas vez não apresenta o código completo e omite código já gerado anteriormente: 
``` Cpp
class Time {
public:
  // ... constructors and displayTime function remain the same ...
```
  ou
``` cpp
  // Add another Time object (marked const)
  void addTime(const Time& other) const {
    // ... same logic as before ...
  }

private:
  // ... member variables remain the same ...
};
```

No caso do BlackBox, há erros: 
``` cpp
Time Time::add(const Time& other) const {
    int h = hours + other.hours;
    int m = minutes + other.minutes;
    int s = seconds + other.seconds;

    s += m / 60;
    m %= 60;
    h += s / 60;
    s %= 60;
    h %= 24;

    return Time(h, m, s);
}
```


## Problema 2

ChatGPT: <https://chat.openai.com/share/08f34121-00d9-48e7-9ea8-32a5c3b08cb8>
Gemini: <https://g.co/gemini/share/be38e30e6cd4>

Código gerado originalmente pelo Gemini tem falhas
`multiple definition of main`. A origem está na CMakeLists.txt gerada pelo Gemini ter o comando `file(GLOB_RECURSE SOURCES *.cpp)`, que inclui na lista de ficheiros o projeto ficheiros `.cpp` que estão nas pastas criadas pelo CMake: 
```bash
$ find . -iname \*.cpp
./main.cpp
./Point.cpp
./Shape.cpp
./Circle.cpp
./Rectangle.cpp
./Square.cpp
./cmake-build-debug/CMakeFiles/3.26.4/CompilerIdCXX/CMakeCXXCompilerId.cpp
./build/CMakeFiles/3.22.1/CompilerIdCXX/CMakeCXXCompilerId.cpp
```

Após retirar o `RECURSE` a CMakeLists.txt já funciona.