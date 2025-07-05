#!/usr/bin/env python3

import os
import shutil

# Define paths
project_dir = os.getcwd()
source_file = os.path.join(project_dir, 'patch', 'setup_new.h')
target_file = os.path.join(project_dir, '.pio', 'libdeps', 'TDISPLAYS3', 'TFT_eSPI', 'User_Setup_Select.h')

# Check if source file exists
if not os.path.exists(source_file):
    print(f"Error: Source file {source_file} does not exist.", flush=True)
    exit(1)

# Check if target file exists
if not os.path.exists(target_file):
    print(f"Error: Target file {target_file} does not exist. Make sure the TFT_eSPI library is installed.", flush=True)
    exit(1)

# Copy the contents of setup_new.h to User_Setup_Select.h
try:
    shutil.copy2(source_file, target_file)
    print(f"Successfully updated {target_file} with contents from {source_file}", flush=True)
except Exception as e:
    print(f"Error updating file: {e}", flush=True)
    exit(1)
