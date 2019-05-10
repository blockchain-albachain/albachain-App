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

	exports.items.add( {
		name : "김보성",
		content : "화, 목, 일",
		expense : addComma(10000),
		// gotoDetails: function() {
		// 	content.value = "화, 목, 일";
		// 	router.push("detailCheckPage", { name: "김보성", content: content.value, expense: addComma(100000)})
		// }
	})
	
	exports.isLoading.value = false	
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
