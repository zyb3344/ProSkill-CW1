[![Linux Build Status (travis-ci.com)](https://img.shields.io/travis/mity/acutest/master.svg?logo=linux&label=linux%20build)](https://travis-ci.com/mity/acutest)
[![Windows Build Status (appveyor.com)](https://img.shields.io/appveyor/ci/mity/acutest/master.svg?logo=windows&label=windows%20build)](https://ci.appveyor.com/project/mity/acutest/branch/master)


# Gray-Scott Reaction-Diffusion Simulation
# Description
Develop basic documentation for building the very
impressive software developed by this company. Our target audience is the group of new
interns expected to join the company. Additionally, we are implementing a
build system and continuous integration for the repository to ensure the interns cannot break
it too badly. 
we are simulation a Gray-Scott reaction and implementing 3 tests for the system.

* Check that the type of the model parameters (F, k) matches that of the element type
of the u and v vectors

* Check that the variables u and v are the same size

* Check that the simulation produces the mathematically correct answer when u = 0 and
v = 0.

# Installation 
*C++ Compiler (e.g., GCC, Clang)

*Make (for build automation)

*Git (for version control)

# Steps 

1. Clone the repository:
``` C
git clone https://github.com/scicomp-durham/gray-scott-sim.git
```

2. Navigate to the project directory:
``` C
cd gray-scott-sim
```
3. Build the project using Make:

``` C
make all 
```

# testing 

This project uses Acutest for unit testing. The tests cover various aspects of the simulation:

* Type_check: Ensures the data types of simulation parameters are correct.
* Size_check: Verifies that the simulation grids for different chemical species are of the same size
* Answer_check: Checks if the simulation results stay within expected bounds.

To run the test, use the following command line:

``` C
make test
```

# continuous integration 
Continuous integration is set up using [Your CI tool], ensuring that every commit passes all tests and meets the coding standards.

