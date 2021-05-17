/** EVENT BUBBLING AND CAPTURING (TRICKLING)
 * 
 * ==> Both are the ways of event propagationin the DOM tree
 *   
 * ~> So if you call a event from the child component, it will gradually travel up to the 
 * parent component of the dom. This is what event bubbling is.
 * 
 * ~> Capturing(Trickling) is when a event is fired from the parent and it travels down the dom to its child.
 * 
 */

document.querySelector("#grandparent")
.addEventListener('click', ()=>{
    console.log("GrandParent Clicked");
},true) //capturing

document.querySelector("#parent")
.addEventListener('click', ()=>{
    console.log("Parent Clicked");
},false) //bubbling

document.querySelector("#child")
.addEventListener('click', (e)=>{
    console.log("Child Clicked");
   // e.stopPropagation(); // It stops the further propagation.
},true) //capturing

//  This event handler takes the third parameter a boolean value.
//  If the thrid parameter is not passed or is False, then on clicking bubbling takes place
//  and if it is true then onclicking trickling takes place
//  Index2.html is demo. 
//  Its an expensive operation. 