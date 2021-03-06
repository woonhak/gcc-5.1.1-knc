
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_Consumer$Backdoor__
#define __gnu_xml_dom_Consumer$Backdoor__

#pragma interface

#include <gnu/xml/pipeline/DomConsumer$Handler.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class Consumer$Backdoor;
          class DomDoctype;
      }
      namespace pipeline
      {
          class DomConsumer;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Text;
      }
    }
    namespace xml
    {
      namespace sax
      {
          class Attributes;
      }
    }
  }
}

class gnu::xml::dom::Consumer$Backdoor : public ::gnu::xml::pipeline::DomConsumer$Handler
{

public: // actually protected
  Consumer$Backdoor(::gnu::xml::pipeline::DomConsumer *);
private:
  ::gnu::xml::dom::DomDoctype * getDoctype();
public:
  virtual void startDTD(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void endDTD();
  virtual void notationDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void unparsedEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void internalEntityDecl(::java::lang::String *, ::java::lang::String *);
  virtual void externalEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void startElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::org::xml::sax::Attributes *);
  virtual void endElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
public: // actually protected
  virtual ::org::w3c::dom::Text * createText(jboolean, JArray< jchar > *, jint, jint);
public:
  virtual void elementDecl(::java::lang::String *, ::java::lang::String *);
  virtual void attributeDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void startDocument();
  virtual void endDocument();
  virtual jboolean canPopulateEntityRefs();
  virtual void startEntity(::java::lang::String *);
  virtual void endEntity(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_Consumer$Backdoor__
