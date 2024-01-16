import os
import sys
from pathlib import Path
from filecmp import cmp

file1 = sys.argv[1]
file2 = sys.argv[2]

same = cmp(file1, file2, shallow = False)

print('the file is not corrupted: ', same)

