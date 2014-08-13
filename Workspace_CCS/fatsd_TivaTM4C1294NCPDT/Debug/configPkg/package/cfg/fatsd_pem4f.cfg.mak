# invoke SourceDir generated makefile for fatsd.pem4f
fatsd.pem4f: .libraries,fatsd.pem4f
.libraries,fatsd.pem4f: package/cfg/fatsd_pem4f.xdl
	$(MAKE) -f C:\Users\Tiago\Documents\GitHub\AutomacaoEstufa\Workspace_CCS\fatsd_TivaTM4C1294NCPDT/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Tiago\Documents\GitHub\AutomacaoEstufa\Workspace_CCS\fatsd_TivaTM4C1294NCPDT/src/makefile.libs clean

