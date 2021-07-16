# 1~100までを1秒おきに(ファイル名: output_プロセスID.txt)に記入するシェルを作成する。
# start, stopを用いて実行、停止する。
# 引数 -> start ジョブを実行。ただし、既にジョブが動いている場合はalready runningとメッセージを送って終了。
# 引数 -> stop ジョブを終了。ただし、停止中の場合はNot runningと表示する。
# 引数 -> status ジョブの状態を確認。プロセスIDと共に状態を表示する。

#!/bin/bash

if [ $# -ne 1 ];
then
	echo "argument is wrong"
	exit 1
fi

function ft_stop(){
	rm exam7.lock
	exit 0
}

if [ $1 = "start" ];
then
	if [ -f "exam7.lock" ];
	then
		echo "Process is already running"
		exit 0
	else
		echo $$ > exam7.lock
		trap "ft_stop" 2 15
		for i in `seq 1 1000`;
		do
			echo $i >> output_$$.txt
			sleep 1
		done
		rm exam7.lock
		exit0
	fi
elif [ $1 = "stop" ];
then
	if [ -f "exam7.lock" ];
	then
		PID=-1
		while read p;
		do
			PID=$p
		done < "exam7.lock"
		kill -15 $PID
	else
		echo "Process is not running"
		exit 0
	fi
elif [ $1 = "status" ];
then
	if [ -f "exam7.lock" ];
	then
		PID=-1
		while read p;
		do
			PID=$p
		done < "exam7.lock"
		echo Process is running pid=$PID
	else
		echo "Process is not running"
	fi
else
	echo "wrong argument"
	exit 1
fi