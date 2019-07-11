var Observable = require('FuseJS/Observable');

var content = Observable("");

exports.itemCon = Observable()
exports.isLoadingCon = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

svp.check()
function loadSome() {
	// fetch('http://18.224.213.239:8000/contract/contractPush',{
	fetch('http://97e78588.ngrok.io/contract/contractPush',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			for(var i in res){
				if(res[i].checking == 0){
					exports.itemCon.add(createConPage(res[i].pay, res[i].workingDay, res[i].workingTime, res[i].account,res[i].store_number, res[i].userid));		
				}
			}
			
			exports.isLoadingCon.value = false;

		}).catch((err)=>{
			console.log(err);
			if(err == "TypeError: Network request failed" ){
				// NetworkError.value = true;
				console.log("dsfadfas");
				exports.isLoadingCon.value = false;
			}
		});
}

// for문과 합치게 되면 마지막 데이터만 들어가는 문제 발생하기 때문에 반드시 createPage로 분리 시켜줘야한다.
function createConPage(pay, workingDay, workingTime, account,store_number, userid) {
	return {
		pay : pay,
		workingDay: workingDay,
		workingTime : workingTime,
		userid : userid,
		
		gotoDetailCon: function() {
			router.push("detailCheckPage", { pay : pay, workingDay : workingDay, workingTime : workingTime, account : account, store_number:store_number, userid : userid})
		}
	};

}

// exports.gotoDetailCon =  function() {
// 			router.push("detailCheckPage")
// 		}

var maxSimulatedDelay = 1.5
var minSimulatedDelay = 0.25

exports.loadMoreCon = function() {
	if (exports.isLoadingCon.value) {
		return
	}
	exports.isLoadingCon.value = true
	
	//simulate a delay in loading data from a remote request
	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 )
}
