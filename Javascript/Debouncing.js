//  DEBOUNCING
//  useful in webapps
//  used in flipkart search bar  
//  ====>> Auto suggestion! it doesnot make api calls for each and every letter typed in the search bar! 
//   eg: school bag  this makes 2 api call
let counter = 0;
const getData = () =>{
    //  Calls api and get data

    console.log("Fetcheing data", + counter++);
}
// ==========================
// ~~~~~~~~~~~~~~~~~~~
/**DEBOUNCING DEFINATION:
 Debouncing in JavaScript is a practice used to improve browser performance.
There might be some functionality in a web page which requires time-consuming computations.
If such a method is invoked frequently, it might greatly affect the performance of the browser, as JavaScript is a single threaded language. 
Debouncing is a programming practice used to ensure that time-consuming tasks do not 
fire so often, that it stalls the performance of the web page. 
In other words, it limits the rate at which a function gets invoked. */ 
// ~~~~~~~~~~~~~~~~~~~~


/** EXPLANATION: 
 * Debounce method takes two args as shown below and it makes sure that no unnecessary
 * calls are made and only makes a call when the interval between 2 function calls is greater than the delay
 * (passed in the function arguement ). 
 * --> optimizes performance
 * --> also used in scrolling
 * --> if not used, it might freeze the browser
 * --> also used in minimizing/ maximizing your window
**/
// ==========================
const Debouncing = (fn, delay)=>{
    let timer;
    return function(){
        let context = this
        args = arguments;
        clearTimeout(timer);
        timer = setTimeout(()=>{
            getData.apply(context, arguments);
        },delay);
    }
}

const MakeCalls = Debouncing( getData, 300);