#!/bin/bash

if [ -d "Lab1_Dir" ]; then
  echo "Directory Lab1_Dir already exists."
else
  mkdir Lab1_Dir
  echo "Directory Lab1_Dir created."
fi

cd Lab1_Dir

if [ -f "testfile.txt" ]; then
  echo "File testfile.txt already exists."
else
  echo "hello world" > testfile.txt
  echo "File testfile.txt created."
fi

cat testfile.txt