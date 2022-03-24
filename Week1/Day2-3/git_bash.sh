###################
#Dalibor Cuturic
# assignment Day 3
###################
#!/bin/bash
folder="/home/dcuturic/Programming/GitHub/cpp-boot-camp/Week1/Day2-3"

cdtofolder="cd $folder"
echo "Git folder = $folder"

gpull="git pull"
$gpull

filenames=`ls $folder/*.cpp`
for eachfile in $filenames
do
	echo "Compiling: $eachfile"
	#echo "${eachfile%.*}"
	file_noext="${eachfile%.*}"
	rungcc="g++ $eachfile -o $file_noext"
	$rungcc
	runfile="$file_noext"
	echo "Running $file_noext"
	$runfile
done