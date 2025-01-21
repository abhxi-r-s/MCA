function validate()
{
    if(!namevalidate())
    {
        alert("Invalid Name Format")
        return false;
    }
    if(!passwordValiadate())
    {
        alert("Passwords Don't match")
        return false;
    }

}
function namevalidate()
{
    var in1=document.getElementById("name").value
    var pattern=/^[A-Za-z\s]{5,}$/
    if(!pattern.test(in1))
    {
        return false;
    }
    else
    {
        return true;
    }
}
function passwordValiadate()
{
    var in1=document.getElementById("pass1").value
    var in2=document.getElementById("pass2").value
    if(!(in1==in2))
    {
        return false;
    } 
    else
    {
        return true;
    }
}

