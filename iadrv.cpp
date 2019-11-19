// iadrv.cpp - driver program for testing IntArray class
// Provided by instructor for Overloaded Operator lab

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include "iadrv.h"

using namespace std;

ofstream csis;

int main() {
    csis.open("p4.dat");
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    test12();
    test13();
    test14();
    test15();
    test16();
    test17();
    test18();
    test19();
    test20();
    csis.close();
}

void test1() {
    system("cls");
    cout << "1. Array declared with single integer: IntArray a(10);" << endl << endl;
    csis << "1. Array declared with single integer: IntArray a(10);" << endl << endl;
    IntArray a(10);
    for(int i = a.low(); i <= a.high(); i++)
        a[i] = i * 10;
    a.setName("a");
    cout << a << endl;
    csis << a << endl;
    wait();
}

void test2() {
    system("cls");
    cout << "2. Array declared with two integers: IntArray b(-3, 6);" << endl << endl;
    csis << "2. Array declared with two integers: IntArray b(-3, 6);" << endl << endl;
    IntArray b(-3, 6);
    for(int i = b.low(); i <= b.high(); i++)
        b[i] = i * 10;
    b.setName("b");
    cout << b << endl;
    csis << b << endl;
    wait();
}

void test3() {
    system("cls");
    cout << "3. Array declared with two integers: IntArray c(6, 8);" << endl << endl;
    csis << "3. Array declared with two integers: IntArray c(6, 8);" << endl << endl;
    IntArray c(6, 8);
    for(int i = c.low(); i <= c.high(); i++)
        c[i] = i * 10;
    c.setName("c");
    cout << c << endl;
    csis << c << endl;
    wait();
}

void test4() {
    system("cls");
    cout << "4. Array declared with two identical integers: IntArray d(5, 5);" << endl << endl;
    csis << "4. Array declared with two identical integers: IntArray d(5, 5);" << endl << endl;
    IntArray d(5, 5);
    for(int i = d.low(); i <= d.high(); i++)
        d[i] = i * 10;
    d.setName("d");
    cout << d << endl;
    csis << d << endl;
    wait();
}

void test5() {
    system("cls");
    cout << "5. Array declared with no integers: IntArray z;" << endl << endl;
    csis << "5. Array declared with no integers: IntArray z;" << endl << endl;
    IntArray z;
    for(int i = z.low(); i <= z.high(); i++)
        z[i] = i * 10;
    z.setName("z");
    cout << z << endl;
    csis << z << endl;
    wait();
}

void test6() {
    system("cls");
    cout << "6. Array declared with another object of type IntArray: IntArray c(6, 8);" << endl;
    cout << "                                                        Intarray e(c);"    << endl << endl;
    csis << "6. Array declared with another object of type IntArray: IntArray c(6, 8);" << endl;
    csis << "                                                        Intarray e(c);"    << endl << endl;
    IntArray c(6, 8);
    for(int i = c.low(); i <= c.high(); i++)
        c[i] = i * 10;
    c.setName("c");
    cout << c << endl;
    csis << c << endl;
    IntArray e(c);
    e.setName("e");
    cout << e << endl;    
    csis << e << endl;
    wait();
}

void test7() {
    system("cls");
    cout << "7. Array assigned to another array with different indices: IntArray f(1, 4);"  << endl;
    cout << "                                                           IntArray g(5, 8);"  << endl;
    cout << "                                                           f = g;"             << endl << endl;
    csis << "7. Array assigned to another array with different indices: IntArray f(1, 4);"  << endl;
    csis << "                                                           IntArray g(5, 8);"  << endl;
    csis << "                                                           f = g;"             << endl << endl;
    IntArray f(1, 4);
    for(int i = f.low(); i <= f.high(); i++)
        f[i] = i * 10;
    f.setName("f");
    cout << f << endl;
    csis << f << endl;
    IntArray g(5, 8);
    for(int i = g.low(); i <= g.high(); i++)
        g[i] = i * 10;
    g.setName("g");
    cout << g << endl;
    csis << g << endl;
    wait();
    system("cls");
    f = g;
    cout << f << endl;
    cout << g << endl;
    csis << f << endl;
    csis << g << endl;
    wait();
}

