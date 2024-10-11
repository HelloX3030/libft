import os

def iterate_over_c_files(directory='.'):
    output_file = 'function_prototypes.txt'
    
    # Open the output file in write mode (will overwrite if exists)
    with open(output_file, 'w') as output:
        for root, _, files in os.walk(directory):
            for file in files:
                if file.endswith(".c"):
                    filepath = os.path.join(root, file)
                    extract_function_lines(filepath, output)

def extract_function_lines(filepath, output):
    base_data_types = [
        'int', 'char', 'size_t', 'void', 'float', 'double', 'long', 'short', 
        'unsigned', 'bool', 'int8_t', 'int16_t', 'int32_t', 'int64_t', 
        'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', 'uintptr_t', 
        'intptr_t', 'ptrdiff_t', 'ssize_t', 'FILE', 'time_t', 'clock_t', 'struct'
    ]
    
    avoid_strs = [';', 'static', 'main', 'while', 'if']
    
    with open(filepath, 'r') as file:
        lines = file.readlines()

    inside_block_comment = False
    multi_line_function = ""
    
    for line in lines:
        stripped_line = line.strip()

        # Handle block comments
        if "/*" in stripped_line:
            inside_block_comment = True
        if "*/" in stripped_line:
            inside_block_comment = False
            continue
        
        # Skip single-line comments or lines inside block comments
        if stripped_line.startswith("//") or inside_block_comment:
            continue

        # Skip lines with avoidable strings (static, main, while, if)
        if any(avoid in stripped_line for avoid in avoid_strs):
            continue

        # Check if the line contains a data type and function characters '(' or ')'
        if any(data_type in stripped_line for data_type in base_data_types):
            # If it's a multi-line function (no closing parenthesis), accumulate the lines
            if '(' in stripped_line and ')' not in stripped_line:
                multi_line_function += stripped_line + " "
                continue

            # Add the closing part of the multi-line function and reset
            if ')' in stripped_line and multi_line_function:
                multi_line_function += stripped_line
                output.write(f"{multi_line_function.strip()};\n")
                multi_line_function = ""  # Reset
            # Handle single-line functions
            elif '(' in stripped_line and ')' in stripped_line:
                output.write(f"{stripped_line.strip()};\n")

# Use the current directory as the default
iterate_over_c_files()
