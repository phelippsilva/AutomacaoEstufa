#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = xconfig_principal
XDCINCS = -I. -I$(strip $(subst ;, -I,$(subst $(space),\$(space),$(XPKGPATH))))
XDCCFGDIR = package/cfg/

#
# The following dependencies ensure package.mak is rebuilt
# in the event that some included BOM script changes.
#
ifneq (clean,$(MAKECMDGOALS))
C:/ti/xdctools_3_30_01_25_core/packages/xdc/utils.js:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/utils.js
C:/ti/xdctools_3_30_01_25_core/packages/xdc/xdc.tci:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/xdc.tci
C:/ti/xdctools_3_30_01_25_core/packages/xdc/template.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/template.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/om2.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/om2.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/xmlgen.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/xmlgen.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/xmlgen2.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/xmlgen2.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/Warnings.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/Warnings.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/IPackage.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/IPackage.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/package.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/package.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/global/Clock.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/global/Clock.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/global/Trace.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/global/Trace.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/bld.js:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/bld.js
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/BuildEnvironment.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/BuildEnvironment.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/PackageContents.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/PackageContents.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/_gen.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/_gen.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Library.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Library.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Executable.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Executable.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Repository.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Repository.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Configuration.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Configuration.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Script.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Script.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Manifest.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Manifest.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Utils.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/Utils.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITarget.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITarget.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITarget2.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITarget2.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITarget3.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITarget3.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITargetFilter.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/ITargetFilter.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/package.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/bld/package.xs
package.mak: config.bld
C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/ITarget.xs:
package.mak: C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/ITarget.xs
C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/C28_large.xs:
package.mak: C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/C28_large.xs
C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/C28_float.xs:
package.mak: C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/C28_float.xs
C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/package.xs:
package.mak: C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/package.xs
C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/arm/elf/IArm.xs:
package.mak: C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/arm/elf/IArm.xs
C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/arm/elf/package.xs:
package.mak: C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/arm/elf/package.xs
package.mak: package.bld
C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/compiler.opt.xdt:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/compiler.opt.xdt
C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/io/File.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/io/File.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/io/package.xs:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/services/io/package.xs
C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/compiler.defs.xdt:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/compiler.defs.xdt
C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/custom.mak.exe.xdt:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/custom.mak.exe.xdt
C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/package.xs.xdt:
package.mak: C:/ti/xdctools_3_30_01_25_core/packages/xdc/tools/configuro/template/package.xs.xdt
endif

ti.targets.arm.elf.M4F.rootDir ?= c:/ti/ccsv6/tools/compiler/arm_5.1.7
ti.targets.arm.elf.packageBase ?= C:/ti/tirtos_tivac_2_00_01_23/products/bios_6_40_01_15/packages/ti/targets/arm/elf/
.PRECIOUS: $(XDCCFGDIR)/%.oem4f
.PHONY: all,em4f .dlls,em4f .executables,em4f test,em4f
all,em4f: .executables,em4f
.executables,em4f: .libraries,em4f
.executables,em4f: .dlls,em4f
.dlls,em4f: .libraries,em4f
.libraries,em4f: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,em4f
	@$(ECHO) xdc .executables,em4f
	@$(ECHO) xdc .libraries,em4f
	@$(ECHO) xdc .dlls,em4f


all: .executables 
.executables: .libraries .dlls
.libraries: .interfaces

PKGCFGS := $(wildcard package.xs) package/build.cfg
.interfaces: package/package.xdc.inc package/package.defs.h package.xdc $(PKGCFGS)

-include package/package.xdc.dep
package/%.xdc.inc package/%_xconfig_principal.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package xconfig_principal" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

.dlls,em4f .dlls: principal.pem4f

-include package/cfg/principal_pem4f.mak
-include package/cfg/principal_pem4f.cfg.mak
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/principal_pem4f.dep
endif
principal.pem4f: package/cfg/principal_pem4f.xdl
	@


ifeq (,$(wildcard .libraries,em4f))
principal.pem4f package/cfg/principal_pem4f.c: .libraries,em4f
endif

