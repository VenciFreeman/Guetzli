import os 
dir_name = "./imgs/" 
out_dir_name="./out/"
for root, dirs, files in os.walk(dir_name): 
    print("Read Catalog:",root)

#os.chdir(dir_name) 
for file in files:
    out_file=out_dir_name + file 
    file=dir_name + file
    print("Processing:",file,"==>",out_file) 
    cmd = "guetzli.exe --quality 85 " + file+ " " +out_file 
    os.system(cmd) 
