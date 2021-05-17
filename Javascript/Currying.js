/** CURRYING: Technique for transforming functions from for f(a,b,c) into callable as f(a)(b)(c) .
 * ==> Doesnot calls a function, it just transforms it.
 * ==> Curring function returns a wrapper function
 * ~~~~  When a curring function is called, its arguement is saved in the lexical environment and a new wrapper function is returned.
 * ======> This wrapper function passes the call to the original sum 
 *if time diff between key press events is more than a specified delay

 */

let multiply = (x,y)=>{
    let t= x*y;
    console.log(t);
    return t;
}
let multiplyBy2 = multiply.bind(2);

//  Using Function closures

function curry(f) { 
    return function(a) {
      return function(b) {
        return f(a, b);
      };
    };
  }
  
  
  function sum(a, b) {
    return a + b;
  }
  
  let curriedSum = curry(sum);
  
  console.log( curriedSum(1)(2) )

  /** More advanced implementations of curring like ._curry from lodash library, returns a wrapper that allows a function to be called both partially and normally.
   * 
    */

  function sum2(a,b){
    return a+b;
  }

  let curriedSum2 = _.curry(sum);
  alert(curriedSum2(1,2));
  alert(curriedSum2(1)(2));