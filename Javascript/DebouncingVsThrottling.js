/** DEBOUNCING VS THROTTLING
 * ==> used for optimizations
 * ==> rate limiting function calls
 * 
 * EXAMPLE 1: Search bar of ECommerce website
 *    School bags
 * Deboucing:(makes sense) if "School bags is typed frequently it will make 2-3 api calls but if 
 *  typed slowly, 8-9 api calls (if time diff between key press events is more than a specified delay) "
 * 
 * Throttling: if time diff more than a specified delay,then after each time delay the api call is made
 * 
 * EXAMPLE 2: Window/ browser window resizing
 * 
 * EXAMPLE 3: Button press
 * Debouncing: User clicks button frequently 1000 times, then after user stops and continues again, then difference between the 2 click events can be taken as delay and api will be called everytime after that delay
 * Throttling: (Makes more sense) makes the first api call successfully after the specified delay.
 * 
 * 
 */