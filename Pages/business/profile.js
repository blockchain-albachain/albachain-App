var Observable = require('FuseJS/Observable');

var coin = Observable(0);
coinState();
coinUpState();

function restart() {
	coinState();
	coinUpState();
}

// 사장 계좌 잔액 보여주기
function coinState(){
	// fetch('http://18.224.213.239:8000/smartContract/balance',{
	fetch('http://97e78588.ngrok.io/smartContract/balance',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			console.log(JSON.stringify(res));
			coin.value = res.result;

		}).catch((err)=>{
			console.log(err);
			if(err == "TypeError: Network request failed" ){
				// NetworkError.value = true;
				console.log("dsfadfas");
			}
		});
	}


var address = "0x7Cd4973E04899dC19b70EFCFf3B9Fea957d1a7E3"; // 알바생 계좌번호
var sendCoin = Observable(""); // 보낼 코인 수

// 코인 올리기
function coinUp(){
	// fetch('http://18.224.213.239:8000/smartContract/setinfo/'+address+'/'+sendCoin.value,{
		fetch('http://97e78588.ngrok.io/smartContract/setinfo/'+address+'/'+sendCoin.value,{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			if(res.result == true){
				console.log("coinup success");
				coinUpState();
				// router.push("manage");
			}

		}).catch((err)=>{
			console.log(err);
			if(err == "TypeError: Network request failed" ){
				// NetworkError.value = true;
				console.log("dsfadfas");
			}
		});
	}

var upCoin = Observable(0);
// 스마크 컨트렉트에 올라간 코인 현황
function coinUpState(){
	// fetch('http://18.224.213.239:8000/smartContract/coin',{
	fetch('http://97e78588.ngrok.io/smartContract/coin',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			console.log(res);
			upCoin.value = res;

		}).catch((err)=>{
			console.log(err);
			if(err == "TypeError: Network request failed" ){
				// NetworkError.value = true;
				console.log("dsfadfas");
			}
		});
	}






module.exports = {
	coinState : coinState,
	coin : coin,
	sendCoin : sendCoin,
	coinUp : coinUp,
	coinUpState : coinUpState,
	upCoin : upCoin,
	restart : restart
};