
# Ext2 Filesystem

Ext2 file system operated through shell command at the application level.

## Getting started

### Execute 

Download source file and execute shell.exe

```

git clone https://github.com/yyjin97/ext2-filesystem.git
cd ext2-filesystem
make
./shell

```
Immediately after executing the program, you must initialize and mount the ext2 file system by executing the _'format'_ command and the _'mount'_ command in order.

## Command description

This program can execute the following shell commands.

- format
- mount
- mkdir / mkdirst
- touch / fill
- cat 
- ls 
- cd
- mv
- df
- chmod
- rm / rmdir
- exit / quit

The description and execution result of each command are as follows.

### format / mount

These two commands must be executed first immediately after program execution.
![mountt](https://user-images.githubusercontent.com/26455575/92274777-cb7e3e00-ef28-11ea-830b-c1882dfb5928.png)

### mkdir / mkdirst

Command to create a new directory.
![mkdirst](https://user-images.githubusercontent.com/26455575/92274556-70e4e200-ef28-11ea-83f6-509c694d715b.png)

### touch /fill
The touch command creates an empty file, and the fill command creates a file of the given size.

### cat 
Command to print the contents of a file.
![cat](https://user-images.githubusercontent.com/26455575/92274548-6cb8c480-ef28-11ea-8102-8503cf140960.png)

### ls
Command to display a list of all files in the current directory.
There are four options available for this command.

- a (all) : Include hidden files (sort by file name)
- l (long) : Include detailed file information
- S (size) : Sort by file size
- r (reverse) : Reverse file name order

You can also use two or more options together.
![ls](https://user-images.githubusercontent.com/26455575/92274555-704c4b80-ef28-11ea-984b-837d65d980b5.png)

### cd
Command to change the current directory.
![lscd](https://user-images.githubusercontent.com/26455575/92275991-244ed600-ef2b-11ea-83bd-69b0134d97cd.png)
### mv
Command to move a file to another directory.
![mv](https://user-images.githubusercontent.com/26455575/92274559-717d7880-ef28-11ea-8320-9672d36a440a.png)
### df
Command to check the remaining disk space.
![df](https://user-images.githubusercontent.com/26455575/92276178-755eca00-ef2b-11ea-9a10-a5580f2cbce7.png)

### chmod
Command to change the permissions of files and directories.
![chmod](https://user-images.githubusercontent.com/26455575/92274552-6fb3b500-ef28-11ea-9866-eeedc2e4fd70.png)

### rm / rmdir
Command to remove files / directories.
![rmrmdir](https://user-images.githubusercontent.com/26455575/92274562-717d7880-ef28-11ea-9052-1c0553e9139b.png)

### exit / quit
Command to terminate the program.
![exit](https://user-images.githubusercontent.com/26455575/92276400-db4b5180-ef2b-11ea-898d-06fdd1809c34.png)
