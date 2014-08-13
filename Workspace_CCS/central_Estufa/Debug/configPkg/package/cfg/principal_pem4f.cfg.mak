# invoke SourceDir generated makefile for principal.pem4f
principal.pem4f: .libraries,principal.pem4f
.libraries,principal.pem4f: package/cfg/principal_pem4f.xdl
	$(MAKE) -f C:\Users\Tiago\Documents\GitHub\AutomacaoEstufa\Workspace_CCS\central_Estufa/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Tiago\Documents\GitHub\AutomacaoEstufa\Workspace_CCS\central_Estufa/src/makefile.libs clean

