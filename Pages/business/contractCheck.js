var Observable = require('FuseJS/Observable');

var content = Observable("");

exports.itemCon = Observable()
exports.isLoadingCon = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

svpCon.check()
function loadSome() {

	exports.itemCon.add( {
		name : "김보성",
		content : "화, 목, 일",
		expense : addComma(10000),
		gotoDetailCon: function() {
			content.value = "화, 목, 일";
			router.push("detailContract", { name: "김보성", content: content.value, expense: addComma(100000)})
		}
	})
	
	exports.isLoadingCon.value = false	
}


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
