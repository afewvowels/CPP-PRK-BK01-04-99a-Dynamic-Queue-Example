#line 245 "./exceptions.w"

#ifndef _EXCEPTIONS_H
#define _EXCEPTIONS_H

class AbstractException{
public:
AbstractException(std::string src){this->src= src;}
~AbstractException(void){}

const std::string&source(void){return src;}

virtual const std::string toString(void)= 0;

private:
std::string src;
};

class Exception:public AbstractException{
public:
Exception(std::string src= ""):AbstractException(src){}
~Exception(void){}

const std::string toString(void);
};

class DataAccessException:public Exception{
public:
DataAccessException(std::string src= ""):Exception(src){}
~DataAccessException(void){}

const std::string toString(void);
};

class DataValueException:public Exception{
public:
DataValueException(std::string src= ""):Exception(src){}
~DataValueException(void){}

const std::string toString(void);
};

class ContainerEmptyException:public DataAccessException{
public:
ContainerEmptyException(std::string src= ""):DataAccessException(src){}
~ContainerEmptyException(void){}

const std::string toString(void);
};

class ContainerFullException:public DataAccessException{
public:
ContainerFullException(std::string src= ""):DataAccessException(src){}
~ContainerFullException(void){}

const std::string toString(void);
};

class DivideByZeroException:public DataValueException{
public:
DivideByZeroException(std::string src= ""):DataValueException(src){}
~DivideByZeroException(void){}

const std::string toString(void);
};

class DomainException:public DataValueException{
public:
DomainException(std::string src= ""):DataValueException(src){}
~DomainException(void){}

const std::string toString(void);
};

class DuplicateKeyException:public DataValueException{
public:
DuplicateKeyException(std::string key,std::string src= ""):
DataValueException(src){this->key= key;}
~DuplicateKeyException(void){}

const std::string toString(void);

private:
std::string key;
};

class InvalidIndexException:public DataAccessException{
public:
InvalidIndexException(int index,std::string src= ""):
DataAccessException(src){this->index= index;}
~InvalidIndexException(void){}

const std::string toString(void);

private:
int index;
};

class KeyNotFoundException:public DataValueException{
public:
KeyNotFoundException(std::string key,std::string src= ""):
DataValueException(src){this->key= key;}
~KeyNotFoundException(void){}

const std::string toString(void);

private:
std::string key;
};


#endif

/*:26*/
