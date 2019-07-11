var Observable = require('FuseJS/Observable');

var title = Observable();
var content = Observable();
var expense = 1200000;
// var pin = 0;


console.log("Main : "+ userID);



exports.items = Observable()
exports.isLoading = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

svp.check()
// function loadSome() {

// 	exports.items.add( {
// 		title : "한신포차",
// 		content : "화, 목, 일",
// 		expense : addComma(100000),
// 		gotoDetails: function() {
// 			title.value = "한신포차";
// 			content.value = "화, 목, 일";
// 			// expense.value = addComma(100000);
// 			router.push("detailContractPage", { title: title.value, content: content.value, expense: addComma(100000)})
// 		}
// 	})

// 	exports.items.add( {
// 		title : "전통주막",
// 		content : "월, 화, 금",
// 		expense : addComma(120000),
// 		gotoDetails: function() {
// 			title.value = "전통주막";
// 			content.value = "월, 화, 금";
// 			router.push("detailContractPage", { title: title.value ,content: content.value ,expense: addComma(120000) })
// 		}
// 	})

	
// 	exports.isLoading.value = false	
// }

function loadSome(){
	// fetch('http://18.224.213.239:8000/contract/contractStorePush',{
	fetch('http://020b116e.ngrok.io/contract/contractStorePush',{
			method: "GET",
			headers: {
				"Content-type": "application/JSON"
			}

		}).then(function(res){
			return res.json();
		}).then(function(res){

			for(var i in res){
				if(res[i].checking == 1){
					if(res[i].store_number == 7233159){
						var storeName = "한신포차";
					} else if(res[i].store_number == 5803462){
							storeName = "전통주막";
					} else if(res[i].store_number == 3884534){
							storeName = "39포차";
					}
					exports.items.add(createPage(storeName, res[i].pay,res[i].workingDay,res[i].workingTime, res[i].account, res[i].store_number, res[i].period));		
					
				}
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
function createPage(storeName, pay, workingDay, workingTime, account, storenumber, period) {
	return {
		storeName : storeName,
		pay : pay,
		workingDay: workingDay,
		workingTime : workingTime,
		
		gotoDetails: function() {
			router.push("detailStore", { storeName : storeName, pay : pay, workingDay : workingDay, workingTime : workingTime, account : account, storenumber : storenumber, period : period})
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

exports.gocontract = function () {
	router.push("contract", userID);
}

// module.exports = {
// 	gocontract : gocontract
// };
