# 引数は2つ
# 第一引数は性別(man, woman), 第二引数は年齢(age)
# 第一引数がman -> Man, woman -> Womanと表示。
# 第二引数が20未満 -> Child, 20以上60未満 -> Adult, 60以上 -> Elderlyと表示。
# 標準出力はコロンで繋ぐ。(例 Man:Adult)

# 以下の場合はexit 1で終了。
# 引数が2つでない
# 第一引数がman, woman以外
# 第二引数が0以上でない



#!/bin/bash

if [ $# -ne 2 ];
then
	exit 1;
fi

GENDER=$1;
AGE=$2;

if [ $2 -lt 0 ];
then
	exit 1;
fi

if [ $GENDER = "man" ];
then
	GENDER_ANS="Man";
elif [ $GENDER = "woman" ];
then
	GENDER_ANS="Woman";
else
	exit 1;
fi

if [ $AGE -lt 20 ];
then
	AGE_ANS="Child";
elif [ 20 -le $AGE ] && [ $AGE -lt 60 ];
then
	AGE_ANS="Adult";
else
	AGE_ANS="Elderly";
fi

echo "$GENDER_ANS:$AGE_ANS";

exit 0;

# メモ: バッシュファイル内のechoに-nを使っても改行されないので、
