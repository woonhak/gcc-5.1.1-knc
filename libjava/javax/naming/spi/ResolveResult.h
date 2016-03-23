
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_spi_ResolveResult__
#define __javax_naming_spi_ResolveResult__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace naming
    {
        class Name;
      namespace spi
      {
          class ResolveResult;
      }
    }
  }
}

class javax::naming::spi::ResolveResult : public ::java::lang::Object
{

public: // actually protected
  ResolveResult();
public:
  ResolveResult(::java::lang::Object *, ::java::lang::String *);
  ResolveResult(::java::lang::Object *, ::javax::naming::Name *);
  virtual ::javax::naming::Name * getRemainingName();
  virtual ::java::lang::Object * getResolvedObj();
  virtual void setRemainingName(::javax::naming::Name *);
  virtual void appendRemainingName(::javax::naming::Name *);
  virtual void appendRemainingComponent(::java::lang::String *);
  virtual void setResolvedObj(::java::lang::Object *);
private:
  static const jlong serialVersionUID = -4552108072002407559LL;
public: // actually protected
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) resolvedObj;
  ::javax::naming::Name * remainingName;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_naming_spi_ResolveResult__
