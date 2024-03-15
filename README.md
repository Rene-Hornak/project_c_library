This is the way how to compile this program.
Folder gameplay is dependant on folder other_components, so this is the way how to do it.


# Compile screen_utils
gcc -c -o screen_utils.o other_components/screen_utils.c -Iother_components

    -c flag compiles the source file screen_utils.c into an object file screen_utils.o.
    -o screen_utils.o specifies the output file name for the compiled object file.
    other_components/screen_utils.c is the path to the source file.
    -Iother_components tells the compiler to look for header files in the other_components directory.

# Compile gameplay and link screen_utils
gcc -c -o gameplay.o gameplay/gameplay.c -Igameplay -Iother_components

    Similar to the previous command, this compiles gameplay.c into gameplay.o.
    -Igameplay and -Iother_components specify directories containing header files.



gcc -o game main.c gameplay.o screen_utils.o -Igameplay -Iother_components

    -o game specifies the output executable name.
    main.c is your main program source file.
    gameplay.o and screen_utils.o are the compiled object files.
    -Igameplay and -Iother_components specify directories containing header files.