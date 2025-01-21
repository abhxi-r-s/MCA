function validate()
{
    if(!namValidate())
    {
        alert("Invalid name format");
        return false;
    }
    if(!numberValidate())
    {
        alert("Invalid number format");
        return false;
    }
    if(!emailvalidate())
    {
        alert("Invalide email format");
        return false;
    }

}
function namValidate()
{
    var name=document.getElementById("uname").value;
    var pattern=/^[A-Z]{5,35}$/;
    if(!pattern.test(name))
    {
        return false;
    }
    else{
        return true;
    }
}
function numberValidate()
{
    var num=document.getElementById("num").value;
    var pattern=/^[1-9][0-9]{9}$/;
    if(!pattern.test(num))
    {
        return false;
    }
    else
    {
        return true;
    }
}

function emailvalidate()
{
    var mail=document.getElementById("email").value;
    var pattern = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;

    if(!pattern.test(mail))
    {
        return false;
    }
    else{
        return true;
    }

}