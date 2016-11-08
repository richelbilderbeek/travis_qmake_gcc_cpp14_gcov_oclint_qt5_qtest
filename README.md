# travis_qmake_gcc_cpp14_gcov_oclint_qt5_qtest


[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
![Whitespace](Whitespace.png)
[![Codecov logo](Codecov.png)](https://www.codecov.io)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_gcov_oclint_qt5_qtest.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_gcov_oclint_qt5_qtest)
[![codecov.io](https://codecov.io/github/richelbilderbeek/travis_qmake_gcc_cpp14_gcov_oclint_qt5_qtest/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/travis_qmake_gcc_cpp14_gcov_oclint_qt5_qtest?branch=master)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` and `Qt5` using QTest
 * Code coverage: `gcov` and `Codecov`
 * Static testing: `OCLint`
 * GUI testing: QTest
 * Source: QDialog with Qt resource file

More complex builds:
 * Add Boost: [travis_qmake_gcc_cpp14_boost_gcov_oclint_qt5_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost_gcov_oclint_qt5_qtest)

Less complex builds:
 * No code coverage: [travis_qmake_gcc_cpp14_oclint_qt5_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_oclint_qt5_qtest)
