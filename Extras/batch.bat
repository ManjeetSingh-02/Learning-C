@echo off
batch_example
@if %ERRORLEVEL% == 0 goto SUCCESS
:UNSUCCESSFULL
@echo "UNSUCCESSFUL"
@echo "ERROR-LEVEL"
@echo %ERRORLEVEL%
notepad
goto END
:SUCCESS
@echo "SUCCESSFULL"
@echo "ERROR-LEVEL"
@echo %ERRORLEVEL%
calc

:END