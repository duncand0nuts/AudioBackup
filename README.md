# TABs - Tool for Audio Backups

A tool to backup all audio files from a user's computer.

# The Big Picture

The age of streaming audio is upon us, but many people still have to deal with audio files for one purpose or another.
I have had years of having fellow DJs put their tracks all over the place on my computer and downloading things to various 
different directories, and I am assuming that there are other producers and DJs who are the same.  

The age of abundant affordable storage is also upon us though, and this tool will make it easier for people who need backups
of their audio files in case of data failure.  It will also work for people who are upgrading drives or operating systems
and want to keep their precious music collection intact.

# Design

The proposed design starts with a recursive directory traversal from the root of a target disk.  
The relevant files will be identified by extension, and their paths will be added to a queue.  A thread will fetch
paths from the queue and copy the files to a specified backup location.  

# Implementation

# Extra Features
