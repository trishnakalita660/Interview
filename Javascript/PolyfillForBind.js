//  POLYFILL FOR BIND METHOD

//  It is basically writing your own bind function.
//  Polyfill is basically back support of methods which our old browser doesn’t support

let name1 = {
    firstname: "Daenerys",
    lastname: 'Targaryen',
    
}

let printTheName = function(home){
    console.log(this.firstname + " " + this.lastname, " ", home);
}

let printName = printTheName.bind(name1,"test");
printName();


 Function.prototype.myBind = function(...args){
     let onj = this
     params = args.slice(1);
   return function(...args2){
     onj.apply(args[0], [...params, ...args2])
   }
}

let printName2 = printTheName.myBind(name1,"valariya");
printName2();
