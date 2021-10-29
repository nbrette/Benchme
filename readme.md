# Benchme  

## Description  
This program generates a benchmark for sorting algorithm timing depending on the size of the array it sorts.
The algorithms used are:
- bubble sort
- heap sort
- insertion sort
- selection sort

Each algorithm is tested 3 times for each of these array sizes:
- 10²
- 10<sup>3</sup>
- 10<sup>4</sup>
- 10<sup>5</sup>

## Documentation  

The documention is generated with doxygen.

### Installation

for ubuntu/debian:  
`sudo apt-get install doxygen`  

### Generate documentation

To generate documentation:  
`make doc`  
Open the file `/html/index.html` to check the documentation

## Run
To compile:  
`make`  
To run:  
`./output/benchme`  
or to choose output filename:  
`./out/benchme output.csv`  
The csv contains the statistics

