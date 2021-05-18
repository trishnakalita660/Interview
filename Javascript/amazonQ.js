// Can you write code for this function: sum(a)(b)(c)....( n)(). This should return the sum of a+b+c....+n.

let sum =function(a){
 return function(b){
    if(b){ 
    return sum(a+b);}
    else return a;
 }
}

console.log(sum(1)(2)(3)(4)());

// let sum = a => b => b ? sum(a + b) : a;

// console.log(sum(10)(20)(3)(4)());