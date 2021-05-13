// Call, apply and bind method in Javascript 

let name1 = {
    firstname: "Daenerys",
    lastname: 'Targaryen',
    printTheName: function(){
        console.log(this.firstname + " " + this.lastname);
    }
}
name1.printTheName();

let printFullName = function (tryin, test){
    console.log(this.firstname + " " + this.lastname+ " "+ tryin + " " +test);
}

printFullName.call(name1, "has", "Dragons");
//  The above function takes first parameter as the context and rest will be the parameters of the fuction that will be called. 


// =========================================================================================
// FUNCTION BOROWWING:
// we can borrow a function from another object and use it with the data of some
// other object. 

// ****  So all "call" function does is borrow methods from other objects and use with different data ***** 
  let name2 = {
      firstname: "Arya",
      lastname: "Stark"
  }
name1.printTheName.call(name2);
  
// =================================================
// Difference between Call and Apply:

// In apply method the parameters after the variable/object is passed as a list/array 

// APPLY METHOD: 
// With apply , you can write a method once, and then inherit it in another object, without having to rewrite the method for the new object. apply is very similar to call() , except for the type of arguments it supports.
name1.printTheName.apply(name2);
printFullName.apply(name2, ["Loves", "To Kill"]);

// =================================================

// BIND METHOD:

// Bind methods binds the particular method with the  object and returns the copy of that method
//  which can be invoked later.

let printNameLater = printFullName.bind(name1, ["is", "idiot"])
console.log(printNameLater);  // This will return(print in console) the entire "printFullName" function. This is 
                            //  because the bind function makes a copy of the method and binds it with the object that goes as a parameter inside it 
                            //  and saves it for later invocation.
printNameLater();  // The binded one is invoked and prints "DAenerys Tar.. is idiot"

 