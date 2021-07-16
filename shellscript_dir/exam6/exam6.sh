# selectを用いてlist, delete, rename, show, exitの中から処理を選択。
# list -> ファイル一覧表示。
# delete -> 削除するファイルを入力して削除。
# rename -> ファイルを選択し、名前を変更。
# show -> 表示するファイルを入力 -> ファイルの中身を表示。
# exit -> 処理を終了。

#!/bin/bash

select command in "list" "delete" "rename" "show" "exit"
do
	case $command in
	"list")
		ls;;
	"delete")
		ls
		read -p "Enter file name you want to delete: " file_name
		if [ -f $file_name ];
		then
			rm $file_name
		fi;;
	"rename")
		ls
		read -p "Enter file name you want to rename: " file_name
		read -p "Enter new file name: " new_file_name
		if [ -f $file_name ];
		then
			mv $file_name $new_file_name
		fi;;
	"show")
		ls
		read -p "Enter file name you want to see: " file_name
		if [ -f $file_name ];
		then
			cat $file_name
		fi;;
	"exit")
		break;;
	esac
done

exit 0