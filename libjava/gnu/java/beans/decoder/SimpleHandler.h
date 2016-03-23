
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_decoder_SimpleHandler__
#define __gnu_java_beans_decoder_SimpleHandler__

#pragma interface

#include <gnu/java/beans/decoder/AbstractElementHandler.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace beans
      {
        namespace decoder
        {
            class Context;
            class ElementHandler;
            class ObjectContext;
            class SimpleHandler;
        }
      }
    }
  }
  namespace java
  {
    namespace beans
    {
        class ExceptionListener;
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Attributes;
      }
    }
  }
}

class gnu::java::beans::decoder::SimpleHandler : public ::gnu::java::beans::decoder::AbstractElementHandler
{

public: // actually package-private
  SimpleHandler(::gnu::java::beans::decoder::ElementHandler *);
public: // actually protected
  virtual ::gnu::java::beans::decoder::Context * startElement(::org::xml::sax::Attributes *, ::java::beans::ExceptionListener *);
public:
  virtual void endElement(::java::lang::String *);
public: // actually protected
  virtual ::java::lang::Object * parse(::java::lang::String *) = 0;
private:
  ::gnu::java::beans::decoder::ObjectContext * __attribute__((aligned(__alignof__( ::gnu::java::beans::decoder::AbstractElementHandler)))) context;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_beans_decoder_SimpleHandler__
