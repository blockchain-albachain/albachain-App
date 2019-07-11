var Observable = require('FuseJS/Observable');

var individualID = Observable("");
var individualPW = Observable("");
var businessID = Observable("");
var businessPW = Observable("");

var loginColorChange = Observable(false);

function indiChange(){
	loginColorChange.value = false;
}

function busiChange(){
	loginColorChange.value = true;
}


function individualSignup(){
	router.push("signupInd");
	console.log("Move to SignUp");
}

function individualSignin(){
	// router.push("mainviewInd");
	var opts = ({
             'username' : individualID.value,
             'password' : individualPW.value
              });

	// console.log(JSON.stringify(opts));
    // console.log('sign'); //Sign_in 함수가 호출되었는지 확인
 

	// fetch('http://7a06cc9f.ngrok.io/users/signin',{
 //            	'username' : individualID.value,
 //             'password' : individualPW.value
 //              });

	console.log(JSON.stringify(opts));
    console.log('sign'); //Sign_in 함수가 호출되었는지 확인
 

	// fetch('http://18.224.213.239:8000/users/signin',{
		fetch('http://020b116e.ngrok.io/users/signin',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/JSON"
	            },
	            body : JSON.stringify(opts)

	        }).then((res)=>{
	            return res.json()
			}).then((res)=>{

	            console.log(res.success);


	            userID = individualID.value;
	            console.log(individualID);

	            if( JSON.parse(res.success) == true){
	            	// router.push("Home", ID);
	            	router.push("mainviewInd",userID);
	            	console.log("Move to mainviewInd");
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });
}


function businessSignup(){
	router.push("signupBis");
	console.log("Move to SignUp");
}

function businessSignin(){
	// router.push("mainviewBis");
	var opts = ({
		'username' : businessID.value,
		'password' : businessPW.value
	});

	// console.log(JSON.stringify(opts));
    console.log('sign'); //Sign_in 함수가 호출되었는지 확인
    

    // fetch('http://18.224.213.239:8000/musers/Msignin',{
    fetch('http://020b116e.ngrok.io/musers/Msignin',{

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


	        	// businessID = businessID.value;

	        	if( JSON.parse(res.success) == true){
	            	// router.push("Home", ID);
	            	router.push("mainviewBis");
	            	console.log("Move to mainviewBis");
	            	console.log(businessID);
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	        	console.log(err);
	        });
	    }


	    module.exports = {
	    	individualID : individualID,
	    	individualPW : individualPW,
	    	businessID : businessID,
	    	businessPW : businessPW,
	    	individualSignup : individualSignup,
	    	individualSignin : individualSignin,
	    	businessSignup : businessSignup,
	    	businessSignin : businessSignin,
	    	loginColorChange : loginColorChange,
	    	indiChange : indiChange,
	    	busiChange : busiChange,


	    };


// var Observable = require('FuseJS/Observable');

// var individualID = Observable("");
// var individualPW = Observable("");
// var businessID = Observable("");
// var businessPW = Observable("");

// var loginColorChange = Observable(false);

// function indiChange(){
// 	loginColorChange.value = false;
// }

// function busiChange(){
// 	loginColorChange.value = true;
// }


// function individualSignup(){
// 	router.push("signupInd");
// 	console.log("Move to SignUp");
// }

// function individualSignin(){
// 	// router.push("mainviewInd");
// 	var opts = ({
//             	'username' : individualID.value,
//              'password' : individualPW.value
//               });

// 	console.log(JSON.stringify(opts));
//     console.log('sign'); //Sign_in 함수가 호출되었는지 확인
 

// 	fetch('http://69e16e34.ngrok.io/users/signin',{
// 	            method: "POST",
// 	            headers: {
// 	            	"Content-type": "application/JSON"
// 	            },
// 	            body : JSON.stringify(opts)
	
// 	        }).then((res)=>{
// 	            // console.log(JSON.stringify(res));
// 	            // console.log(JSON.parse(res));
// 	            return res.json()
// 			}).then((res)=>{

// 	            console.log(res.success);

// 	            if( JSON.parse(res.success) == true){
// 	            	// router.push("Home", ID);
// 	            	router.push("mainviewInd");
// 	            	console.log("Move to mainviewInd");
// 	            	console.log(individualID);
// 	            }
// 	            // JSON.parse(res._bodyInit).documents[1].address_name
// 	        }).catch((err)=>{
// 	            console.log(err);
// 	        });
// }


// function businessSignup(){
// 	router.push("signupBis");
// 	console.log("Move to SignUp");
// }

// function businessSignin(){
// 	// router.push("mainviewBis");
// 	var opts = ({
// 		'username' : businessID.value,
// 		'password' : businessPW.value
// 	});

// 	console.log(JSON.stringify(opts));
//     console.log('sign'); //Sign_in 함수가 호출되었는지 확인
    

//     fetch('http://69e16e34.ngrok.io/musers/Msignin',{
//     	method: "POST",
//     	headers: {
//     		"Content-type": "application/JSON"
//     	},
//     	body : JSON.stringify(opts)
    	
//     }).then((res)=>{
// 	            console.log(JSON.stringify(res));
// 	            // console.log(JSON.parse(res));
// 	            return res.json()
// 	        }).then((res)=>{

// 	        	console.log(JSON.stringify(res.success));


// 	        	businessID = businessID.value;

// 	        	if( JSON.parse(res.success) == true){
// 	            	// router.push("Home", ID);
// 	            	router.push("mainviewBis", businessID);
// 	            	console.log("Move to mainviewBis");
// 	            	console.log(businessID);
// 	            }
// 	            // JSON.parse(res._bodyInit).documents[1].address_name
// 	        }).catch((err)=>{
// 	        	console.log(err);
// 	        });
// 	    }


// 	    module.exports = {
// 	    	individualID : individualID,
// 	    	individualPW : individualPW,
// 	    	businessID : businessID,
// 	    	businessPW : businessPW,
// 	    	individualSignup : individualSignup,
// 	    	individualSignin : individualSignin,
// 	    	businessSignup : businessSignup,
// 	    	businessSignin : businessSignin,
// 	    	loginColorChange : loginColorChange,
// 	    	indiChange : indiChange,
// 	    	busiChange : busiChange

// 	    };	    