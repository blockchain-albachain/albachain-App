var Observable = require('FuseJS/Observable');

var content = Observable("");

exports.items = Observable()
exports.isLoading = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

svp.check()
function loadSome() {

	// exports.itemCon.add( {
	// 	name : "김보성",
	// 	content : "화, 목, 일",
	// 	expense : addComma(10000),
	// 	gotoDetailCon: function() {
	// 		content.value = "화, 목, 일";
	// 		router.push("detailContract", { name: "김보성", content: content.value, expense: addComma(100000)})
	// 	}
	// })
	// fetch('http://6b66903f.ngrok.io/contract/contractPush',{
	fetch('http://97e78588.ngrok.io/contract/contractPush',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			for(var i in res){

				exports.items.add(createManagePage(res[i].pay, res[i].workingDay, res[i].workingTime, res[i].account,res[i].store_number, res[i].userid));		

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
function createManagePage(pay, workingDay, workingTime, account,store_number, userid) {
	return {
		pay : pay,
		workingDay: workingDay,
		workingTime : workingTime,
		userid : userid,
		
		gotoManageDetails: function() {
			router.push("detailManage", { pay : pay, workingDay : workingDay, workingTime : workingTime, account : account, store_number:store_number, userid : userid})
		}
	};

}

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
