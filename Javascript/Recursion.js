let user ={
    name: "Trishna",
    address: {
      personal: {
        city: "Assam",
        state: "Uttrakhand",
        area: "UP",
      },
      office: {
        city: "Hyderabad",
        area: {
          landmark: "Hi",
        }
      }
    }
  }
  let magic = (obj, parent, finalObj) => {
    for(let key in obj){
      if(typeof obj[key] === "object"){
        magic(obj[key], parent + "_" + key, finalObj);
      }
      else {
        finalObj[parent + "_" + key] = obj[key];
      }
    }
  }
  
  let finalObj= {};
  magic(user, "user", finalObj);
  
  console.log(finalObj);