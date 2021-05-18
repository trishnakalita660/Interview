/**
 * 
 * 
 */

let arr = ["Trishna", "Dhiman"];
// PROTOTYPE:
/** Whenever a object/fuction is created, the js engine automatically attaches the object with an object which attaches hidden properties and fuctions.
 * These comes by prototype. 
 * Prototype is basically an object wihich the js engine automatically attaches to each and every function/object created by developer
 * 
 */

// PrototypeChain
/**That prototype object has a prototype of its own, and so on until an object is reached with null as its prototype. By definition, null has no prototype, and acts as the final link in this prototype chain.
 * JavaScript objects are dynamic "bags" of properties (referred to as own properties). JavaScript objects have a link to a prototype object.
 *  When trying to access a property of an object, the property will not only be sought on the object but on the prototype of the object, the prototype of the prototype, and so on until either a property with a matching name is found or the end of the prototype chain is reached.
 *  
 */

// Let's create an object o from function f with its own properties a and b:
let f = function () {
    this.a = 1;
    this.b = 2;
 }
 let o = new f(); // {a: 1, b: 2}
 
 // add properties in f function's prototype
 f.prototype.b = 3;
 f.prototype.c = 4;
 
 // do not set the prototype f.prototype = {b:3,c:4}; this will break the prototype chain
 // o.[[Prototype]] has properties b and c.
 // o.[[Prototype]].[[Prototype]] is Object.prototype.
 // Finally, o.[[Prototype]].[[Prototype]].[[Prototype]] is null.
 // This is the end of the prototype chain, as null,
 // by definition, has no [[Prototype]].
 // Thus, the full prototype chain looks like:
 // {a: 1, b: 2} ---> {b: 3, c: 4} ---> Object.prototype ---> null
 
 console.log(o.a); // 1
 // Is there an 'a' own property on o? Yes, and its value is 1.
 
 console.log(o.b); // 2
 // Is there a 'b' own property on o? Yes, and its value is 2.
 // The prototype also has a 'b' property, but it's not visited.
 // This is called Property Shadowing
 
 console.log(o.c); // 4
 // Is there a 'c' own property on o? No, check its prototype.
 // Is there a 'c' own property on o.[[Prototype]]? Yes, its value is 4.
 
 console.log(o.d); // undefined
 // Is there a 'd' own property on o? No, check its prototype.
 // Is there a 'd' own property on o.[[Prototype]]? No, check its prototype.
 // o.[[Prototype]].[[Prototype]] is Object.prototype and there is no 'd' property by default, check its prototype.
 // o.[[Prototype]].[[Prototype]].[[Prototype]] is null, stop searching,
 // no property found, return undefined.
 