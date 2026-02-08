@echo off
Setlocal EnableDelayedExpansion

if "%2"=="" (
    echo "Need two arguments"
    exit /b 1
)

set input_file=%1
set output_file=%2
set temp_file=temp.txt

type nul > %output_file%
echo Scan started
tasklist /V /FO CSV > %temp_file%
echo Scan ended 

for /f "usebackq tokens=1,2" %%a in ("%input_file%") do (
    
    for /f "usebackq tokens=1,2,7 delims=," %%c in ("%temp_file%") do (
        
        if %%~a==%%~e (
            if %%~b==%%~c (
                taskkill /PID %%~d
                @echo %DATE% %TIME% %%~a %%~b %d>> %output_file%
            )

        )
    )
)
echo Done
