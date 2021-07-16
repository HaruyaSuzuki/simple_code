# exam4の処理を関数化

#!/bin/bash

function calc_sum() {
	sum=0
	while read p;
	do
		sum=$(( sum + p ))
	done < $1
	echo sum: $sum
	exit 0
}

function calc_avg() {
	sum=0
	count=0
	while read p;
	do
		sum=$(( sum + p ))
		count=$(( count + 1 ))
	done < $1
	echo avg: $(( sum / count ))
	exit 0
}

function calc_min() {
	min=100
	while read p;
	do
		if [ $min -gt $p ];
		then
			min=$p
		fi
	done < $1
	echo min: $min
	exit 0
}

function calc_max() {
	max=1
	while read p;
	do
		if [ $max -lt $p ];
		then
			max=$p
		fi
	done < $1
	echo max: $max
	exit 0
}

read -p "ファイル名を入力してください" file_name

if [ -f $file_name ];
then
	read -p 'sum, avg, min, max, exit' command
	if [ $command = "sum" ];
	then
		calc_sum $file_name
	elif [ $command = "avg" ];
	then
		calc_avg $file_name
	elif [ $command = "min" ];
	then
		calc_min $file_name
	elif [ $command = "max" ];
	then
		calc_max $file_name
	elif [ $command = "exit" ];
	then
		exit 0
	else
		echo "その様なコマンドは存在しません"
		exit 1
	fi
else
	echo "ファイルが存在しません"
	exit 1
fi
exit 0