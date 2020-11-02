#/bin/bash

# this script clones a repository, master branch



git clone -b master https://github.com/tinachs/tch.git Assign2

# navigate to Assign1 

cd Assign2/w44d2/Assign1

#Run the make file 

make

#Export the library path

export LD_LIBRARY_PATH=.

# Run the code

./all








