/**  Storage API is used by developers is used by developers to store data into web browser
 * which is key-value pairs in the form of strings. 
 --> Follows same origin policy due to security reason(HTTPS,DomainName, port)

2 mechanism:
i) Session Storage:  Data is persisted only for the time a user logs in and as soon as user closes the app, data is lost.
It is useful than cookies. Unlike cookies, session storage data is not being sent to server while making network calls.
It can store more data.

ii) Local Storage: Same as session storage but even if the web browser is closed, data doesnot vanished.
It has highest memory capacity than SS or cookies.
Used for optimizing web app.
Getting data is faster

==> Local Storage is stored on the window (global) object of the browser.

*/  