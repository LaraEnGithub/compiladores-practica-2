## Estructura del proyecto

```
compilers_lab/regex_to_nfa/
├── src/
│   ├── main.cpp
│   ├── regex.hpp/.cpp
│   └── nfa.hpp/.cpp
├── CMakeLists.txt
├── Dockerfile
└── validator
```

## Uso
```
./build/regex_to_nfa -r
```

## Compilar y correr localmente

```bash
cd compilers_lab/nfa_to_dfa
cmake -S . -B build
cmake --build build
./build/regex_to_nfa -r
```

## Correr las pruebas
Para compilar, por ejemplo,  la prueba de construcción de subconjuntos (NFA a DFA):

```bash
g++ -std=c++17 -Wall -Wextra \
    tests/test_subset_construction.cpp \
    src/dfa.cpp \
    src/nfa.cpp \
    src/regex.cpp \
    -o test_subset
```

Una vez compilada, ejecutar con:

```bash
./test_subset
```