package/cfg/principal_pem4f.c package/cfg/principal_pem4f.h package/cfg/principal_pem4f.xdl: override _PROG_NAME := principal.xem4f
package/cfg/principal_pem4f.c: package/cfg/principal_pem4f.cfg

clean:: clean,em4f
	-$(RM) package/cfg/principal_pem4f.cfg
	-$(RM) package/cfg/principal_pem4f.dep
	-$(RM) package/cfg/principal_pem4f.c
	-$(RM) package/cfg/principal_pem4f.xdc.inc

clean,em4f::
	-$(RM) principal.pem4f
.executables,em4f .executables: principal.xem4f

principal.xem4f: |principal.pem4f

-include package/cfg/principal.xem4f.mak
principal.xem4f: package/cfg/principal_pem4f.oem4f 
	$(RM) $@
	@$(MSG) lnkem4f $@ ...
	$(RM) $(XDCCFGDIR)/$@.map
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armlnk -w -q -u _c_int00 -fs $(XDCCFGDIR)$(dir $@).  -q -o $@ package/cfg/principal_pem4f.oem4f   package/cfg/principal_pem4f.xdl --silicon_version=7M4 --strict_compatibility=on -c -m $(XDCCFGDIR)/$@.map -l $(ti.targets.arm.elf.M4F.rootDir)/lib/libc.a
	
principal.xem4f: export C_DIR=
principal.xem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/;$(PATH)
principal.xem4f: Path:=$(ti.targets.arm.elf.M4F.rootDir)/bin/;$(PATH)

principal.test test,em4f test: principal.xem4f.test

principal.xem4f.test:: principal.xem4f
ifeq (,$(_TESTLEVEL))
	@$(MAKE) -R -r --no-print-directory -f $(XDCROOT)/packages/xdc/bld/xdc.mak _TESTLEVEL=1 principal.xem4f.test
else
	@$(MSG) running $<  ...
	$(call EXEC.principal.xem4f, ) 
endif

clean,em4f::
	-$(RM) .tmp,principal.xem4f,0,*


clean:: clean,em4f

clean,em4f::
	-$(RM) principal.xem4f
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@
principal_pem4f.oem4f,copy : package/cfg/principal_pem4f.oem4f
principal_pem4f.sem4f,copy : package/cfg/principal_pem4f.sem4f

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg .interfaces $(XDCROOT)/packages/xdc/cfg/Main.xs
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,xconfig_principal
xconfig_principal.tar: package/package.bld.xml
xconfig_principal.tar: package/build.cfg
xconfig_principal.tar: package/package.xdc.inc
ifeq (,$(MK_NOGENDEPS))
-include package/rel/xconfig_principal.tar.dep
endif
package/rel/xconfig_principal/xconfig_principal/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

xconfig_principal.tar: package/rel/xconfig_principal.xdc.inc package/rel/xconfig_principal/xconfig_principal/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/xconfig_principal.xdc.inc,package/rel/xconfig_principal.tar.dep)


release release,xconfig_principal: all xconfig_principal.tar
clean:: .clean
	-$(RM) xconfig_principal.tar
	-$(RM) package/rel/xconfig_principal.xdc.inc
	-$(RM) package/rel/xconfig_principal.tar.dep

clean:: .clean
	-$(RM) .libraries .libraries,*
clean:: 
	-$(RM) .dlls .dlls,*
#
# The following clean rule removes user specified
# generated files or directories.
#

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard package))
    $(shell $(MKDIR) package)
endif
ifeq (,$(wildcard package/cfg))
    $(shell $(MKDIR) package/cfg)
endif
ifeq (,$(wildcard package/lib))
    $(shell $(MKDIR) package/lib)
endif
ifeq (,$(wildcard package/rel))
    $(shell $(MKDIR) package/rel)
endif
ifeq (,$(wildcard package/internal))
    $(shell $(MKDIR) package/internal)
endif
endif
clean::
	-$(RMDIR) package

include custom.mak
