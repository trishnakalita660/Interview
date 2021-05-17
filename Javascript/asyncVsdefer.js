/** Both async and defer are boolean attributes which are used along the script tags to load external scripts efficiently
 *into a webpage.
 *  
 * loading a webpage involves 2 tasks:
 *  i) Parsing the HTML
 *  ii) Loading the scripts: 
 *         2 parts:
 *            1. Fetching script from the network
 *            2. executing the script line by line
 * / 
  

//   USING NORMAL SCRIPT TAG  <script src="" alt="" />
 
   HTML parsing                                             HTML parsing resumes
._________________. Script fetching     script exectution ._______________________.
                   ******************~~~~~~~~~~~~~~~~~~~~~


// USING ASYNC  <script async src="" alt="" />

   HTML parsing                                             HTML parsing resumes
.__________________________________.     script exectution  ._______________________.
Script fetching                     ~~~~~~~~~~~~~~~~~~~~~~~~     
(done during html parsing)               
             **********************

 // USING DEFER  <script defer src="" alt="" />

   HTML parsing                        HTML parsing completes    script exectution 
._____________________________________________________________. ~~~~~~~~~~~~~~~~~~~~~~~~
Script fetching                                                                      
(done during html parsing)               
 ********************


//   ASYNC attributes does not follow order of scripts execution, but defer does.
//  use defer is multiple scripts.
//  defer is better than async