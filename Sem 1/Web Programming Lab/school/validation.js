function validate()
{
    if(!namevalidate())
    {
        alert('Invalid format')
        return false;
    }
    else
    {
        return true;
    }

}
function namevalidate()
{
    var in1=document.getElementById("tname").value
    var pattern =/^[A-Z]{5,}$/
    if(!pattern.test(in1))
    {
        return false;
    }
    else{
        return true;
    }
}