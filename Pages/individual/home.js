var Observable = require('FuseJS/Observable');

var title = Observable();
var content = Observable();
var expense = 1200000;
var pin = 0;


exports.items = Observable()
exports.isLoading = Observable(false);

function addComma(num) {
  var regexp = /\B(?=(\d{3})+(?!\d))/g;
  return num.toString().replace(regexp, ',');
}

function loadSome() {
	// for (var i=0; i < 5; ++i ) {
	
	// 		exports.items.add( {
	// 			title : "한신포차",
	// 			content : "주 3회근무",
	// 			expense : addComma(expense),
			
	// 		})
	// }
	if(pin == 0){
		exports.items.add( {
				title : "한신포차",
				content : "주 3회근무",
				expense : addComma(expense),
			
			})
		pin = 1;
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
	
	if(pin == 1){
		return
	}
	exports.isLoading.value = true
	
	//simulate a delay in loading data from a remote request
	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 )
}