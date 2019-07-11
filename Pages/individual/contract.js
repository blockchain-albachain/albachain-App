var Observable = require('FuseJS/Observable');

var period = Observable("");
var pay = Observable();
var workingday = Observable("");
var workinghour = Observable("");
var accountNum = Observable();
var storeNum = Observable();

console.log("Contract : " + userID);


function goBack() {
	router.goBack();
}

function submit(){
	// router.push("mainviewInd");
	var opts = ({
            	'pay' : pay.value,
             	'workingDay' : workingday.value,
             	'workingTime' : workinghour.value,
             	'account' : accountNum.value,
             	'store_number' : storeNum.value,
             	'period' : period.value,
             	'userid' : userID
              });

	console.log(JSON.stringify(opts));
    console.log('sign'); //Sign_in 함수가 호출되었는지 확인
 

	// fetch('http://6b66903f.ngrok.io/contract/contractUp',{
	fetch('http://97e78588.ngrok.io/contract/contractUp',{

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


	            
	            if( JSON.parse(res.success) == true){
	            	// router.push("Home", ID);
	            	router.push("mainviewInd", userID);
	            	console.log("Move to mainviewInd");
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });
}

module.exports = {
	submit : submit,
	goBack : goBack,
	period : period,
	pay : pay,
	workingday : workingday,
	workinghour : workinghour,
	accountNum : accountNum,
	storeNum : storeNum
};