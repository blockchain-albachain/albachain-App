var Observable = require('FuseJS/Observable');

var RandomNumber = Observable("- - - - - - -");
var BusinessNumber = Observable();
var StoreName = Observable("");
var StoreNumber = Observable();
var Address = Observable("");

function goBack() {
	router.goBack();
}

function submit(){
	// router.push("mainviewBis");
	var opts = ({
            	'business_number' : BusinessNumber.value,
             	'store_name' : StoreName.value,
             	'call_number' : StoreNumber.value,
             	'address' : Address.value,
             	'store_number' : RandomNumber.value
              });

	console.log(JSON.stringify(opts));
    console.log('submit'); //Sign_in 함수가 호출되었는지 확인
 

	// fetch('http://18.224.213.239:8000/mregistration/Mstoreup',{
		fetch('http://97e78588.ngrok.io/mregistration/Mstoreup',{		
	            method: "POST",
	            headers: {
	            	"Content-type": "application/JSON"
	            },
	            body : JSON.stringify(opts)
	
	        }).then((res)=>{
	            // console.log(JSON.stringify(res));
	            // console.log(JSON.parse(res));
	            return res.json()
			}).then((res)=>{

	            console.log(res.success);


	            // individualID = individualID.value;

	            if( JSON.parse(res.success) == true){
	            	// router.push("Home", ID);
	            	router.push("mainviewBis");
	            	console.log("Move to mainviewBis");
	            	// console.log(individualID);
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });
}


// 랜덤 함수(정수)
function makeRandom(min, max){
    var RandVal = Math.floor(Math.random()*(max-min+1)) + min;
    return RandVal;
}

function clickRandom(){
	RandomNumber.value = makeRandom(1000000,9999999);
	console.log(RandomNumber);
}




module.exports = {
	submit : submit,
	goBack : goBack,
	RandomNumber : RandomNumber,
	clickRandom : clickRandom,
	BusinessNumber : BusinessNumber,
	StoreNumber : StoreNumber,
	StoreName : StoreName,
	Address : Address
};