void test8() {
    system("cls");
    cout << "8. Multiple array assignment with different indices: IntArray j(3, 6);"  << endl;
    cout << "                                                     IntArray k(6, 9);"  << endl;
    cout << "                                                     IntArray l(1, 4);"  << endl;
    cout << "                                                     j = k = l;"         << endl << endl;
    csis << "8. Multiple array assignment with different indices: IntArray j(3, 6);"  << endl;
    csis << "                                                     IntArray k(6, 9);"  << endl;
    csis << "                                                     IntArray l(1, 4);"  << endl;
    csis << "                                                     j = k = l;"         << endl << endl;
    IntArray j(3, 6);
    for(int i = j.low(); i <= j.high(); i++)
        j[i] = i * 10;
    j.setName("j");
    cout << j << endl;
    csis << j << endl;
    IntArray k(6, 9);
    for(int i = k.low(); i <= k.high(); i++)
        k[i] = i * 10;
    k.setName("k");
    cout << k << endl;
    csis << k << endl;
    IntArray l(1, 4);
    for(int i = l.low(); i <= l.high(); i++)
        l[i] = i * 10;
    l.setName("l");
    cout << l << endl;
    csis << l << endl;
    wait();
    system("cls");
    j = k = l;
    cout << j << endl;
    cout << k << endl;
    cout << l << endl;
    csis << j << endl;
    csis << k << endl;
    csis << l << endl;
    wait();
}

void test9() {
    system("cls");
    cout << "9. Overloaded equality operator (identical elements): IntArray m(3, 7);"  << endl;
    cout << "                                                      IntArray n(1, 5);"  << endl;
    cout << "                                                      m == n"             << endl << endl;
    csis << "9. Overloaded equality operator (identical elements): IntArray m(3, 7);"  << endl;
    csis << "                                                      IntArray n(1, 5);"  << endl;
    csis << "                                                      m == n"             << endl << endl;
    IntArray m(3, 7);
    for(int i = m.low(); i <= m.high(); i++)
        m[i] = i * 10;
    m.setName("m");
    cout << m << endl;
    csis << m << endl;
    IntArray n(1, 5);
    for(int i = n.low(); i <= n.high(); i++)
        n[i] = i * 10;
    n.setName("n");
    cout << n << endl;
    csis << n << endl;
    wait();
    system("cls");
    m = n;
    cout << m << endl;
    cout << n << endl;
    cout << "Returns " << (m == n ? "True." : "False.") << endl << endl;
    csis << m << endl;
    csis << n << endl;
    csis << "Returns " << (m == n ? "True." : "False.") << endl << endl;
    wait();
}

void test10() {
    system("cls");
    cout << "10. Overloaded equality operator (different elements): IntArray o(3, 7);"  << endl;
    cout << "                                                       IntArray p(1, 5);"  << endl;
    cout << "                                                       o == p"             << endl << endl;
    csis << "10. Overloaded equality operator (different elements): IntArray o(3, 7);"  << endl;
    csis << "                                                       IntArray p(1, 5);"  << endl;
    csis << "                                                       o == p"             << endl << endl;
    IntArray o(3, 7);
    for(int i = o.low(); i <= o.high(); i++)
        o[i] = i * 10;
    o.setName("o");
    cout << o << endl;
    csis << o << endl;
    IntArray p(1, 5);
    for(int i = p.low(); i <= p.high(); i++)
        p[i] = i * 10;
    p.setName("p");
    cout << p << endl;
    cout << "Returns " << (o == p ? "True." : "False.") << endl << endl;
    csis << p << endl;
    csis << "Returns " << (o == p ? "True." : "False.") << endl << endl;
    wait();
}

void test11() {
    system("cls");
    cout << "11. Overloaded equality operator (different size arrays): IntArray q(1, 3);"  << endl;
    cout << "                                                          IntArray r(1, 4);"  << endl;
    cout << "                                                          q == r;"    << endl << endl;
    csis << "11. Overloaded equality operator (different size arrays): IntArray q(1, 3);"  << endl;
    csis << "                                                          IntArray r(1, 4);"  << endl;
    csis << "                                                          q == r;"    << endl << endl;
    IntArray q(1, 3);
    for(int i = q.low(); i <= q.high(); i++)
        q[i] = i * 10;
    q.setName("q");
    cout << q << endl;
    csis << q << endl;
    IntArray r(1, 4);
    for(int i = r.low(); i <= r.high(); i++)
        r[i] = i * 10;
    r.setName("r");
    cout << r << endl;
    cout << "Returns " << (q == r ? "True." : "False.") << endl << endl;
    csis << r << endl;
    csis << "Returns " << (q == r ? "True." : "False.") << endl << endl;
    wait();
}

