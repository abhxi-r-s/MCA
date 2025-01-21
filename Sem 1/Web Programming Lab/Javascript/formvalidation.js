function validate() {
    if (!nameValidate()) {
      alert("Invalid name format");
      return false;
    }
    if (!idValidate()) {
      alert("Invalid Id format");
      return false;
    }
    if (!phnValidate()) {
      alert("Invalid format for phone number");
      return false;
    }
  
    if (!ageValidate()) {
      alert("Invalid Format for age");
      return false;
    }
    if (!cityValidate()) {
      alert("Invalid city format ");
      return false;
    }
  
    if(!passValidate())
    {
      alert("Invald password format");
      return false;
    }
    alert("Valid");
  }
  
  function nameValidate() {
    var uname = document.getElementById("uname");
    var pattern = /^[A-Z\s]{5,20}$/;
    if (!pattern.test(uname.value)) {
      return false;
    } else {
      return true;
    }
  }
  function idValidate() {
    var uid = document.getElementById("uid");
    var pattern = /^TVE-\d{2}-MCA-\d{4}$/;
    if (!pattern.test(uid.value)) {
      return false;
    } else {
      return true;
    }
  }
  
  function phnValidate() {
    var phn = document.getElementById("phn");
    var pattern = /^[6-9]\d{9}$/;
    if (!pattern.test(phn.value)) {
      return false;
    } else {
      return true;
    }
  }
  function ageValidate() {
    var age = document.getElementById("age");
    var pattern = /^(0[1-9]|[1-9]\d)$/;
    if (!pattern.test(age.value)) {
      return false;
    } else {
      return true;
    }
  }
  function cityValidate() {
    var city = document.getElementById("city");
    var pattern = /^[A-Z]{3,20}$/;
    if (!pattern.test(city.value)) {
      return false;
    } else {
      return true;
    }
  }
  
  function passValidate()
  {
      var pass=document.getElementById("pass");
      var pattern=/((?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@#$%!^])){8,}/;
      if(!pattern.test(pass.value)){
        return false;
      }
      else{
        return true;
      }
  }