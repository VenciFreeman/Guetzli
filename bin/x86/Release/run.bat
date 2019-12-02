echo off 
set DIR="imgs"
set OUT="out"
echo 遍历目录:%DIR%
echo 输出目录:%OUT%

for /f  %%f in ('dir /b/a-d/oN %DIR%') do ( 
echo 正在处理%%f 
guetzli_windows_x86-64.exe --quality 85 %DIR%/%%f %OUT%/%%f
)
pause