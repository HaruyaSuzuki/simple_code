# 1~100までループ。
# 数値が3の倍数 -> 数値: Fizzと表示。
# 数値が5の倍数 -> 数値: Buzzと表示。
# 数値が15の倍数 -> 数値: FizzBuzzと表示。
# 上の条件に満たされないもの -> 数値のみ表示。
# for, while, untilそれぞれを使用して作成する。

#!/bin/bash

index=1;

while (( index <= 100 ));
do
	if [ $((index%3)) -eq 0 ] && [ $((index%5)) -eq 0 ];
	then
		echo $index: FizzBuzz;
	elif [ $((index%3)) -eq 0 ];
	then
		echo $index: Fizz;
	elif [ $((index%5)) -eq 0 ];
	then
		echo $index: Buzz;
	else
		echo $index;
	fi
	index=$((index + 1));
done

exit 0;
