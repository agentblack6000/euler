"""
C File Spawner
Creates C files with the specified name for regular programs or exercises with a main function.
"""

from argparse import ArgumentParser

ENCODING="utf-8"

def main():
    """Parses command line arguments and creates specified file"""

    # Create argument parser
    parser = ArgumentParser(description="Create C files to implement Project Euler problems with" + 
                            " some boilerplate code.")

    # Add flags
    parser.add_argument("-n", "--name", nargs=1, metavar=("file_name"), dest="name")

    # Parse command line arguments
    args = parser.parse_args()

    # Call relavent methods, otherwise print help
    if args.name is not None:
        file_name = args.name[0]
        create_euler_file(name=file_name)
    else:
        parser.print_help()
        parser.exit()

def create_euler_file(name):
    """Creates a regular file with specified name and a main function"""
    # Creates file
    with open(f"{name}.c", "w", encoding=ENCODING) as file:
        write_main_function(file)


def write_main_function(file):
    """Writes the standard I/O C library and a main function to file"""

    # Includes header files
    file.write("#include <stdio.h>\n\n")

    # Creates space for program documentation
    file.write("/*\n\n")
    file.write("*/\n\n")

    # Creates main function
    file.write("int main(void)\n")
    file.write("{\n\n")
    file.write("}")

if __name__ == "__main__":
    main()
