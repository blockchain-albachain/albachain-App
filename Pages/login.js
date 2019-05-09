var Observable = require('FuseJS/Observable');

var individualID = Observable("");
var individualPW = Observable("");
var businessID = Observable("");
var businessPW = Observable("");


function individualSignup(){
	router.push("signupInd");
	console.log("Move to SignUp");
}

function individualSignin(){
	router.push("mainviewInd");
	// var opts = ({
 //            	'userid' : individualID.value,
 //             'password' : individualPW.value
 //              });

	// console.log(JSON.stringify(opts));
 //    console.log('sign'); //Sign_in 함수가 호출되었는지 확인
 

	// fetch('http://8dc06cfa.ngrok.io/users/login',{
	//             method: "POST",
	//             headers: {
	//             	"Content-type": "application/JSON"
	//             },
	//             body : JSON.stringify(opts)
	
	//         }).then((res)=>{
	//             // console.log(JSON.stringify(res));
	//             // console.log(JSON.parse(res));
	//             return res.json()
	// 		}).then((res)=>{

	//             console.log(res.success);


	//             individualID = individualID.value;

	//             if( JSON.parse(res.success) == true){
	//             	// router.push("Home", ID);
	//             	router.push("mainviewInd", individualID);
	//             	console.log("Move to mainviewInd");
	//             	console.log(individualID);
	//             }
	//             // JSON.parse(res._bodyInit).documents[1].address_name
	//         }).catch((err)=>{
	//             console.log(err);
	//         });
}


function businessSignup(){
	router.push("signupBis");
	console.log("Move to SignUp");
}

function businessSignin(){
	router.push("mainviewBis");
	// var opts = ({
	// 	'username' : businessID.value,
	// 	'password' : businessPW.value
	// });

	// console.log(JSON.stringify(opts));
 //    console.log('sign'); //Sign_in 함수가 호출되었는지 확인
    

 //    fetch('http://8dc06cfa.ngrok.io/users/login',{
 //    	method: "POST",
 //    	headers: {
 //    		"Content-type": "application/JSON"
 //    	},
 //    	body : JSON.stringify(opts)
    	
 //    }).then((res)=>{
	//             // console.log(JSON.stringify(res));
	//             // console.log(JSON.parse(res));
	//             return res.json()
	//         }).then((res)=>{

	//         	console.log(res.success);


	//         	businessID = businessID.value;

	//         	if( JSON.parse(res.success) == true){
	//             	// router.push("Home", ID);
	//             	router.push("mainviewBis", businessID);
	//             	console.log("Move to mainviewBis");
	//             	console.log(businessID);
	//             }
	//             // JSON.parse(res._bodyInit).documents[1].address_name
	//         }).catch((err)=>{
	//         	console.log(err);
	//         });
	    }


	    module.exports = {
	    	individualID : individualID,
	    	individualPW : individualPW,
	    	businessID : businessID,
	    	businessPW : businessPW,
	    	individualSignup : individualSignup,
	    	individualSignin : individualSignin,
	    	businessSignup : businessSignup,
	    	businessSignin : businessSignin

	    };