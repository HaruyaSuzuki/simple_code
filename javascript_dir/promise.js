
// Promiseを使わない場合の処理
// getGitUsernameは非同期の処理となっているため、インスタンス化を行なっている最中に次の処理へ行ってしまう。 -> 処理が終わっていないのに表示させるとundefinedとなる。
const getGitUsername = () => {
    const url = 'https://github.com/HaruyaSuzuki'
    fetch(url).then(res => res.json())//APIを叩く(非同期)
    .then(json => {
        console.log("非同期処理成功")
        return json.login
    }).catch(error => {
        console.log("非同期処理失敗", error)
        return null
    })
};

const username = getGitUsername()//getGitUsernameの処理が終わっていなくても次へ行ってしまう
console.log("userid ->" + username)



// Promiseを使用した際の処理
const getGitUsername = () => {
	return new Promise((resolve, reject) => {// 変更点
	const url = 'https://github.com/HaruyaSuzuki'

    fetch(url).then(res => res.json())//APIを叩く(非同期)
		.then(json => {
			console.log("非同期処理成功")
			return resolve(json.login)// 変更点
		}).catch(error => {
			console.log("非同期処理失敗", error)
			return reject(null)// 変更点
		})
	})
};
//getGitUsernameの処理が終わっていなくても次へ行ってしまう// 変更点
getGitUsername().then(username => {//.thenにはチェイン（繋げる）という意味があり、引数にはgetGitUsernameの戻り値をusernameで受け取ってから実行。
	console.log("userid ->" + username)
});



// Async, awaitを使用した際の処理
const getGitUsername = async () => {//非同期処理を伴う関数にasync
	const url = 'https://github.com/HaruyaSuzuki'

    const json = await fetch(url)//非同期処理を行う際にはawait
		.then(res => {
			console.log("非同期処理成功")
			return res.json()
		}).catch(error => {
			console.log("非同期処理失敗", error)
			return null// 変更点
		});
	console.log("userid ->" + username)
}
//getGitUsernameの処理が終わっていなくても次へ行ってしまう// 変更点
getGitUsername()