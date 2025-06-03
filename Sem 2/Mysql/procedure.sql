CREATE DEFINER=`root`@`localhost` PROCEDURE `INSERTVALUES`(in PDTID varchar(20),in PNAME varchar(20),in PRICE int,in QUANTITY int)
BEGIN
declare result varchar(20);
if PRICE>0 AND QUANTITY>0
then
	INSERT INTO PRODUCT VALUES(PDTID,PNAME,PRICE,QUANTITY);
    set result="Entered";
else
	set result="NOT ENTERED";
end if;
SELECT result as STATUS_;
END