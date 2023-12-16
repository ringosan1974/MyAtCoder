@echo off
setlocal

if "%1"=="-python" (
    echo Creating main.py in each folder...
    echo. > A.py
    echo. > B.py
    echo. > C.py
    echo. > D.py
    echo. > E.py
    echo. > F.py
    echo. > G.py
    echo. > H_Ex.py
    echo main.py created successfully in each folder.
) else if "%1"=="-cpp" (
    echo Creating main.cpp in each folder...
    echo. > A.cpp
    echo. > B.cpp
    echo. > C.cpp
    echo. > D.cpp
    echo. > E.cpp
    echo. > F.cpp
    echo. > G.cpp
    echo. > H_Ex.cpp
    echo main.cpp created successfully in each folder.
) else (
    echo Folders created successfully.
)


endlocal
pause
