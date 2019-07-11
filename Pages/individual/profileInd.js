var Observable = require('FuseJS/Observable');

var coin = Observable();
coinState();

function click() {
coinState();

};

// 알바생 잔액 확인
function coinState(){
	// fetch('http://18.224.213.239:8000/smartContract/alblance',{
	fetch('http://97e78588.ngrok.io/smartContract/alblance',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){
			coin.value = res.result;

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
	click : click
};
