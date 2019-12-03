echo off 
set DIR="imgs"
set OUT="out"
echo Traversing:%DIR%
echo Output:%OUT%

for /f  %%f in ('dir /b/a-d/oN %DIR%') do ( 
echo Processing%%f 
guetzli.exe --quality 85 %DIR%/%%f %OUT%/%%f
)
pause