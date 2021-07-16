# 1列に1つずつ1~100までの数字を並べたファイルを作成。(必ず1つ以上の数値が入っていることを前提)
# ユーザから標準入力を受け、ファイルの存在を確認する。
# さらに標準入力を受け取り、その標準入力がsumの場合はファイルの合計を計算。
# avg: 平均値, min: 最小値, max: 最大値, exit: 終了

#!/bin/bash

read -p "ファイル名を入力してください" file_name

if [ -f $file_name ];
then
	read -p 'sum, avg, min, max, exit' command
	if [ $command = "sum" ];
	then
		sum=0
		while read p;
		do
			sum=$(( sum + p ))
		done < $file_name
		echo sum: $sum
		exit 0
	elif [ $command = "avg" ];
	then
		sum=0
		count=0
		while read p;
		do
			sum=$(( sum + p ))
			count=$(( count + 1 ))
		done < $file_name
		echo avg: $(( sum / count ))
		exit 0
	elif [ $command = "min" ];
	then
		min=100
		while read p;
		do
			if [ $min -gt $p ];
			then
				min=$p
			fi
		done < $file_name
		echo min: $min
		exit 0
	elif [ $command = "max" ];
	then
		max=1
		while read p;
		do
			if [ $max -lt $p ];
			then
				max=$p
			fi
		done < $file_name
		echo max: $max
		exit 0
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