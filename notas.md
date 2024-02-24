

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


## Problema 2

Código gerado originalmente pelo Gemini tem falhas