void test12() {
    system("cls");
    cout << "12. Overloaded inequality operator (identical elements): IntArray s(3, 7);" << endl;
    cout << "                                                         IntArray t(1, 5);" << endl;
    cout << "                                                         s != t;"           << endl << endl;
    csis << "12. Overloaded inequality operator (identical elements): IntArray s(3, 7);" << endl;
    csis << "                                                         IntArray t(1, 5);" << endl;
    csis << "                                                         s != t;"           << endl << endl;
    IntArray s(3, 7);
    for(int i = s.low(); i <= s.high(); i++)
        s[i] = i * 10;
    s.setName("s");
    cout << s << endl;
    csis << s << endl;
    IntArray t(1, 5);
    for(int i = t.low(); i <= t.high(); i++)
        t[i] = i * 10;
    t.setName("t");
    cout << t << endl;
    csis << t << endl;
    wait();
    system("cls");
    s = t;
    cout << s << endl;
    cout << t << endl;
    cout << "Returns " << (s != t ? "True." : "False.") << endl << endl;
    csis << s << endl;
    csis << t << endl;
    csis << "Returns " << (s != t ? "True." : "False.") << endl << endl;
    wait();
}

void test13() {
    system("cls");
    cout << "13. Overloaded inequality operator (different elements): IntArray u(3, 7);" << endl;
    cout << "                                                         IntArray v(1, 5);" << endl;
    cout << "                                                         u != v;"           << endl << endl;
    csis << "13. Overloaded inequality operator (different elements): IntArray u(3, 7);" << endl;
    csis << "                                                         IntArray v(1, 5);" << endl;
    csis << "                                                         u != v;"           << endl << endl;
    IntArray u(3, 7);
    for(int i = u.low(); i <= u.high(); i++)
        u[i] = i * 10;
    u.setName("u");
    cout << u << endl;
    csis << u << endl;
    IntArray v(1, 5);
    for(int i = v.low(); i <= v.high(); i++)
        v[i] = i * 10;
    v.setName("v");
    cout << v << endl;
    cout << "Returns " << (u != v ? "True." : "False.") << endl << endl;
    csis << v << endl;
    csis << "Returns " << (u != v ? "True." : "False.") << endl << endl;
    wait();
}

void test14() {
    system("cls");
    cout << "14. Overloaded inequality operator (different size arrays): IntArray w(1, 3);" << endl;
    cout << "                                                            IntArray x(1, 4);" << endl;
    cout << "                                                            w != x;"           << endl << endl;
    csis << "14. Overloaded inequality operator (different size arrays): IntArray w(1, 3);" << endl;
    csis << "                                                            IntArray x(1, 4);" << endl;
    csis << "                                                            w != x;"           << endl << endl;
    IntArray w(1, 3);
    for(int i = w.low(); i <= w.high(); i++)
        w[i] = i * 10;
    w.setName("w");
    cout << w << endl;
    csis << w << endl;
    IntArray x(1, 4);
    for(int i = x.low(); i <= x.high(); i++)
        x[i] = i * 10;
    x.setName("x");
    cout << x << endl;
    cout << "Returns " << (w != x ? "True." : "False.") << endl << endl;
    csis << x << endl;
    csis << "Returns " << (w != x ? "True." : "False.") << endl << endl;
    wait();
}

void test15() {
    system("cls");
    cout << "15. Sum of two arrays assigned to third array: IntArray a(1, 5);"   << endl;
    cout << "                                               IntArray b(4, 8);"   << endl;
    cout << "                                               IntArray c = a + b;" << endl << endl;
    csis << "15. Sum of two arrays assigned to third array: IntArray a(1, 5);"   << endl;
    csis << "                                               IntArray b(4, 8);"   << endl;
    csis << "                                               IntArray c = a + b;" << endl << endl;
    IntArray a(1, 5);
    for(int i = a.low(); i <= a.high(); i++)
        a[i] = i * 10;
    a.setName("a");
    cout << a << endl;
    csis << a << endl;
    IntArray b(4, 8);
    for(int i = b.low(); i <= b.high(); i++)
        b[i] = i * 10;
    b.setName("b");
    cout << b << endl;
    csis << b << endl;
    wait();
    system("cls");
    IntArray c = a + b;
    c.setName("c");
    cout << c << endl;
    csis << c << endl;
    wait();
}

