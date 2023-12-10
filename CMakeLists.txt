cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# /home/trec/WorkRaj/Coding_Tutorials/

project(Tut1)
add_executable(Tut1 Tut1.cpp)


project(Tut7)
add_executable(Tut7 Tut7.cpp)

project(Tut12)
add_executable(Tut12 Tut12.cpp)

project(Tut13)
add_executable(Tut13 Tut13.cpp)

project(Tut14)
add_executable(Tut14 Tut14.cpp)

project(Tut15)
add_executable(Tut15 Tut15.cpp)


project(Tut17)
add_executable(Tut17 Tut17.cpp)

project(Tut19)
add_executable(Tut19 Tut19.cpp)

project(Tut21)
add_executable(Tut21 Tut21.cpp)

project(Tut22)
add_executable(Tut22 Tut22.cpp)

project(Tut23)
add_executable(Tut23 Tut23.cpp)


project(Tut24)
add_executable(Tut24 Tut24.cpp)

project(Tut25)
add_executable(Tut25 Tut25.cpp)

project(Tut25b)
add_executable(Tut25b Tut25b.cpp)

project(Tut26)
add_executable(Tut26 Tut26.cpp)

project(Tut27)
add_executable(Tut27 Tut27.cpp)

project(Tut28)
add_executable(Tut28 Tut28.cpp)

project(Tut28b)
add_executable(Tut28b Tut28b.cpp)

project(Tut29)
add_executable(Tut29 Tut29.cpp)


project(Tut30)
add_executable(Tut30 Tut30.cpp)

project(Tut30b)
add_executable(Tut30b Tut30b.cpp)

project(Tut31)
add_executable(Tut31 Tut31.cpp)

project(Tut32)
add_executable(Tut32 Tut32.cpp)

project(Tut33)
add_executable(Tut33 Tut33.cpp)

project(Tut34)
add_executable(Tut34 Tut34.cpp)

project(Tut35)
add_executable(Tut35 Tut35.cpp)

project(Tut37)
add_executable(Tut37 Tut37.cpp)

project(Tut38)
add_executable(Tut38 Tut38.cpp)

project(Tut38_private)
add_executable(Tut38_private Tut38_private.cpp)


project(Tut39)
add_executable(Tut39 Tut39.cpp)

project(Tut40)
add_executable(Tut40 Tut40.cpp)

project(Tut41)
add_executable(Tut41 Tut41.cpp)

project(Tut42)
add_executable(Tut42 Tut42.cpp)

project(Tut43)
add_executable(Tut43 Tut43.cpp)


project(Tut45)
add_executable(Tut45 Tut45.cpp)

project(Tut48)
add_executable(Tut48 Tut48.cpp)

project(Tut49)
add_executable(Tut49 Tut49.cpp)

project(Tut50)
add_executable(Tut50 Tut50.cpp)

project(Tut51)
add_executable(Tut51 Tut51.cpp)

project(Tut52)
add_executable(Tut52 Tut52.cpp)

project(Tut53)
add_executable(Tut53 Tut53.cpp)

project(Tut54)
add_executable(Tut54 Tut54.cpp)

project(Tut55)
add_executable(Tut55 Tut55.cpp)

project(Tut56)
add_executable(Tut56 Tut56.cpp)

project(Tut57)
add_executable(Tut57 Tut57.cpp)

project(Tut58)
add_executable(Tut58 Tut58.cpp)

project(Tut60)
add_executable(Tut60 Tut60.cpp)


project(Tut61)
add_executable(Tut61 Tut61.cpp)

project(Tut62)
add_executable(Tut62 Tut62.cpp)

project(Tut64)
add_executable(Tut64 Tut64.cpp)

project(Tut65)
add_executable(Tut65 Tut65.cpp)

project(Tut66)
add_executable(Tut66 Tut66.cpp)

project(Tut67)
add_executable(Tut67 Tut67.cpp)

project(Tut68)
add_executable(Tut68 Tut68.cpp)

project(Tut71)
add_executable(Tut71 Tut71.cpp)

project(Tut72)
add_executable(Tut72 Tut72.cpp)


set(Eigen3_DIR /home/ruturajsambhus/Work/Coding_Tutorials/eigen)

project (EigenTut1)
 
find_package (Eigen3 3.4 REQUIRED)
 
add_executable (EigenTut1 EigenTut1.cpp)
target_link_libraries (EigenTut1 Eigen3::Eigen)

project (EigenTut2)
 
find_package (Eigen3 3.4 REQUIRED)
 
add_executable (EigenTut2 EigenTut2.cpp)
target_link_libraries (EigenTut2 Eigen3::Eigen)

project (EigenTut3)
 
find_package (Eigen3 3.4 REQUIRED)
 
add_executable (EigenTut3 EigenTut3.cpp)
target_link_libraries (EigenTut3 Eigen3::Eigen)




project(ThreadTut1)
add_executable(ThreadTut1 ThreadTut1.cpp)


project(ThreadTut2)
add_executable(ThreadTut2 ThreadTut2.cpp)


project(ThreadTut3)
add_executable(ThreadTut3 ThreadTut3.cpp)


project(ThreadTut4)
add_executable(ThreadTut4 ThreadTut4.cpp)


project(ThreadTut5)
add_executable(ThreadTut5 ThreadTut5.cpp)


project(ThreadTut6)
add_executable(ThreadTut6 ThreadTut6.cpp)

project(ThreadTut7)
add_executable(ThreadTut7 ThreadTut7.cpp)

project(FunctorsTut1)
add_executable(FunctorsTut1 FunctorsTut1.cpp)

project(FunctorsTut2)
add_executable(FunctorsTut2 FunctorsTut2.cpp)

project(LambdaFunTut1)
add_executable(LambdaFunTut1 LambdaFunTut1.cpp)

project(LambdaFunTut2)
add_executable(LambdaFunTut2 LambdaFunTut2.cpp)

project(Socket_Server1)
add_executable(Socket_Server1 Socket_Server1.cpp)

project(Socket_Client1)
add_executable(Socket_Client1 Socket_Client1.cpp)

project(NamespaceTut1)
add_executable(NamespaceTut1 NamespaceTut1.cpp)


project(DataTransferTut)
add_executable(DataTransferTut DataTransferTut.cpp)

project(Socket_Server2)
add_executable(Socket_Server2 Socket_Server2.cpp)

