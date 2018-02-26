#line 259 "./exceptions.w"

#include <exceptions.h> 

/*35:*/
#line 377 "./exceptions.w"

const std::string Exception::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "generic exception";

return msg;
}

/*:35*//*38:*/
#line 410 "./exceptions.w"

const std::string DataAccessException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "data access exception";

return msg;
}

/*:38*//*41:*/
#line 441 "./exceptions.w"

const std::string DataValueException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "data value exception";

return msg;
}

/*:41*//*44:*/
#line 483 "./exceptions.w"

const std::string ContainerEmptyException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "container empty";

return msg;
}

/*:44*//*47:*/
#line 514 "./exceptions.w"

const std::string ContainerFullException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "container full";

return msg;
}

/*:47*//*50:*/
#line 542 "./exceptions.w"

const std::string DivideByZeroException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "divide by zero";

return msg;
}

/*:50*//*53:*/
#line 572 "./exceptions.w"

const std::string DomainException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "domain exception";

return msg;
}

/*:53*//*56:*/
#line 608 "./exceptions.w"

const std::string DuplicateKeyException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "duplicate key '"+key+"'";

return msg;
}

/*:56*//*59:*/
#line 646 "./exceptions.w"

const std::string InvalidIndexException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "invalid index ("
+std::to_string((unsigned long long int)index)+')';

return msg;
}

/*:59*//*62:*/
#line 684 "./exceptions.w"

const std::string KeyNotFoundException::toString(void){
std::string msg;

if(source().length()> 0)
msg= source()+": ";
else
msg= "";

msg+= "key not found '"+key+"'";

return msg;
}

/*:62*/
#line 262 "./exceptions.w"


/*:27*/
