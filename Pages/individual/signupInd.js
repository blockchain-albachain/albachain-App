var Observable = require('FuseJS/Observable');

var newID = Observable("");
var newPW = Observable("");
var newName = Observable("");
var dayOfbirth = Observable();
var sex = Observable();
var phoneNum = Observable();

function goBack()
{
	router.goBack();
}

function Save(){
	
	// fetch('http://18.224.213.239:8000/users/signup',{
	fetch('http://97e78588.ngrok.io/users/signup',{
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
			'phone_number' : phoneNum.value
		})
	}).then((res)=>{ return res.json()
	}).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )
	            console.log("received the JSON" + JSON.stringify(res));
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
	    	dayOfbirth : dayOfbirth,
	    	sex : sex,
	    	phoneNum : phoneNum,
	    	Save : Save,
	    	goBack : goBack
	    };