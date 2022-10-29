g++ complex.cpp

time: 
real    0m0.030s
user    0m0.047s
sys     0m0.000s

size : 124950



g++ -O0 complex.cpp

time:
real    0m0.027s
user    0m0.031s
sys     0m0.000s

size : 124950


g++ -O1 complex.cpp

time: 

real    0m0.049s
user    0m0.000s
sys     0m0.015s

size : 124553


g++ -O2 complex.cpp

time: 
real    0m0.024s
user    0m0.015s
sys     0m0.000s

size : 125359


g++ -O3 complex.cpp

time:
real    0m0.048s
user    0m0.015s
sys     0m0.000s

size : 125149


g++ -Os complex.cpp

time:
real    0m0.026s
user    0m0.000s
sys     0m0.015s

size : 124661 


g++ -Ofast complex.cpp

time:
real    0m0.048s
user    0m0.000s
sys     0m0.015s

size : 125811


g++ -Og complex.cpp

time:
real    0m0.048s
user    0m0.000s
sys     0m0.015s

size: 124619

