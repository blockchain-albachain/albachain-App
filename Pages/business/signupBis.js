var Observable = require('FuseJS/Observable');

var newID = Observable("");
var newPW = Observable("");
var newName = Observable("");
var dayOfbirth = Observable("");
var sex = Observable("");
var phoneNum = Observable("");
var businessNum = Observable("");

function goBack()
{
	router.goBack();
    console.log("goback");
}

function Save(){
    console.log('UPID'); //Sign_in 함수가 호출되었는지 확인

	fetch('http://69e16e34.ngrok.io/musers/Msignup',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/json"
	            },
	            body : JSON.stringify({
	            	'id' : newID.value,
	                'password' : newPW.value,
	                'name' : newName.value,
	                'gender' : sex.value,
					'birth' : dayOfbirth.value,
					'phone_number' : phoneNum.value,
					'business_number' : businessNum.value
	              })
	        }).then((res)=>{ return res.json()
	        }).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )
	            console.log(JSON.stringify(res));
	            console.log(res.success);

	            if( JSON.parse(res.success) == true){
	            	router.push("login");
	            	console.log("Move to Login");
	            }


	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });




}


module.exports = {
	newID : newID,
	newPW : newPW,
	newName : newName,
	Save : Save,
	goBack : goBack,
	dayOfbirth : dayOfbirth,
	sex : sex,
	phoneNum : phoneNum,
	businessNum : businessNum
};