import magic
import os

targetFolders = [
    "Content",
    "Source"
]

validTags = {
    "material" : "M",
    "particle" : "P",
    "mesh"     : "SM",
    "blueprint": "BP",
    
}

rootdir = 'C:/Users/yuisa/OneDrive/Documents/Unreal Projects/FastPacedFPSGame'

def get_file_type(file_path):
    try:
        mime = magic.Magic(mime=True)
        file_type = mime.from_file(file_path)
        return file_type
    except Exception as e:
        print("Error:", e)
        return None
    
for subdir, dirs, files in os.walk(rootdir):

    #filter out folders we want
    for target in targetFolders:
        if subdir.__contains__(target):
            for file in files:

                if file.__contains__('.uasset'):

                    idx = file.find('_')

                    if idx == -1:
                        print("NO_TAG: " + file)
                    else:
                        substr = file[0:idx:1]
                        if substr not in validTags.values():
                            print ("INVALID TAG: ")
                            print (substr + " " + file)
