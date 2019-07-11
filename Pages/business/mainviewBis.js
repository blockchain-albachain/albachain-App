var Observable = require('FuseJS/Observable');

exports.items = Observable();
exports.isLoading = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}


svp.check();


function loadSome(){
	// fetch('http://18.224.213.239:8000/mregistration/Mstorepush',{
	fetch('http://97e78588.ngrok.io/mregistration/Mstorepush',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			for(var i in res){

				exports.items.add(createPage(res[i].store_name,res[i].call_number,res[i].store_number, res[i].address, res[i].business_number));		

			}
			
			exports.isLoading.value = false;

		}).catch((err)=>{
			console.log(err);
			if(err == "TypeError: Network request failed" ){
				// NetworkError.value = true;
				console.log("dsfadfas");
				exports.isLoading.value = false;
			}
		});
	}



// for문과 합치게 되면 마지막 데이터만 들어가는 문제 발생하기 때문에 반드시 createPage로 분리 시켜줘야한다.
function createPage(storename, callnumber, storenumber, address) {
	return {
		storename : storename,
		callnumber: callnumber,
		storenumber : storenumber,
		
		gotoDetails: function() {
			router.push("detailStore", { storename : storename, callnumber : callnumber, storenumber : storenumber, address : address})
		}
	};
}


// 로딩창
var maxSimulatedDelay = 1.5
var minSimulatedDelay = 0.25
exports.loadMore = function() {
	if (exports.isLoading.value) {
		return
	}
	exports.isLoading.value = true
	
	//simulate a delay in loading data from a remote request
	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 )
}


exports.gocontract = function () {
	router.push("registration");
}

exports.gotoHome = function (){
	console.log("goto mainviewBis")
	router.goto("mainviewBis");
	svp.check();

}

exports.gotocontract = function (){
	console.log("goto contractCheck")
	router.goto("contractCheck");
}

exports.gotomanage = function (){
	console.log("goto manage")	
	router.goto("manage");
}
