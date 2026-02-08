@echo off

if "%1"=="" (
    echo "Need one argument"
    exit /b 1
)

set dir_n=%date%
set disk_n=E
set arch_n=arch.tar

md %dir_n%

if not exist "%disk_n%:/" (
    echo "Disk %disk_n% does not exist"
    exit /b 2
)

if not exist "%disk_n%:/%arch_n%" (
    echo "File %disk_n%:/%arch_n% does not exist"
    exit /b 3
)

copy "%disk_n%:/%arch_n%" "%dir_n%"

tar -xvf "%dir_n%/%arch_n%" "*.%1" 