name: Static Code Quality- Cppcheck

on:
  push:
    branches: [ master ]
  

jobs:
  cppcheck:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
    - name: Install cppcheck
      run: sudo apt -y install cppcheck
    - name: Run cppcheck
      run: cppcheck Implementation
