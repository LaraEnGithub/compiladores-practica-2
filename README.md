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



