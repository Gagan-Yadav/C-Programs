##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Stack_using_LinkList
ConfigurationName      :=Release
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/ASUS/OneDrive/Documents/My_programmes
ProjectPath            :=C:/Users/ASUS/OneDrive/Documents/My_programmes/Stack_using_LinkList
IntermediateDirectory  :=../build-$(ConfigurationName)/Stack_using_LinkList
OutDir                 :=../build-$(ConfigurationName)/Stack_using_LinkList
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ASUS
Date                   :=21/03/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Stack_using_LinkList/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Stack_using_LinkList" mkdir "..\build-$(ConfigurationName)\Stack_using_LinkList"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Stack_using_LinkList" mkdir "..\build-$(ConfigurationName)\Stack_using_LinkList"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Stack_using_LinkList/.d:
	@if not exist "..\build-$(ConfigurationName)\Stack_using_LinkList" mkdir "..\build-$(ConfigurationName)\Stack_using_LinkList"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ASUS/OneDrive/Documents/My_programmes/Stack_using_LinkList/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Stack_using_LinkList/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Stack_using_LinkList//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


