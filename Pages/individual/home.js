var Observable = require('FuseJS/Observable');

var test = Observable();
var title = Observable();
var content = Observable();
var expense = Observable();

exports.items = Observable()
exports.isLoading = Observable(false);

function loadSome() {

	for (var i=0; i < 5; ++i ) {
	
			exports.items.add( {
				title : "공모전 수상",
				content : "ROS",
				expense : 300000,
			})
	}
	
	exports.isLoading.value = false
	
	//ensure the ScrollViewPager knows to check it's state again
	svp.check()
}


var maxSimulatedDelay = 1.5
var minSimulatedDelay = 0.25
exports.loadMore = function() {
	//it's possible this gets called again before the previous loading is complete
	if (exports.isLoading.value) {
		return
	}
	exports.isLoading.value = true
	
	//simulate a delay in loading data from a remote request
	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 )
}