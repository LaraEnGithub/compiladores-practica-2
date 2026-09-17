
#include "../src/regex.hpp"
#include "../src/nfa.hpp"
#include "../src/dfa.hpp"

#include <cassert>
#include <iostream>

void test_epsilon_closure_empty(){
    Nfa n;
    int q0 = n.add_state();
    int q1 = n.add_state();
    int q2 = n.add_state();

    n.add_transition(q0, q1, 'a');
    n.add_transition(q1, q2, 'b');
    n.add_transition(q2, q0, 'c');

    std::set<int> esperado = {};
    std::set<int> resultado_q0 = {};

    epsilon_closure(n,resultado_q0);
    assert(resultado_q0 == esperado);
}

void test_epsilon_closure_cycle(){
    Nfa n;
    int q0 = n.add_state();
    int q1 = n.add_state();
    int q2 = n.add_state();

    n.add_transition(q0, q1, EPSILON);
    n.add_transition(q1, q2, EPSILON);
    n.add_transition(q2, q0, EPSILON);

    std::set<int> esperado = {q0, q1, q2};

    std::set<int> resultado_q0 = {q0};
    epsilon_closure(n,resultado_q0);

    assert(resultado_q0 == esperado);

    std::set<int> resultado_q1 = {q1};
    epsilon_closure(n,resultado_q1);
    assert(resultado_q1 == esperado);

    std::set<int> resultado_q2 = {q2};
    epsilon_closure(n,resultado_q2);
    assert(resultado_q2 == esperado);

}

int main() {   
    std::cout << "========== VALIDATION ==========\n";

    test_epsilon_closure_empty();
    std::cout << "[OK] test_epsilon_closure_empty\n";
    
    test_epsilon_closure_cycle();
    std::cout << "[OK] test_epsilon_closure_cycle\n";

    std::cout << "\nEpsilon closure test passed.\n";


    return 0;
}