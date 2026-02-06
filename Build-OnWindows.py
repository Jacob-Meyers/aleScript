import os
import glob
import shutil

print("building...")

if (os.path.isdir("build")):
    shutil.rmtree("build")

os.mkdir("build")

search_pattern = os.path.join("src", "*.cpp")
files_list = glob.glob(search_pattern)
files_string = " ".join(files_list)

os.system(f"g++ -o ./build/alescript {files_string}")
