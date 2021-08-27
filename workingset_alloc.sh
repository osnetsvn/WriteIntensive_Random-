#!/bin/bash

working_set=(100 200 300 400 500 600 700 800 900)
for i in ${working_set[@]}; do
	 ./a.out $[i]
	echo  $[i]
done
exit 0
