## Estructura del proyecto

```
compilers_lab/nfa_to_dfa/
├── src/
│   ├── main.cpp
│   ├── regex.hpp/.cpp
│   ├── nfa.hpp/.cpp
│   └── dfa.hpp/.cpp
├── tests/
│   └── test_epsilon_closure.cpp
│   └── test_subset_construction.cpp
└── CMakeLists.txt
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
```bash
cd build
ctest --output-on-failure
```

Para ejecutar las pruebas de forma individual:
```bash
./build/test_subset
./build/test_e_closure
```


