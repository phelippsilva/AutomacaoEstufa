## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd package/cfg/i2crf430cl330_load_pem4f.oem4f

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/i2crf430cl330_load_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/i2crf430cl330_load_pem4fcfg.cmd\)\"$""\"C:/Users/Tiago/Documents/GitHub/AutomacaoEstufa/Workspace_CCS/i2crf430cl330_load_TivaTM4C1294NCPDT/Debug/configPkg/\1\""' package/cfg/i2crf430cl330_load_pem4f.xdl > $@
	-$(SETDATE) -r:max package/cfg/i2crf430cl330_load_pem4f.h compiler.opt compiler.opt.defs