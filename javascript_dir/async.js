function call() {
	const res = fetch("/");
	console.log(res);
}
call();

async function call2() {// asyncを利用することでawaitが使える。
	const res = await fetch("/");
	const objs = await res.json();
	console.log(objs);
}
call2();