void test16() {
    system("cls");
    cout << "16. Sum of two arrays assigned to first array: IntArray d(10, 13);" << endl;
    cout << "                                               IntArray e(30, 33);" << endl;
    cout << "                                               d += e;"             << endl << endl;
    csis << "16. Sum of two arrays assigned to first array: IntArray d(10, 13);" << endl;
    csis << "                                               IntArray e(30, 33);" << endl;
    csis << "                                               d += e;"             << endl << endl;
    IntArray d(10, 13);
    for(int i = d.low(); i <= d.high(); i++)
        d[i] = i * 10;
    d.setName("d");
    cout << d << endl;
    csis << d << endl;
    IntArray e(30, 33);
    for(int i = e.low(); i <= e.high(); i++)
        e[i] = i * 10;
    e.setName("e");
    cout << e << endl;
    csis << e << endl;
    d += e;
    cout << d << endl;
    csis << d << endl;
    wait();
}

void test17() {
    system("cls");
    cout << "17. Array declared with illegal array bounds: IntArray f(5, 2);" << endl << endl;
    csis << "17. Array declared with illegal array bounds: IntArray f(5, 2);" << endl << endl;
    IntArray f(5, 2);
    for(int i = f.low(); i <= f.high(); i++)
        f[i] = i * 10;
    f.setName("f");
    cout << f << endl;
    csis << f << endl;
    wait();
}

void test18() {
    system("cls");
    cout << "18. Array with index out of range: IntArray g(10);"    << endl;
    cout << "                                   g[10] = 1;"         << endl << endl;
    csis << "18. Array with index out of range: IntArray g(10);"    << endl;
    csis << "                                   g[10] = 1;"         << endl << endl;
    IntArray g(10);
    for(int i = g.low(); i <= g.high(); i++)
        g[i] = i * 10;
    g.setName("g");
    cout << g << endl;
    csis << g << endl;
    g[10] = 1;
    wait();
}

void test19() {
    system("cls");
    cout << "19. Arrays with length mismatch: IntArray m(1, 4);" << endl;
    cout << "                                 IntArray n(2, 4);" << endl;
    cout << "                                 m = n;"            << endl << endl;
    csis << "19. Arrays with length mismatch: IntArray m(1, 4);" << endl;
    csis << "                                 IntArray n(2, 4);" << endl;
    csis << "                                 m = n;"            << endl << endl;
    IntArray m(1, 4);
    for(int i = m.low(); i <= m.high(); i++)
        m[i] = i * 10;
    m.setName("m");
    cout << m << endl;
    csis << m << endl;
    IntArray n(2, 4);
    for(int i = n.low(); i <= n.high(); i++)
        n[i] = i * 10;
    n.setName("n");
    cout << n << endl;
    csis << n << endl;
    wait();
    system("cls");
    m = n;
    cout << m << endl;
    cout << n << endl;
    csis << m << endl;
    csis << n << endl;
    wait();
}

void test20() {
    system("cls");
    cout << "20. Array subscript operator: IntArray o(7, 8);" << endl;
    cout << "                              o[7] = 25;"        << endl;
    cout << "                              o[8] = o[7];"      << endl << endl;
    csis << "20. Array subscript operator: IntArray o(7, 8);" << endl;
    csis << "                              o[7] = 25;"        << endl;
    csis << "                              o[8] = o[7];"      << endl << endl;
    IntArray o(7, 8);
    for(int i = o.low(); i <= o.high(); i++)
        o[i] = i * 10;
    o.setName("o");
    cout << o << endl;
    csis << o << endl;
    o[7] = 25;
    o[8] = o[7];
    cout << o << endl;
    csis << o << endl;
    wait();
}

void wait() {
    char buf;

    cout << "Press any key to continue." << endl;
    cin.get(buf);
}