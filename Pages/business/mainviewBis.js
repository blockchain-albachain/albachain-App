var Observable = require('FuseJS/Observable');

exports.items = Observable()
exports.isLoading = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

// svp.check()
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


// var maxSimulatedDelay = 1.5
// var minSimulatedDelay = 0.25
// exports.loadMore = function() {
// 	if (exports.isLoading.value) {
// 		return
// 	}
// 	exports.isLoading.value = true
	
// 	//simulate a delay in loading data from a remote request
// 	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
// 	setTimeout( loadSome, delay * 1000 )
// }

exports.gocontract = function () {
	router.push("registration");
}

exports.gotoHome = function (){
	router.goto("mainviewBis");
}

exports.gotocontract = function (){
	router.goto("contractCheck");
}

exports.gotomanage = function (){
	router.goto("manage");
}
