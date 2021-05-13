/**
 *  Throttling:
 * ~~~~~~~~~~~~
     Throttling or sometimes is also called throttle function is a practice used in websites.
     Throttling is used to call a function after every millisecond or a particular interval of time only the first click is executed immediately.
* ~~~~~~~~~~~~
 * -> It gives control over the rate at which a fuction is beign called.
 * EG: suppose a button, onclicking makes an api call! So if you click it 10 times it will make 10 calls to the same api, which is unnecessary.
 * We can limit it by throttling that button
 * 
 * Advantages of throttling function:

   * It prevent frequent calling of the function.
   * It makes the website faster and controls the rate at which a particular function is called.
 */

//  Throttling Implementation
//  Throttle function returns a function

  const expensive = (arg)=>{
      console.log("Expensive"+ "---"+ arg);
  }

  
  const Throttle = (func, limit) =>{
      let flag = true;
      let context = this
      args= arguments 
      return function(){
         if(flag){
            func.apply(context,args);
            flag= false;
       
         setTimeout(()=>{
            flag= true
         }, limit)
      }}
  }

  const tr = Throttle(expensive, 100); 
   