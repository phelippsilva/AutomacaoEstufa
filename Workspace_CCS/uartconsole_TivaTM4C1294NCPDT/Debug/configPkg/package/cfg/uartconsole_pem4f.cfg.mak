# invoke SourceDir generated makefile for uartconsole.pem4f
uartconsole.pem4f: .libraries,uartconsole.pem4f
.libraries,uartconsole.pem4f: package/cfg/uartconsole_pem4f.xdl
	$(MAKE) -f C:\Users\Tiago\Documents\GitHub\AutomacaoEstufa\Workspace_CCS\uartconsole_TivaTM4C1294NCPDT/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Tiago\Documents\GitHub\AutomacaoEstufa\Workspace_CCS\uartconsole_TivaTM4C1294NCPDT/src/makefile.libs clean

