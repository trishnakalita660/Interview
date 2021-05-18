/** EVENT DELEGATION:
 * It is the way of handling events in a web page in a better way.
 * -->It is based on wave bubbling i,e, it is based on how an event moves along the hierchy of the DOM tree.
 *  
 * ~~~> The idea behind event delegation is that if there are a lot of elements handled in the same way
 * then instead of assigning a handler to each of them individually, a single handler is attactched on their common ancestor.
 *  
 * ~~~> create a behavior and attach it to different events
 * 
 * BENEFITS: Improves memory and performance, Less Code, DOM Manipulation
 * Limit: All events are not bubbled up
 */

document.querySelector("#category").addEventListener('click', (e)=>{
    console.log(e.target.id);
      window.location.href = "/"+e.target.id
       
});

