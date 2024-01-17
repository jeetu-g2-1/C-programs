## gcc -save-temps filename.c
# It is the commnand to intermediate files
**1.Preprocessed File (source.i):**
>The preprocessed file contains the result of the preprocessing stage. The preprocessor handles tasks such as macro expansion, inclusion of header files, and 
 conditional compilation.

**2.Assembly File (source.s):**
 >The assembly file contains the result of the compilation stage. It represents the source code translated into assembly language, which is a low-level representation of the machine code instructions.

**3.Object File (source.o):**
>The object file contains the result of the assembly stage. It is a binary file that contains machine code instructions and data. Multiple object files can be combined during the linking stage to produce the final executable.

**4.Final Executable (Executable):**
>The final executable is the result of the linking stage. It is a binary file that can be executed directly by the operating system. The linker combines one or more object files along with necessary libraries to create the executable.
