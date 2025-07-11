CREATE DATABASE STORE;
USE STORE;
CREATE TABLE PRODUCT(PdtId varchar(20) PRIMARY KEY,
PName varchar(20),Price INT,Quantity int); 

call INSERTVALUES("101C","PEN",20,100);
call INSERTVALUES("102C","PEN",0,100);
call INSERTVALUES("103C","PENCIL",0,0);
call INSERTVALUES("109C","PENCIL",0,0);
call Insertvalues(1006,"Sharpner",-2.5,-20);
SELECT * FROM PRODUCT;



CREATE TABLE SALE(SaleId varchar(20) PRIMARY KEY,DeliveryAddress varchar(100));
CREATE TABLE SALEITEM(SaleId varchar(20),PdtId varchar(20),Qty int,
FOREIGN KEY(SaleId) REFERENCES SALE(SaleId),FOREIGN KEY(PdtId) REFERENCES PRODUCT(PdtId));

SELECT * FROM PRODUCT;
SELECT * FROM SALE;
SELECT * FROM SALEITEM;

-- INSERT INTO Product (PdtId, PName, Price, Quantity ) VALUES ("105C","Pencil", 5, 10), 
-- ("110C","Sharpener", 3, 10);
INSERT INTO SALE VALUES("001","home123"),("002","home345");

SET SQL_SAFE_UPDATES = 0;
-- INSERT INTO SALEITEM VALUES("001","101C",10);
-- INSERT INTO SALEITEM VALUES("002","101C")
DELETE FROM PRODUCT WHERE PDTID IN("105C","110C");

INSERT INTO PRODUCT VALUES("102C","PENCIL",15,200);
UPDATE PRODUCT SET QUANTITY=90 WHERE PDTID="101C";
INSERT INTO SALEITEM VALUES("001","102C",400);